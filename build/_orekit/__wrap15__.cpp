#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Chan1997::class$ = NULL;
              jmethodID *Chan1997::mids$ = NULL;
              bool Chan1997::live$ = false;

              jclass Chan1997::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_184c2f4ec5889c74] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0ed38e7bbee7fafc] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Chan1997::Chan1997() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Chan1997::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_184c2f4ec5889c74], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Chan1997::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0ed38e7bbee7fafc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Chan1997::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_5d7ecb27bb5e3bc3]));
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_Chan1997_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Chan1997_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Chan1997_init_(t_Chan1997 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Chan1997_compute(t_Chan1997 *self, PyObject *args);
              static PyObject *t_Chan1997_getType(t_Chan1997 *self, PyObject *args);
              static PyObject *t_Chan1997_get__type(t_Chan1997 *self, void *data);
              static PyGetSetDef t_Chan1997__fields_[] = {
                DECLARE_GET_FIELD(t_Chan1997, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Chan1997__methods_[] = {
                DECLARE_METHOD(t_Chan1997, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Chan1997, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Chan1997, compute, METH_VARARGS),
                DECLARE_METHOD(t_Chan1997, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Chan1997)[] = {
                { Py_tp_methods, t_Chan1997__methods_ },
                { Py_tp_init, (void *) t_Chan1997_init_ },
                { Py_tp_getset, t_Chan1997__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Chan1997)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Chan1997, t_Chan1997, Chan1997);

              void t_Chan1997::install(PyObject *module)
              {
                installType(&PY_TYPE(Chan1997), &PY_TYPE_DEF(Chan1997), module, "Chan1997", 0);
              }

              void t_Chan1997::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "class_", make_descriptor(Chan1997::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "wrapfn_", make_descriptor(t_Chan1997::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Chan1997_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Chan1997::initializeClass, 1)))
                  return NULL;
                return t_Chan1997::wrap_Object(Chan1997(((t_Chan1997 *) arg)->object.this$));
              }
              static PyObject *t_Chan1997_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Chan1997::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Chan1997_init_(t_Chan1997 *self, PyObject *args, PyObject *kwds)
              {
                Chan1997 object((jobject) NULL);

                INT_CALL(object = Chan1997());
                self->object = object;

                return 0;
              }

              static PyObject *t_Chan1997_compute(t_Chan1997 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                return callSuper(PY_TYPE(Chan1997), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Chan1997_getType(t_Chan1997 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Chan1997), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Chan1997_get__type(t_Chan1997 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/files/sinex/Dcb.h"
#include "java/util/HashSet.h"
#include "org/hipparchus/util/Pair.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Dcb::class$ = NULL;
        jmethodID *Dcb::mids$ = NULL;
        bool Dcb::live$ = false;

        jclass Dcb::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Dcb");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addDcbLine_4f8497a13a203241] = env->getMethodID(cls, "addDcbLine", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_getAvailableObservationPairs_f7c51ce9ecdd2548] = env->getMethodID(cls, "getAvailableObservationPairs", "()Ljava/util/HashSet;");
            mids$[mid_getDcb_f49da90729a92c95] = env->getMethodID(cls, "getDcb", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getDcb_a2371a506507114c] = env->getMethodID(cls, "getDcb", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getMaximumValidDateForObservationPair_28607228106a09f1] = env->getMethodID(cls, "getMaximumValidDateForObservationPair", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMaximumValidDateForObservationPair_359e633219ef4315] = env->getMethodID(cls, "getMaximumValidDateForObservationPair", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinimumValidDateForObservationPair_28607228106a09f1] = env->getMethodID(cls, "getMinimumValidDateForObservationPair", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinimumValidDateForObservationPair_359e633219ef4315] = env->getMethodID(cls, "getMinimumValidDateForObservationPair", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Dcb::Dcb() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void Dcb::addDcbLine(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4) const
        {
          env->callVoidMethod(this$, mids$[mid_addDcbLine_4f8497a13a203241], a0.this$, a1.this$, a2.this$, a3.this$, a4);
        }

        ::java::util::HashSet Dcb::getAvailableObservationPairs() const
        {
          return ::java::util::HashSet(env->callObjectMethod(this$, mids$[mid_getAvailableObservationPairs_f7c51ce9ecdd2548]));
        }

        jdouble Dcb::getDcb(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDcb_f49da90729a92c95], a0.this$, a1.this$, a2.this$);
        }

        jdouble Dcb::getDcb(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDcb_a2371a506507114c], a0.this$, a1.this$, a2.this$);
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMaximumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaximumValidDateForObservationPair_28607228106a09f1], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMaximumValidDateForObservationPair(const ::java::lang::String & a0, const ::java::lang::String & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaximumValidDateForObservationPair_359e633219ef4315], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMinimumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinimumValidDateForObservationPair_28607228106a09f1], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMinimumValidDateForObservationPair(const ::java::lang::String & a0, const ::java::lang::String & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinimumValidDateForObservationPair_359e633219ef4315], a0.this$, a1.this$));
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
        static PyObject *t_Dcb_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Dcb_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Dcb_init_(t_Dcb *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Dcb_addDcbLine(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getAvailableObservationPairs(t_Dcb *self);
        static PyObject *t_Dcb_getDcb(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getMaximumValidDateForObservationPair(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getMinimumValidDateForObservationPair(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_get__availableObservationPairs(t_Dcb *self, void *data);
        static PyGetSetDef t_Dcb__fields_[] = {
          DECLARE_GET_FIELD(t_Dcb, availableObservationPairs),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Dcb__methods_[] = {
          DECLARE_METHOD(t_Dcb, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Dcb, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Dcb, addDcbLine, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getAvailableObservationPairs, METH_NOARGS),
          DECLARE_METHOD(t_Dcb, getDcb, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getMaximumValidDateForObservationPair, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getMinimumValidDateForObservationPair, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Dcb)[] = {
          { Py_tp_methods, t_Dcb__methods_ },
          { Py_tp_init, (void *) t_Dcb_init_ },
          { Py_tp_getset, t_Dcb__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Dcb)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Dcb, t_Dcb, Dcb);

        void t_Dcb::install(PyObject *module)
        {
          installType(&PY_TYPE(Dcb), &PY_TYPE_DEF(Dcb), module, "Dcb", 0);
        }

        void t_Dcb::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "class_", make_descriptor(Dcb::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "wrapfn_", make_descriptor(t_Dcb::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Dcb_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Dcb::initializeClass, 1)))
            return NULL;
          return t_Dcb::wrap_Object(Dcb(((t_Dcb *) arg)->object.this$));
        }
        static PyObject *t_Dcb_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Dcb::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Dcb_init_(t_Dcb *self, PyObject *args, PyObject *kwds)
        {
          Dcb object((jobject) NULL);

          INT_CALL(object = Dcb());
          self->object = object;

          return 0;
        }

        static PyObject *t_Dcb_addDcbLine(t_Dcb *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;

          if (!parseArgs(args, "sskkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(self->object.addDcbLine(a0, a1, a2, a3, a4));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDcbLine", args);
          return NULL;
        }

        static PyObject *t_Dcb_getAvailableObservationPairs(t_Dcb *self)
        {
          ::java::util::HashSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableObservationPairs());
          return ::java::util::t_HashSet::wrap_Object(result);
        }

        static PyObject *t_Dcb_getDcb(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "KKk", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.getDcb(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "ssk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDcb(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDcb", args);
          return NULL;
        }

        static PyObject *t_Dcb_getMaximumValidDateForObservationPair(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
              {
                OBJ_CALL(result = self->object.getMaximumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getMaximumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMaximumValidDateForObservationPair", args);
          return NULL;
        }

        static PyObject *t_Dcb_getMinimumValidDateForObservationPair(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
              {
                OBJ_CALL(result = self->object.getMinimumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getMinimumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMinimumValidDateForObservationPair", args);
          return NULL;
        }

        static PyObject *t_Dcb_get__availableObservationPairs(t_Dcb *self, void *data)
        {
          ::java::util::HashSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableObservationPairs());
          return ::java::util::t_HashSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$VectorConsumer::class$ = NULL;
            jmethodID *ParseToken$VectorConsumer::mids$ = NULL;
            bool ParseToken$VectorConsumer::live$ = false;

            jclass ParseToken$VectorConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$VectorConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_029ff0cbf68ea054] = env->getMethodID(cls, "accept", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$VectorConsumer::accept(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_029ff0cbf68ea054], a0.this$);
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
            static PyObject *t_ParseToken$VectorConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$VectorConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$VectorConsumer_accept(t_ParseToken$VectorConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$VectorConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$VectorConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$VectorConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$VectorConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$VectorConsumer)[] = {
              { Py_tp_methods, t_ParseToken$VectorConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$VectorConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$VectorConsumer, t_ParseToken$VectorConsumer, ParseToken$VectorConsumer);

            void t_ParseToken$VectorConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$VectorConsumer), &PY_TYPE_DEF(ParseToken$VectorConsumer), module, "ParseToken$VectorConsumer", 0);
            }

            void t_ParseToken$VectorConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "class_", make_descriptor(ParseToken$VectorConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "wrapfn_", make_descriptor(t_ParseToken$VectorConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$VectorConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$VectorConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$VectorConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$VectorConsumer::wrap_Object(ParseToken$VectorConsumer(((t_ParseToken$VectorConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$VectorConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$VectorConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$VectorConsumer_accept(t_ParseToken$VectorConsumer *self, PyObject *arg)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
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
#include "org/orekit/geometry/fov/SmoothFieldOfView.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *SmoothFieldOfView::class$ = NULL;
        jmethodID *SmoothFieldOfView::mids$ = NULL;
        bool SmoothFieldOfView::live$ = false;

        jclass SmoothFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/SmoothFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCenter_d52645e0d4c07563] = env->getMethodID(cls, "getCenter", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFootprint_d179f90e70a637c1] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getX_d52645e0d4c07563] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getY_d52645e0d4c07563] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getZ_d52645e0d4c07563] = env->getMethodID(cls, "getZ", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_directionAt_9137bba253a33d9c] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getCenter() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenter_d52645e0d4c07563]));
        }

        ::java::util::List SmoothFieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_d179f90e70a637c1], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getX() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getX_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getY() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getY_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmoothFieldOfView::getZ() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getZ_d52645e0d4c07563]));
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
    namespace geometry {
      namespace fov {
        static PyObject *t_SmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothFieldOfView_getCenter(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getFootprint(t_SmoothFieldOfView *self, PyObject *args);
        static PyObject *t_SmoothFieldOfView_getX(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getY(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_getZ(t_SmoothFieldOfView *self);
        static PyObject *t_SmoothFieldOfView_get__center(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__x(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__y(t_SmoothFieldOfView *self, void *data);
        static PyObject *t_SmoothFieldOfView_get__z(t_SmoothFieldOfView *self, void *data);
        static PyGetSetDef t_SmoothFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothFieldOfView, center),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, x),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, y),
          DECLARE_GET_FIELD(t_SmoothFieldOfView, z),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothFieldOfView__methods_[] = {
          DECLARE_METHOD(t_SmoothFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothFieldOfView, getCenter, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getX, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getY, METH_NOARGS),
          DECLARE_METHOD(t_SmoothFieldOfView, getZ, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothFieldOfView)[] = {
          { Py_tp_methods, t_SmoothFieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::AbstractFieldOfView),
          NULL
        };

        DEFINE_TYPE(SmoothFieldOfView, t_SmoothFieldOfView, SmoothFieldOfView);

        void t_SmoothFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothFieldOfView), &PY_TYPE_DEF(SmoothFieldOfView), module, "SmoothFieldOfView", 0);
        }

        void t_SmoothFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "class_", make_descriptor(SmoothFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "wrapfn_", make_descriptor(t_SmoothFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothFieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothFieldOfView::initializeClass, 1)))
            return NULL;
          return t_SmoothFieldOfView::wrap_Object(SmoothFieldOfView(((t_SmoothFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_SmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothFieldOfView_getCenter(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getCenter());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getFootprint(t_SmoothFieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          return callSuper(PY_TYPE(SmoothFieldOfView), (PyObject *) self, "getFootprint", args, 2);
        }

        static PyObject *t_SmoothFieldOfView_getX(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getX());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getY(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getY());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_getZ(t_SmoothFieldOfView *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getZ());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmoothFieldOfView_get__center(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getCenter());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__x(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getX());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__y(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getY());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmoothFieldOfView_get__z(t_SmoothFieldOfView *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getZ());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *NumericalPropagator::class$ = NULL;
        jmethodID *NumericalPropagator::mids$ = NULL;
        bool NumericalPropagator::live$ = false;

        jclass NumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/NumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_16720c819e7ee0c1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
            mids$[mid_init$_5b526ccff1bb4b90] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_690f9b27ef4d22fe] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_getAllForceModels_2afa36052df4765d] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_removeForceModels_0fa09c18fee449d5] = env->getMethodID(cls, "removeForceModels", "()V");
            mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setIgnoreCentralAttraction_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIgnoreCentralAttraction", "(Z)V");
            mids$[mid_setInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_setMu_17db3a65980d3441] = env->getMethodID(cls, "setMu", "(D)V");
            mids$[mid_setOrbitType_48a062bf972c4ab5] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_4ca1644ed7c72fe3] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_tolerances_a306924d8981b7d2] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/utils/AbsolutePVCoordinates;)[[D");
            mids$[mid_tolerances_76a035e28bb473a2] = env->getStaticMethodID(cls, "tolerances", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_tolerances_562bbe4c6c808876] = env->getStaticMethodID(cls, "tolerances", "(DDLorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_beforeIntegration_826b4eda94da4e78] = env->getMethodID(cls, "beforeIntegration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_createMapper_2bea84b26b1efc07] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_e1fa3ce287fe2655] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_createHarvester_5cfd2a13971b74c7] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");
            mids$[mid_setUpStmAndJacobianGenerators_0fa09c18fee449d5] = env->getMethodID(cls, "setUpStmAndJacobianGenerators", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NumericalPropagator::NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_16720c819e7ee0c1, a0.this$)) {}

        NumericalPropagator::NumericalPropagator(const ::org::hipparchus::ode::ODEIntegrator & a0, const ::org::orekit::attitudes::AttitudeProvider & a1) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_5b526ccff1bb4b90, a0.this$, a1.this$)) {}

        void NumericalPropagator::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_690f9b27ef4d22fe], a0.this$);
        }

        ::java::util::List NumericalPropagator::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_2afa36052df4765d]));
        }

        ::org::orekit::orbits::OrbitType NumericalPropagator::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
        }

        ::org::orekit::utils::TimeStampedPVCoordinates NumericalPropagator::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cfeec55f7c63ec64], a0.this$, a1.this$));
        }

        ::org::orekit::orbits::PositionAngleType NumericalPropagator::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
        }

        void NumericalPropagator::removeForceModels() const
        {
          env->callVoidMethod(this$, mids$[mid_removeForceModels_0fa09c18fee449d5]);
        }

        void NumericalPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_0ee5c56004643a2e], a0.this$);
        }

        void NumericalPropagator::setIgnoreCentralAttraction(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIgnoreCentralAttraction_bd04c9335fb9e4cf], a0);
        }

        void NumericalPropagator::setInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialState_0ee5c56004643a2e], a0.this$);
        }

        void NumericalPropagator::setMu(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_17db3a65980d3441], a0);
        }

        void NumericalPropagator::setOrbitType(const ::org::orekit::orbits::OrbitType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitType_48a062bf972c4ab5], a0.this$);
        }

        void NumericalPropagator::setPositionAngleType(const ::org::orekit::orbits::PositionAngleType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_4ca1644ed7c72fe3], a0.this$);
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, const ::org::orekit::utils::AbsolutePVCoordinates & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_a306924d8981b7d2], a0, a1.this$));
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_76a035e28bb473a2], a0, a1.this$, a2.this$));
        }

        JArray< JArray< jdouble > > NumericalPropagator::tolerances(jdouble a0, jdouble a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::orbits::OrbitType & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_562bbe4c6c808876], a0, a1, a2.this$, a3.this$));
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
        static PyObject *t_NumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NumericalPropagator_init_(t_NumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NumericalPropagator_addForceModel(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_getAllForceModels(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_getOrbitType(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_getPVCoordinates(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_getPositionAngleType(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_removeForceModels(t_NumericalPropagator *self);
        static PyObject *t_NumericalPropagator_resetInitialState(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_setIgnoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setInitialState(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setMu(t_NumericalPropagator *self, PyObject *args);
        static PyObject *t_NumericalPropagator_setOrbitType(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_setPositionAngleType(t_NumericalPropagator *self, PyObject *arg);
        static PyObject *t_NumericalPropagator_tolerances(PyTypeObject *type, PyObject *args);
        static PyObject *t_NumericalPropagator_get__allForceModels(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__ignoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg, void *data);
        static int t_NumericalPropagator_set__initialState(t_NumericalPropagator *self, PyObject *arg, void *data);
        static int t_NumericalPropagator_set__mu(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_NumericalPropagator_get__orbitType(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__orbitType(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_NumericalPropagator_get__positionAngleType(t_NumericalPropagator *self, void *data);
        static int t_NumericalPropagator_set__positionAngleType(t_NumericalPropagator *self, PyObject *arg, void *data);
        static PyGetSetDef t_NumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_NumericalPropagator, allForceModels),
          DECLARE_SET_FIELD(t_NumericalPropagator, ignoreCentralAttraction),
          DECLARE_SET_FIELD(t_NumericalPropagator, initialState),
          DECLARE_SET_FIELD(t_NumericalPropagator, mu),
          DECLARE_GETSET_FIELD(t_NumericalPropagator, orbitType),
          DECLARE_GETSET_FIELD(t_NumericalPropagator, positionAngleType),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_NumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagator, addForceModel, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, removeForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagator, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, setIgnoreCentralAttraction, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setInitialState, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setMu, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagator, setOrbitType, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, setPositionAngleType, METH_O),
          DECLARE_METHOD(t_NumericalPropagator, tolerances, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NumericalPropagator)[] = {
          { Py_tp_methods, t_NumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_NumericalPropagator_init_ },
          { Py_tp_getset, t_NumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(NumericalPropagator, t_NumericalPropagator, NumericalPropagator);

        void t_NumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(NumericalPropagator), &PY_TYPE_DEF(NumericalPropagator), module, "NumericalPropagator", 0);
        }

        void t_NumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "class_", make_descriptor(NumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "wrapfn_", make_descriptor(t_NumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_NumericalPropagator::wrap_Object(NumericalPropagator(((t_NumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_NumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NumericalPropagator_init_(t_NumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
              NumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
              {
                INT_CALL(object = NumericalPropagator(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              NumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::ode::ODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = NumericalPropagator(a0, a1));
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

        static PyObject *t_NumericalPropagator_addForceModel(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_getAllForceModels(t_NumericalPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_NumericalPropagator_getOrbitType(t_NumericalPropagator *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagator_getPVCoordinates(t_NumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_NumericalPropagator_getPositionAngleType(t_NumericalPropagator *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagator_removeForceModels(t_NumericalPropagator *self)
        {
          OBJ_CALL(self->object.removeForceModels());
          Py_RETURN_NONE;
        }

        static PyObject *t_NumericalPropagator_resetInitialState(t_NumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_NumericalPropagator_setIgnoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIgnoreCentralAttraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIgnoreCentralAttraction", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setInitialState(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setInitialState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialState", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setMu(t_NumericalPropagator *self, PyObject *args)
        {
          jdouble a0;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(NumericalPropagator), (PyObject *) self, "setMu", args, 2);
        }

        static PyObject *t_NumericalPropagator_setOrbitType(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::OrbitType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(self->object.setOrbitType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitType", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_setPositionAngleType(t_NumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
          {
            OBJ_CALL(self->object.setPositionAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPositionAngleType", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_tolerances(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::orekit::utils::AbsolutePVCoordinates a1((jobject) NULL);
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::utils::AbsolutePVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::orbits::Orbit a2((jobject) NULL);
              ::org::orekit::orbits::OrbitType a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "DDkK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::NumericalPropagator::tolerances(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError(type, "tolerances", args);
          return NULL;
        }

        static PyObject *t_NumericalPropagator_get__allForceModels(t_NumericalPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_NumericalPropagator_set__ignoreCentralAttraction(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setIgnoreCentralAttraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ignoreCentralAttraction", arg);
          return -1;
        }

        static int t_NumericalPropagator_set__initialState(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialState", arg);
          return -1;
        }

        static int t_NumericalPropagator_set__mu(t_NumericalPropagator *self, PyObject *arg, void *data)
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

        static PyObject *t_NumericalPropagator_get__orbitType(t_NumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }
        static int t_NumericalPropagator_set__orbitType(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
            {
              INT_CALL(self->object.setOrbitType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitType", arg);
          return -1;
        }

        static PyObject *t_NumericalPropagator_get__positionAngleType(t_NumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
        static int t_NumericalPropagator_set__positionAngleType(t_NumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
            {
              INT_CALL(self->object.setPositionAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "positionAngleType", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/OceanLoading.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoading::class$ = NULL;
          jmethodID *OceanLoading::mids$ = NULL;
          bool OceanLoading::live$ = false;

          jclass OceanLoading::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoading");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b655637bfd999b6f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/models/earth/displacement/OceanLoadingCoefficients;)V");
              mids$[mid_displacement_dc5338a5a1255d1d] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoading::OceanLoading(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::models::earth::displacement::OceanLoadingCoefficients & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b655637bfd999b6f, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D OceanLoading::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_dc5338a5a1255d1d], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_OceanLoading_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoading_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoading_init_(t_OceanLoading *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoading_displacement(t_OceanLoading *self, PyObject *args);

          static PyMethodDef t_OceanLoading__methods_[] = {
            DECLARE_METHOD(t_OceanLoading, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoading, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoading, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoading)[] = {
            { Py_tp_methods, t_OceanLoading__methods_ },
            { Py_tp_init, (void *) t_OceanLoading_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoading)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanLoading, t_OceanLoading, OceanLoading);

          void t_OceanLoading::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoading), &PY_TYPE_DEF(OceanLoading), module, "OceanLoading", 0);
          }

          void t_OceanLoading::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "class_", make_descriptor(OceanLoading::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "wrapfn_", make_descriptor(t_OceanLoading::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoading), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanLoading_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoading::initializeClass, 1)))
              return NULL;
            return t_OceanLoading::wrap_Object(OceanLoading(((t_OceanLoading *) arg)->object.this$));
          }
          static PyObject *t_OceanLoading_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoading::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoading_init_(t_OceanLoading *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::models::earth::displacement::OceanLoadingCoefficients a1((jobject) NULL);
            OceanLoading object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::models::earth::displacement::OceanLoadingCoefficients::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OceanLoading(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanLoading_displacement(t_OceanLoading *self, PyObject *args)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Ordering::class$ = NULL;
              jmethodID *Ordering::mids$ = NULL;
              bool Ordering::live$ = false;
              Ordering *Ordering::FULL = NULL;
              Ordering *Ordering::LTM = NULL;
              Ordering *Ordering::LTMWCC = NULL;
              Ordering *Ordering::UTM = NULL;
              Ordering *Ordering::UTMWCC = NULL;

              jclass Ordering::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Ordering");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_acc10660b39b3d81] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");
                  mids$[mid_values_c6b234148b2b67c3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FULL = new Ordering(env->getStaticObjectField(cls, "FULL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  LTM = new Ordering(env->getStaticObjectField(cls, "LTM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  LTMWCC = new Ordering(env->getStaticObjectField(cls, "LTMWCC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  UTM = new Ordering(env->getStaticObjectField(cls, "UTM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  UTMWCC = new Ordering(env->getStaticObjectField(cls, "UTMWCC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Ordering Ordering::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return Ordering(env->callStaticObjectMethod(cls, mids$[mid_valueOf_acc10660b39b3d81], a0.this$));
              }

              JArray< Ordering > Ordering::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< Ordering >(env->callStaticObjectMethod(cls, mids$[mid_values_c6b234148b2b67c3]));
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
              static PyObject *t_Ordering_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ordering_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ordering_of_(t_Ordering *self, PyObject *args);
              static PyObject *t_Ordering_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_Ordering_values(PyTypeObject *type);
              static PyObject *t_Ordering_get__parameters_(t_Ordering *self, void *data);
              static PyGetSetDef t_Ordering__fields_[] = {
                DECLARE_GET_FIELD(t_Ordering, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Ordering__methods_[] = {
                DECLARE_METHOD(t_Ordering, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ordering, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ordering, of_, METH_VARARGS),
                DECLARE_METHOD(t_Ordering, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_Ordering, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Ordering)[] = {
                { Py_tp_methods, t_Ordering__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_Ordering__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Ordering)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(Ordering, t_Ordering, Ordering);
              PyObject *t_Ordering::wrap_Object(const Ordering& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Ordering::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ordering *self = (t_Ordering *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Ordering::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Ordering::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ordering *self = (t_Ordering *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Ordering::install(PyObject *module)
              {
                installType(&PY_TYPE(Ordering), &PY_TYPE_DEF(Ordering), module, "Ordering", 0);
              }

              void t_Ordering::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "class_", make_descriptor(Ordering::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "wrapfn_", make_descriptor(t_Ordering::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "boxfn_", make_descriptor(boxObject));
                env->getClass(Ordering::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "FULL", make_descriptor(t_Ordering::wrap_Object(*Ordering::FULL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "LTM", make_descriptor(t_Ordering::wrap_Object(*Ordering::LTM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "LTMWCC", make_descriptor(t_Ordering::wrap_Object(*Ordering::LTMWCC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "UTM", make_descriptor(t_Ordering::wrap_Object(*Ordering::UTM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "UTMWCC", make_descriptor(t_Ordering::wrap_Object(*Ordering::UTMWCC)));
              }

              static PyObject *t_Ordering_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Ordering::initializeClass, 1)))
                  return NULL;
                return t_Ordering::wrap_Object(Ordering(((t_Ordering *) arg)->object.this$));
              }
              static PyObject *t_Ordering_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Ordering::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Ordering_of_(t_Ordering *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_Ordering_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                Ordering result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::valueOf(a0));
                  return t_Ordering::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_Ordering_values(PyTypeObject *type)
              {
                JArray< Ordering > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::values());
                return JArray<jobject>(result.this$).wrap(t_Ordering::wrap_jobject);
              }
              static PyObject *t_Ordering_get__parameters_(t_Ordering *self, void *data)
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
#include "org/hipparchus/linear/SingularValueDecomposition.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SingularValueDecomposition::class$ = NULL;
      jmethodID *SingularValueDecomposition::mids$ = NULL;
      bool SingularValueDecomposition::live$ = false;

      jclass SingularValueDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SingularValueDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getConditionNumber_dff5885c2c873297] = env->getMethodID(cls, "getConditionNumber", "()D");
          mids$[mid_getCovariance_f21dcd9464c6e3c5] = env->getMethodID(cls, "getCovariance", "(D)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getInverseConditionNumber_dff5885c2c873297] = env->getMethodID(cls, "getInverseConditionNumber", "()D");
          mids$[mid_getNorm_dff5885c2c873297] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getRank_570ce0828f81a2c1] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getS_688b496048ff947b] = env->getMethodID(cls, "getS", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSingularValues_60c7040667a7dc5c] = env->getMethodID(cls, "getSingularValues", "()[D");
          mids$[mid_getSolver_6b396ee5bc11943f] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getU_688b496048ff947b] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getUT_688b496048ff947b] = env->getMethodID(cls, "getUT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getV_688b496048ff947b] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVT_688b496048ff947b] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingularValueDecomposition::SingularValueDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      jdouble SingularValueDecomposition::getConditionNumber() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getConditionNumber_dff5885c2c873297]);
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getCovariance(jdouble a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_f21dcd9464c6e3c5], a0));
      }

      jdouble SingularValueDecomposition::getInverseConditionNumber() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getInverseConditionNumber_dff5885c2c873297]);
      }

      jdouble SingularValueDecomposition::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_dff5885c2c873297]);
      }

      jint SingularValueDecomposition::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getS() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getS_688b496048ff947b]));
      }

      JArray< jdouble > SingularValueDecomposition::getSingularValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSingularValues_60c7040667a7dc5c]));
      }

      ::org::hipparchus::linear::DecompositionSolver SingularValueDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_6b396ee5bc11943f]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getU() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getU_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getUT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getUT_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix SingularValueDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVT_688b496048ff947b]));
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
      static PyObject *t_SingularValueDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingularValueDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingularValueDecomposition_init_(t_SingularValueDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingularValueDecomposition_getConditionNumber(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getCovariance(t_SingularValueDecomposition *self, PyObject *arg);
      static PyObject *t_SingularValueDecomposition_getInverseConditionNumber(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getNorm(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getRank(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getS(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getSingularValues(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getSolver(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getU(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getUT(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getV(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_getVT(t_SingularValueDecomposition *self);
      static PyObject *t_SingularValueDecomposition_get__conditionNumber(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__inverseConditionNumber(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__norm(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__rank(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__s(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__singularValues(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__solver(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__u(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__uT(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__v(t_SingularValueDecomposition *self, void *data);
      static PyObject *t_SingularValueDecomposition_get__vT(t_SingularValueDecomposition *self, void *data);
      static PyGetSetDef t_SingularValueDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_SingularValueDecomposition, conditionNumber),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, inverseConditionNumber),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, norm),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, rank),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, s),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, singularValues),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, solver),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, u),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, uT),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, v),
        DECLARE_GET_FIELD(t_SingularValueDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SingularValueDecomposition__methods_[] = {
        DECLARE_METHOD(t_SingularValueDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposition, getConditionNumber, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getCovariance, METH_O),
        DECLARE_METHOD(t_SingularValueDecomposition, getInverseConditionNumber, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getRank, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getS, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getSingularValues, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getU, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getUT, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getV, METH_NOARGS),
        DECLARE_METHOD(t_SingularValueDecomposition, getVT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingularValueDecomposition)[] = {
        { Py_tp_methods, t_SingularValueDecomposition__methods_ },
        { Py_tp_init, (void *) t_SingularValueDecomposition_init_ },
        { Py_tp_getset, t_SingularValueDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingularValueDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingularValueDecomposition, t_SingularValueDecomposition, SingularValueDecomposition);

      void t_SingularValueDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(SingularValueDecomposition), &PY_TYPE_DEF(SingularValueDecomposition), module, "SingularValueDecomposition", 0);
      }

      void t_SingularValueDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "class_", make_descriptor(SingularValueDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "wrapfn_", make_descriptor(t_SingularValueDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SingularValueDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingularValueDecomposition::initializeClass, 1)))
          return NULL;
        return t_SingularValueDecomposition::wrap_Object(SingularValueDecomposition(((t_SingularValueDecomposition *) arg)->object.this$));
      }
      static PyObject *t_SingularValueDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingularValueDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingularValueDecomposition_init_(t_SingularValueDecomposition *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        SingularValueDecomposition object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          INT_CALL(object = SingularValueDecomposition(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SingularValueDecomposition_getConditionNumber(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getConditionNumber());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getCovariance(t_SingularValueDecomposition *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getCovariance(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getCovariance", arg);
        return NULL;
      }

      static PyObject *t_SingularValueDecomposition_getInverseConditionNumber(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getInverseConditionNumber());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getNorm(t_SingularValueDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_SingularValueDecomposition_getRank(t_SingularValueDecomposition *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SingularValueDecomposition_getS(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getS());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getSingularValues(t_SingularValueDecomposition *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSingularValues());
        return result.wrap();
      }

      static PyObject *t_SingularValueDecomposition_getSolver(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getU(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getUT(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getUT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getV(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_getVT(t_SingularValueDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_SingularValueDecomposition_get__conditionNumber(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getConditionNumber());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__inverseConditionNumber(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getInverseConditionNumber());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__norm(t_SingularValueDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_SingularValueDecomposition_get__rank(t_SingularValueDecomposition *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SingularValueDecomposition_get__s(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getS());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__singularValues(t_SingularValueDecomposition *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSingularValues());
        return value.wrap();
      }

      static PyObject *t_SingularValueDecomposition_get__solver(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__u(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__uT(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getUT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__v(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_SingularValueDecomposition_get__vT(t_SingularValueDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonManeuverTriggers::class$ = NULL;
          jmethodID *PythonManeuverTriggers::mids$ = NULL;
          bool PythonManeuverTriggers::live$ = false;

          jclass PythonManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addResetter_a16797fae59e88ec] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_e53773d2404dc858] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiring_785ace4124d89120] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_89b940ef53c9a82d] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonManeuverTriggers::PythonManeuverTriggers() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonManeuverTriggers::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonManeuverTriggers::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonManeuverTriggers::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        namespace trigger {
          static PyObject *t_PythonManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonManeuverTriggers_init_(t_PythonManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonManeuverTriggers_finalize(t_PythonManeuverTriggers *self);
          static PyObject *t_PythonManeuverTriggers_pythonExtension(t_PythonManeuverTriggers *self, PyObject *args);
          static void JNICALL t_PythonManeuverTriggers_addResetter0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonManeuverTriggers_addResetter1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonManeuverTriggers_getEventDetectors2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonManeuverTriggers_getFieldEventDetectors3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonManeuverTriggers_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonManeuverTriggers_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jboolean JNICALL t_PythonManeuverTriggers_isFiring6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jboolean JNICALL t_PythonManeuverTriggers_isFiring7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonManeuverTriggers_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonManeuverTriggers_get__self(t_PythonManeuverTriggers *self, void *data);
          static PyGetSetDef t_PythonManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_PythonManeuverTriggers, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_PythonManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggers, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonManeuverTriggers, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonManeuverTriggers)[] = {
            { Py_tp_methods, t_PythonManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_PythonManeuverTriggers_init_ },
            { Py_tp_getset, t_PythonManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonManeuverTriggers)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonManeuverTriggers, t_PythonManeuverTriggers, PythonManeuverTriggers);

          void t_PythonManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonManeuverTriggers), &PY_TYPE_DEF(PythonManeuverTriggers), module, "PythonManeuverTriggers", 1);
          }

          void t_PythonManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "class_", make_descriptor(PythonManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "wrapfn_", make_descriptor(t_PythonManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonManeuverTriggers::initializeClass);
            JNINativeMethod methods[] = {
              { "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V", (void *) t_PythonManeuverTriggers_addResetter0 },
              { "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V", (void *) t_PythonManeuverTriggers_addResetter1 },
              { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonManeuverTriggers_getEventDetectors2 },
              { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonManeuverTriggers_getFieldEventDetectors3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonManeuverTriggers_getParametersDrivers4 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonManeuverTriggers_init5 },
              { "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z", (void *) t_PythonManeuverTriggers_isFiring6 },
              { "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z", (void *) t_PythonManeuverTriggers_isFiring7 },
              { "pythonDecRef", "()V", (void *) t_PythonManeuverTriggers_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_PythonManeuverTriggers::wrap_Object(PythonManeuverTriggers(((t_PythonManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_PythonManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonManeuverTriggers_init_(t_PythonManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            PythonManeuverTriggers object((jobject) NULL);

            INT_CALL(object = PythonManeuverTriggers());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonManeuverTriggers_finalize(t_PythonManeuverTriggers *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonManeuverTriggers_pythonExtension(t_PythonManeuverTriggers *self, PyObject *args)
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

          static void JNICALL t_PythonManeuverTriggers_addResetter0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggersResetter::wrap_Object(::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter(a0));
            PyObject *result = PyObject_CallMethod(obj, "addResetter", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonManeuverTriggers_addResetter1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::wrap_Object(::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter(a1));
            PyObject *result = PyObject_CallMethod(obj, "addResetter", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jobject JNICALL t_PythonManeuverTriggers_getEventDetectors2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getEventDetectors", result);
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

          static jobject JNICALL t_PythonManeuverTriggers_getFieldEventDetectors3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getFieldEventDetectors", result);
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

          static jobject JNICALL t_PythonManeuverTriggers_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
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

          static void JNICALL t_PythonManeuverTriggers_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
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

          static jboolean JNICALL t_PythonManeuverTriggers_isFiring6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "isFiring", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiring", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static jboolean JNICALL t_PythonManeuverTriggers_isFiring7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "isFiring", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiring", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonManeuverTriggers_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonManeuverTriggers_get__self(t_PythonManeuverTriggers *self, void *data)
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
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/AngularSeparationFromSatelliteDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AngularSeparationFromSatelliteDetector::class$ = NULL;
        jmethodID *AngularSeparationFromSatelliteDetector::mids$ = NULL;
        bool AngularSeparationFromSatelliteDetector::live$ = false;

        jclass AngularSeparationFromSatelliteDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AngularSeparationFromSatelliteDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_186eec647879c1ca] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getPrimaryObject_903aca6bb4523e29] = env->getMethodID(cls, "getPrimaryObject", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_getProximityAngle_dff5885c2c873297] = env->getMethodID(cls, "getProximityAngle", "()D");
            mids$[mid_getSecondaryObject_903aca6bb4523e29] = env->getMethodID(cls, "getSecondaryObject", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_a4b45067e780fead] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AngularSeparationFromSatelliteDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularSeparationFromSatelliteDetector::AngularSeparationFromSatelliteDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_186eec647879c1ca, a0.this$, a1.this$, a2)) {}

        jdouble AngularSeparationFromSatelliteDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationFromSatelliteDetector::getPrimaryObject() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPrimaryObject_903aca6bb4523e29]));
        }

        jdouble AngularSeparationFromSatelliteDetector::getProximityAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProximityAngle_dff5885c2c873297]);
        }

        ::org::orekit::utils::PVCoordinatesProvider AngularSeparationFromSatelliteDetector::getSecondaryObject() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondaryObject_903aca6bb4523e29]));
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
        static PyObject *t_AngularSeparationFromSatelliteDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationFromSatelliteDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularSeparationFromSatelliteDetector_of_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args);
        static int t_AngularSeparationFromSatelliteDetector_init_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularSeparationFromSatelliteDetector_g(t_AngularSeparationFromSatelliteDetector *self, PyObject *args);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getPrimaryObject(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getProximityAngle(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_getSecondaryObject(t_AngularSeparationFromSatelliteDetector *self);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__primaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__proximityAngle(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__secondaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__parameters_(t_AngularSeparationFromSatelliteDetector *self, void *data);
        static PyGetSetDef t_AngularSeparationFromSatelliteDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, primaryObject),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, proximityAngle),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, secondaryObject),
          DECLARE_GET_FIELD(t_AngularSeparationFromSatelliteDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularSeparationFromSatelliteDetector__methods_[] = {
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getPrimaryObject, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getProximityAngle, METH_NOARGS),
          DECLARE_METHOD(t_AngularSeparationFromSatelliteDetector, getSecondaryObject, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularSeparationFromSatelliteDetector)[] = {
          { Py_tp_methods, t_AngularSeparationFromSatelliteDetector__methods_ },
          { Py_tp_init, (void *) t_AngularSeparationFromSatelliteDetector_init_ },
          { Py_tp_getset, t_AngularSeparationFromSatelliteDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularSeparationFromSatelliteDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AngularSeparationFromSatelliteDetector, t_AngularSeparationFromSatelliteDetector, AngularSeparationFromSatelliteDetector);
        PyObject *t_AngularSeparationFromSatelliteDetector::wrap_Object(const AngularSeparationFromSatelliteDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationFromSatelliteDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationFromSatelliteDetector *self = (t_AngularSeparationFromSatelliteDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularSeparationFromSatelliteDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularSeparationFromSatelliteDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularSeparationFromSatelliteDetector *self = (t_AngularSeparationFromSatelliteDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularSeparationFromSatelliteDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularSeparationFromSatelliteDetector), &PY_TYPE_DEF(AngularSeparationFromSatelliteDetector), module, "AngularSeparationFromSatelliteDetector", 0);
        }

        void t_AngularSeparationFromSatelliteDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "class_", make_descriptor(AngularSeparationFromSatelliteDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "wrapfn_", make_descriptor(t_AngularSeparationFromSatelliteDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularSeparationFromSatelliteDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularSeparationFromSatelliteDetector::initializeClass, 1)))
            return NULL;
          return t_AngularSeparationFromSatelliteDetector::wrap_Object(AngularSeparationFromSatelliteDetector(((t_AngularSeparationFromSatelliteDetector *) arg)->object.this$));
        }
        static PyObject *t_AngularSeparationFromSatelliteDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularSeparationFromSatelliteDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_of_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularSeparationFromSatelliteDetector_init_(t_AngularSeparationFromSatelliteDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          AngularSeparationFromSatelliteDetector object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = AngularSeparationFromSatelliteDetector(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AngularSeparationFromSatelliteDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_g(t_AngularSeparationFromSatelliteDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AngularSeparationFromSatelliteDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getPrimaryObject(t_AngularSeparationFromSatelliteDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getProximityAngle(t_AngularSeparationFromSatelliteDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_getSecondaryObject(t_AngularSeparationFromSatelliteDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_AngularSeparationFromSatelliteDetector_get__parameters_(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__primaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__proximityAngle(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProximityAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AngularSeparationFromSatelliteDetector_get__secondaryObject(t_AngularSeparationFromSatelliteDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryObject());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/OpmData.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *OpmData::class$ = NULL;
              jmethodID *OpmData::mids$ = NULL;
              bool OpmData::live$ = false;

              jclass OpmData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/OpmData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6f39f621f1439de3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/StateVector;Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;Ljava/util/List;Lorg/orekit/files/ccsds/ndm/odm/UserDefined;D)V");
                  mids$[mid_getCovarianceBlock_cf101600575330c7] = env->getMethodID(cls, "getCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;");
                  mids$[mid_getKeplerianElementsBlock_c379fe2f6979132e] = env->getMethodID(cls, "getKeplerianElementsBlock", "()Lorg/orekit/files/ccsds/ndm/odm/KeplerianElements;");
                  mids$[mid_getManeuver_7e1ee5600d637967] = env->getMethodID(cls, "getManeuver", "(I)Lorg/orekit/files/ccsds/ndm/odm/opm/Maneuver;");
                  mids$[mid_getManeuvers_2afa36052df4765d] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMass_dff5885c2c873297] = env->getMethodID(cls, "getMass", "()D");
                  mids$[mid_getNbManeuvers_570ce0828f81a2c1] = env->getMethodID(cls, "getNbManeuvers", "()I");
                  mids$[mid_getSpacecraftParametersBlock_60188820d73f1019] = env->getMethodID(cls, "getSpacecraftParametersBlock", "()Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;");
                  mids$[mid_getStateVectorBlock_59e2ee0a61476728] = env->getMethodID(cls, "getStateVectorBlock", "()Lorg/orekit/files/ccsds/ndm/odm/StateVector;");
                  mids$[mid_getUserDefinedBlock_8d3e5fabdafb8483] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                  mids$[mid_hasManeuvers_b108b35ef48e27bd] = env->getMethodID(cls, "hasManeuvers", "()Z");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OpmData::OpmData(const ::org::orekit::files::ccsds::ndm::odm::StateVector & a0, const ::org::orekit::files::ccsds::ndm::odm::KeplerianElements & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a3, const ::java::util::List & a4, const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f39f621f1439de3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6)) {}

              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance OpmData::getCovarianceBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance(env->callObjectMethod(this$, mids$[mid_getCovarianceBlock_cf101600575330c7]));
              }

              ::org::orekit::files::ccsds::ndm::odm::KeplerianElements OpmData::getKeplerianElementsBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::KeplerianElements(env->callObjectMethod(this$, mids$[mid_getKeplerianElementsBlock_c379fe2f6979132e]));
              }

              ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver OpmData::getManeuver(jint a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::opm::Maneuver(env->callObjectMethod(this$, mids$[mid_getManeuver_7e1ee5600d637967], a0));
              }

              ::java::util::List OpmData::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_2afa36052df4765d]));
              }

              jdouble OpmData::getMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMass_dff5885c2c873297]);
              }

              jint OpmData::getNbManeuvers() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbManeuvers_570ce0828f81a2c1]);
              }

              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters OpmData::getSpacecraftParametersBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters(env->callObjectMethod(this$, mids$[mid_getSpacecraftParametersBlock_60188820d73f1019]));
              }

              ::org::orekit::files::ccsds::ndm::odm::StateVector OpmData::getStateVectorBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::StateVector(env->callObjectMethod(this$, mids$[mid_getStateVectorBlock_59e2ee0a61476728]));
              }

              ::org::orekit::files::ccsds::ndm::odm::UserDefined OpmData::getUserDefinedBlock() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_8d3e5fabdafb8483]));
              }

              jboolean OpmData::hasManeuvers() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasManeuvers_b108b35ef48e27bd]);
              }

              void OpmData::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_OpmData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OpmData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OpmData_init_(t_OpmData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OpmData_getCovarianceBlock(t_OpmData *self);
              static PyObject *t_OpmData_getKeplerianElementsBlock(t_OpmData *self);
              static PyObject *t_OpmData_getManeuver(t_OpmData *self, PyObject *arg);
              static PyObject *t_OpmData_getManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_getMass(t_OpmData *self);
              static PyObject *t_OpmData_getNbManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_getSpacecraftParametersBlock(t_OpmData *self);
              static PyObject *t_OpmData_getStateVectorBlock(t_OpmData *self);
              static PyObject *t_OpmData_getUserDefinedBlock(t_OpmData *self);
              static PyObject *t_OpmData_hasManeuvers(t_OpmData *self);
              static PyObject *t_OpmData_validate(t_OpmData *self, PyObject *arg);
              static PyObject *t_OpmData_get__covarianceBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__keplerianElementsBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__maneuvers(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__mass(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__nbManeuvers(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__spacecraftParametersBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__stateVectorBlock(t_OpmData *self, void *data);
              static PyObject *t_OpmData_get__userDefinedBlock(t_OpmData *self, void *data);
              static PyGetSetDef t_OpmData__fields_[] = {
                DECLARE_GET_FIELD(t_OpmData, covarianceBlock),
                DECLARE_GET_FIELD(t_OpmData, keplerianElementsBlock),
                DECLARE_GET_FIELD(t_OpmData, maneuvers),
                DECLARE_GET_FIELD(t_OpmData, mass),
                DECLARE_GET_FIELD(t_OpmData, nbManeuvers),
                DECLARE_GET_FIELD(t_OpmData, spacecraftParametersBlock),
                DECLARE_GET_FIELD(t_OpmData, stateVectorBlock),
                DECLARE_GET_FIELD(t_OpmData, userDefinedBlock),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OpmData__methods_[] = {
                DECLARE_METHOD(t_OpmData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OpmData, getCovarianceBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getKeplerianElementsBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getManeuver, METH_O),
                DECLARE_METHOD(t_OpmData, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getMass, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getNbManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getSpacecraftParametersBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getStateVectorBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, getUserDefinedBlock, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, hasManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OpmData, validate, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OpmData)[] = {
                { Py_tp_methods, t_OpmData__methods_ },
                { Py_tp_init, (void *) t_OpmData_init_ },
                { Py_tp_getset, t_OpmData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OpmData)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OpmData, t_OpmData, OpmData);

              void t_OpmData::install(PyObject *module)
              {
                installType(&PY_TYPE(OpmData), &PY_TYPE_DEF(OpmData), module, "OpmData", 0);
              }

              void t_OpmData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "class_", make_descriptor(OpmData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "wrapfn_", make_descriptor(t_OpmData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OpmData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OpmData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OpmData::initializeClass, 1)))
                  return NULL;
                return t_OpmData::wrap_Object(OpmData(((t_OpmData *) arg)->object.this$));
              }
              static PyObject *t_OpmData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OpmData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OpmData_init_(t_OpmData *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a3((jobject) NULL);
                ::java::util::List a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::orekit::files::ccsds::ndm::odm::UserDefined a5((jobject) NULL);
                jdouble a6;
                OpmData object((jobject) NULL);

                if (!parseArgs(args, "kkkkKkD", ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::odm::KeplerianElements::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, ::java::util::List::initializeClass, ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6))
                {
                  INT_CALL(object = OpmData(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OpmData_getCovarianceBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(result);
              }

              static PyObject *t_OpmData_getKeplerianElementsBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements result((jobject) NULL);
                OBJ_CALL(result = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(result);
              }

              static PyObject *t_OpmData_getManeuver(t_OpmData *self, PyObject *arg)
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

              static PyObject *t_OpmData_getManeuvers(t_OpmData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::opm::PY_TYPE(Maneuver));
              }

              static PyObject *t_OpmData_getMass(t_OpmData *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OpmData_getNbManeuvers(t_OpmData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbManeuvers());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OpmData_getSpacecraftParametersBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters result((jobject) NULL);
                OBJ_CALL(result = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(result);
              }

              static PyObject *t_OpmData_getStateVectorBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector result((jobject) NULL);
                OBJ_CALL(result = self->object.getStateVectorBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_StateVector::wrap_Object(result);
              }

              static PyObject *t_OpmData_getUserDefinedBlock(t_OpmData *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
                OBJ_CALL(result = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
              }

              static PyObject *t_OpmData_hasManeuvers(t_OpmData *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasManeuvers());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_OpmData_validate(t_OpmData *self, PyObject *arg)
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

              static PyObject *t_OpmData_get__covarianceBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_CartesianCovariance::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__keplerianElementsBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::KeplerianElements value((jobject) NULL);
                OBJ_CALL(value = self->object.getKeplerianElementsBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_KeplerianElements::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__maneuvers(t_OpmData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__mass(t_OpmData *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMass());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_OpmData_get__nbManeuvers(t_OpmData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbManeuvers());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OpmData_get__spacecraftParametersBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpacecraftParametersBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_SpacecraftParameters::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__stateVectorBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::StateVector value((jobject) NULL);
                OBJ_CALL(value = self->object.getStateVectorBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_StateVector::wrap_Object(value);
              }

              static PyObject *t_OpmData_get__userDefinedBlock(t_OpmData *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                OBJ_CALL(value = self->object.getUserDefinedBlock());
                return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
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
#include "org/orekit/forces/gravity/potential/OceanTidesReader.h"
#include "java/util/List.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanTidesReader::class$ = NULL;
          jmethodID *OceanTidesReader::mids$ = NULL;
          bool OceanTidesReader::live$ = false;

          jclass OceanTidesReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanTidesReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_canAdd_4bcf680fb63dc524] = env->getMethodID(cls, "canAdd", "(II)Z");
              mids$[mid_getMaxParseDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxParseDegree", "()I");
              mids$[mid_getMaxParseOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxParseOrder", "()I");
              mids$[mid_getSupportedNames_11b109bd155ca898] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_getWaves_2afa36052df4765d] = env->getMethodID(cls, "getWaves", "()Ljava/util/List;");
              mids$[mid_setMaxParseDegree_99803b0791f320ff] = env->getMethodID(cls, "setMaxParseDegree", "(I)V");
              mids$[mid_setMaxParseOrder_99803b0791f320ff] = env->getMethodID(cls, "setMaxParseOrder", "(I)V");
              mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");
              mids$[mid_endParse_0fa09c18fee449d5] = env->getMethodID(cls, "endParse", "()V");
              mids$[mid_startParse_d0bc48d5b00dc40c] = env->getMethodID(cls, "startParse", "(Ljava/lang/String;)V");
              mids$[mid_addWaveCoefficients_0d53f0d16fa90ec6] = env->getMethodID(cls, "addWaveCoefficients", "(IIIDDDDILjava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanTidesReader::OceanTidesReader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

          jboolean OceanTidesReader::canAdd(jint a0, jint a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_canAdd_4bcf680fb63dc524], a0, a1);
          }

          jint OceanTidesReader::getMaxParseDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseDegree_570ce0828f81a2c1]);
          }

          jint OceanTidesReader::getMaxParseOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxParseOrder_570ce0828f81a2c1]);
          }

          ::java::lang::String OceanTidesReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_11b109bd155ca898]));
          }

          ::java::util::List OceanTidesReader::getWaves() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getWaves_2afa36052df4765d]));
          }

          void OceanTidesReader::setMaxParseDegree(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseDegree_99803b0791f320ff], a0);
          }

          void OceanTidesReader::setMaxParseOrder(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxParseOrder_99803b0791f320ff], a0);
          }

          jboolean OceanTidesReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
          static PyObject *t_OceanTidesReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanTidesReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanTidesReader_init_(t_OceanTidesReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanTidesReader_canAdd(t_OceanTidesReader *self, PyObject *args);
          static PyObject *t_OceanTidesReader_getMaxParseDegree(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getMaxParseOrder(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getSupportedNames(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_getWaves(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_setMaxParseDegree(t_OceanTidesReader *self, PyObject *arg);
          static PyObject *t_OceanTidesReader_setMaxParseOrder(t_OceanTidesReader *self, PyObject *arg);
          static PyObject *t_OceanTidesReader_stillAcceptsData(t_OceanTidesReader *self);
          static PyObject *t_OceanTidesReader_get__maxParseDegree(t_OceanTidesReader *self, void *data);
          static int t_OceanTidesReader_set__maxParseDegree(t_OceanTidesReader *self, PyObject *arg, void *data);
          static PyObject *t_OceanTidesReader_get__maxParseOrder(t_OceanTidesReader *self, void *data);
          static int t_OceanTidesReader_set__maxParseOrder(t_OceanTidesReader *self, PyObject *arg, void *data);
          static PyObject *t_OceanTidesReader_get__supportedNames(t_OceanTidesReader *self, void *data);
          static PyObject *t_OceanTidesReader_get__waves(t_OceanTidesReader *self, void *data);
          static PyGetSetDef t_OceanTidesReader__fields_[] = {
            DECLARE_GETSET_FIELD(t_OceanTidesReader, maxParseDegree),
            DECLARE_GETSET_FIELD(t_OceanTidesReader, maxParseOrder),
            DECLARE_GET_FIELD(t_OceanTidesReader, supportedNames),
            DECLARE_GET_FIELD(t_OceanTidesReader, waves),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanTidesReader__methods_[] = {
            DECLARE_METHOD(t_OceanTidesReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanTidesReader, canAdd, METH_VARARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxParseDegree, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getMaxParseOrder, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, getWaves, METH_NOARGS),
            DECLARE_METHOD(t_OceanTidesReader, setMaxParseDegree, METH_O),
            DECLARE_METHOD(t_OceanTidesReader, setMaxParseOrder, METH_O),
            DECLARE_METHOD(t_OceanTidesReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanTidesReader)[] = {
            { Py_tp_methods, t_OceanTidesReader__methods_ },
            { Py_tp_init, (void *) t_OceanTidesReader_init_ },
            { Py_tp_getset, t_OceanTidesReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanTidesReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OceanTidesReader, t_OceanTidesReader, OceanTidesReader);

          void t_OceanTidesReader::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanTidesReader), &PY_TYPE_DEF(OceanTidesReader), module, "OceanTidesReader", 0);
          }

          void t_OceanTidesReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "class_", make_descriptor(OceanTidesReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "wrapfn_", make_descriptor(t_OceanTidesReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTidesReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OceanTidesReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanTidesReader::initializeClass, 1)))
              return NULL;
            return t_OceanTidesReader::wrap_Object(OceanTidesReader(((t_OceanTidesReader *) arg)->object.this$));
          }
          static PyObject *t_OceanTidesReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanTidesReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanTidesReader_init_(t_OceanTidesReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            OceanTidesReader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = OceanTidesReader(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OceanTidesReader_canAdd(t_OceanTidesReader *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jboolean result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.canAdd(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "canAdd", args);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_getMaxParseDegree(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getMaxParseOrder(t_OceanTidesReader *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_OceanTidesReader_getSupportedNames(t_OceanTidesReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_OceanTidesReader_getWaves(t_OceanTidesReader *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getWaves());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::gravity::potential::PY_TYPE(OceanTidesWave));
          }

          static PyObject *t_OceanTidesReader_setMaxParseDegree(t_OceanTidesReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseDegree(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseDegree", arg);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_setMaxParseOrder(t_OceanTidesReader *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setMaxParseOrder(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxParseOrder", arg);
            return NULL;
          }

          static PyObject *t_OceanTidesReader_stillAcceptsData(t_OceanTidesReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OceanTidesReader_get__maxParseDegree(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseDegree());
            return PyLong_FromLong((long) value);
          }
          static int t_OceanTidesReader_set__maxParseDegree(t_OceanTidesReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseDegree(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseDegree", arg);
            return -1;
          }

          static PyObject *t_OceanTidesReader_get__maxParseOrder(t_OceanTidesReader *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxParseOrder());
            return PyLong_FromLong((long) value);
          }
          static int t_OceanTidesReader_set__maxParseOrder(t_OceanTidesReader *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setMaxParseOrder(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxParseOrder", arg);
            return -1;
          }

          static PyObject *t_OceanTidesReader_get__supportedNames(t_OceanTidesReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }

          static PyObject *t_OceanTidesReader_get__waves(t_OceanTidesReader *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getWaves());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemData::class$ = NULL;
              jmethodID *AemData::mids$ = NULL;
              bool AemData::live$ = false;

              jclass AemData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addData_ef2cb1a12b4a8a0d] = env->getMethodID(cls, "addData", "(Lorg/orekit/utils/TimeStampedAngularCoordinates;)Z");
                  mids$[mid_getAngularCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemData::AemData() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jboolean AemData::addData(const ::org::orekit::utils::TimeStampedAngularCoordinates & a0) const
              {
                return env->callBooleanMethod(this$, mids$[mid_addData_ef2cb1a12b4a8a0d], a0.this$);
              }

              ::java::util::List AemData::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_2afa36052df4765d]));
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
            namespace aem {
              static PyObject *t_AemData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemData_init_(t_AemData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemData_addData(t_AemData *self, PyObject *arg);
              static PyObject *t_AemData_getAngularCoordinates(t_AemData *self);
              static PyObject *t_AemData_get__angularCoordinates(t_AemData *self, void *data);
              static PyGetSetDef t_AemData__fields_[] = {
                DECLARE_GET_FIELD(t_AemData, angularCoordinates),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemData__methods_[] = {
                DECLARE_METHOD(t_AemData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemData, addData, METH_O),
                DECLARE_METHOD(t_AemData, getAngularCoordinates, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemData)[] = {
                { Py_tp_methods, t_AemData__methods_ },
                { Py_tp_init, (void *) t_AemData_init_ },
                { Py_tp_getset, t_AemData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemData)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AemData, t_AemData, AemData);

              void t_AemData::install(PyObject *module)
              {
                installType(&PY_TYPE(AemData), &PY_TYPE_DEF(AemData), module, "AemData", 0);
              }

              void t_AemData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "class_", make_descriptor(AemData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "wrapfn_", make_descriptor(t_AemData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemData::initializeClass, 1)))
                  return NULL;
                return t_AemData::wrap_Object(AemData(((t_AemData *) arg)->object.this$));
              }
              static PyObject *t_AemData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemData_init_(t_AemData *self, PyObject *args, PyObject *kwds)
              {
                AemData object((jobject) NULL);

                INT_CALL(object = AemData());
                self->object = object;

                return 0;
              }

              static PyObject *t_AemData_addData(t_AemData *self, PyObject *arg)
              {
                ::org::orekit::utils::TimeStampedAngularCoordinates a0((jobject) NULL);
                jboolean result;

                if (!parseArg(arg, "k", ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.addData(a0));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "addData", arg);
                return NULL;
              }

              static PyObject *t_AemData_getAngularCoordinates(t_AemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AemData_get__angularCoordinates(t_AemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$StringConsumer::class$ = NULL;
            jmethodID *ParseToken$StringConsumer::mids$ = NULL;
            bool ParseToken$StringConsumer::live$ = false;

            jclass ParseToken$StringConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$StringConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_d0bc48d5b00dc40c] = env->getMethodID(cls, "accept", "(Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$StringConsumer::accept(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_d0bc48d5b00dc40c], a0.this$);
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
            static PyObject *t_ParseToken$StringConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$StringConsumer_accept(t_ParseToken$StringConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$StringConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$StringConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$StringConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$StringConsumer)[] = {
              { Py_tp_methods, t_ParseToken$StringConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$StringConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$StringConsumer, t_ParseToken$StringConsumer, ParseToken$StringConsumer);

            void t_ParseToken$StringConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$StringConsumer), &PY_TYPE_DEF(ParseToken$StringConsumer), module, "ParseToken$StringConsumer", 0);
            }

            void t_ParseToken$StringConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "class_", make_descriptor(ParseToken$StringConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "wrapfn_", make_descriptor(t_ParseToken$StringConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$StringConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$StringConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$StringConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$StringConsumer::wrap_Object(ParseToken$StringConsumer(((t_ParseToken$StringConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$StringConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$StringConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$StringConsumer_accept(t_ParseToken$StringConsumer *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
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
#include "org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonPotentialCoefficientsReader::class$ = NULL;
          jmethodID *PythonPotentialCoefficientsReader::mids$ = NULL;
          bool PythonPotentialCoefficientsReader::live$ = false;

          jclass PythonPotentialCoefficientsReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d6df10f4e35ef1e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_b0bdaadf6311e767] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getProvider_fc0a96c558346426] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonPotentialCoefficientsReader::PythonPotentialCoefficientsReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_d6df10f4e35ef1e8, a0.this$, a1)) {}

          PythonPotentialCoefficientsReader::PythonPotentialCoefficientsReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_b0bdaadf6311e767, a0.this$, a1, a2.this$)) {}

          void PythonPotentialCoefficientsReader::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonPotentialCoefficientsReader::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonPotentialCoefficientsReader::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonPotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonPotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonPotentialCoefficientsReader_init_(t_PythonPotentialCoefficientsReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonPotentialCoefficientsReader_finalize(t_PythonPotentialCoefficientsReader *self);
          static PyObject *t_PythonPotentialCoefficientsReader_pythonExtension(t_PythonPotentialCoefficientsReader *self, PyObject *args);
          static jobject JNICALL t_PythonPotentialCoefficientsReader_getProvider0(JNIEnv *jenv, jobject jobj, jboolean a0, jint a1, jint a2);
          static void JNICALL t_PythonPotentialCoefficientsReader_loadData1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonPotentialCoefficientsReader_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonPotentialCoefficientsReader_get__self(t_PythonPotentialCoefficientsReader *self, void *data);
          static PyGetSetDef t_PythonPotentialCoefficientsReader__fields_[] = {
            DECLARE_GET_FIELD(t_PythonPotentialCoefficientsReader, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonPotentialCoefficientsReader__methods_[] = {
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonPotentialCoefficientsReader)[] = {
            { Py_tp_methods, t_PythonPotentialCoefficientsReader__methods_ },
            { Py_tp_init, (void *) t_PythonPotentialCoefficientsReader_init_ },
            { Py_tp_getset, t_PythonPotentialCoefficientsReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonPotentialCoefficientsReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(PythonPotentialCoefficientsReader, t_PythonPotentialCoefficientsReader, PythonPotentialCoefficientsReader);

          void t_PythonPotentialCoefficientsReader::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonPotentialCoefficientsReader), &PY_TYPE_DEF(PythonPotentialCoefficientsReader), module, "PythonPotentialCoefficientsReader", 1);
          }

          void t_PythonPotentialCoefficientsReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "class_", make_descriptor(PythonPotentialCoefficientsReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "wrapfn_", make_descriptor(t_PythonPotentialCoefficientsReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonPotentialCoefficientsReader::initializeClass);
            JNINativeMethod methods[] = {
              { "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;", (void *) t_PythonPotentialCoefficientsReader_getProvider0 },
              { "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V", (void *) t_PythonPotentialCoefficientsReader_loadData1 },
              { "pythonDecRef", "()V", (void *) t_PythonPotentialCoefficientsReader_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonPotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonPotentialCoefficientsReader::initializeClass, 1)))
              return NULL;
            return t_PythonPotentialCoefficientsReader::wrap_Object(PythonPotentialCoefficientsReader(((t_PythonPotentialCoefficientsReader *) arg)->object.this$));
          }
          static PyObject *t_PythonPotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonPotentialCoefficientsReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonPotentialCoefficientsReader_init_(t_PythonPotentialCoefficientsReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                PythonPotentialCoefficientsReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = PythonPotentialCoefficientsReader(a0, a1));
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
                PythonPotentialCoefficientsReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonPotentialCoefficientsReader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonPotentialCoefficientsReader_finalize(t_PythonPotentialCoefficientsReader *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonPotentialCoefficientsReader_pythonExtension(t_PythonPotentialCoefficientsReader *self, PyObject *args)
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

          static jobject JNICALL t_PythonPotentialCoefficientsReader_getProvider0(JNIEnv *jenv, jobject jobj, jboolean a0, jint a1, jint a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o0 = (a0 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "getProvider", "Oii", o0, (int) a1, (int) a2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getProvider", result);
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

          static void JNICALL t_PythonPotentialCoefficientsReader_loadData1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
            PyObject *o1 = env->fromJString((jstring) a1, 0);
            PyObject *result = PyObject_CallMethod(obj, "loadData", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonPotentialCoefficientsReader_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonPotentialCoefficientsReader_get__self(t_PythonPotentialCoefficientsReader *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherData::class$ = NULL;
            jmethodID *CssiSpaceWeatherData::mids$ = NULL;
            bool CssiSpaceWeatherData::live$ = false;
            ::java::lang::String *CssiSpaceWeatherData::DEFAULT_SUPPORTED_NAMES = NULL;

            jclass CssiSpaceWeatherData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
                mids$[mid_init$_579dcb2bf229954b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;)V");
                mids$[mid_init$_63a3364c21ade86b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_377ee8b1596a9f80] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_c9696a3ab5455033] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_9ac58a50c4aae2c3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_4ed07469b7177e6c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/time/TimeScale;IDD)V");
                mids$[mid_init$_02e45cd6a94091ba] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDD)V");
                mids$[mid_get24HoursKp_bf1d7732f1acb697] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_2b9aa40de0a696a4] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getInstantFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_bf1d7732f1acb697] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getThreeHourlyKP_bf1d7732f1acb697] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_579dcb2bf229954b, a0.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::time::TimeScale & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_63a3364c21ade86b, a0.this$, a1.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_377ee8b1596a9f80, a0.this$, a1.this$, a2.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_c9696a3ab5455033, a0.this$, a1.this$, a2.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_9ac58a50c4aae2c3, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_4ed07469b7177e6c, a0.this$, a1.this$, a2.this$, a3, a4, a5)) {}

            CssiSpaceWeatherData::CssiSpaceWeatherData(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_02e45cd6a94091ba, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6)) {}

            jdouble CssiSpaceWeatherData::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_bf1d7732f1acb697], a0.this$);
            }

            JArray< jdouble > CssiSpaceWeatherData::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_2b9aa40de0a696a4], a0.this$));
            }

            jdouble CssiSpaceWeatherData::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_bf1d7732f1acb697], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_bf1d7732f1acb697], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_bf1d7732f1acb697], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_bf1d7732f1acb697], a0.this$);
            }

            jdouble CssiSpaceWeatherData::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_bf1d7732f1acb697], a0.this$);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_CssiSpaceWeatherData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherData_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherData_of_(t_CssiSpaceWeatherData *self, PyObject *args);
            static int t_CssiSpaceWeatherData_init_(t_CssiSpaceWeatherData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherData_get24HoursKp(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getAp(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getAverageFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getDailyFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getInstantFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getMeanFlux(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_getThreeHourlyKP(t_CssiSpaceWeatherData *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherData_get__parameters_(t_CssiSpaceWeatherData *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherData__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherData, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherData__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, get24HoursKp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getAp, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getAverageFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getDailyFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getInstantFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getMeanFlux, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherData, getThreeHourlyKP, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherData)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherData__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherData_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherData)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherData, t_CssiSpaceWeatherData, CssiSpaceWeatherData);
            PyObject *t_CssiSpaceWeatherData::wrap_Object(const CssiSpaceWeatherData& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CssiSpaceWeatherData::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherData *self = (t_CssiSpaceWeatherData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CssiSpaceWeatherData::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherData *self = (t_CssiSpaceWeatherData *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_CssiSpaceWeatherData::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherData), &PY_TYPE_DEF(CssiSpaceWeatherData), module, "CssiSpaceWeatherData", 0);
            }

            void t_CssiSpaceWeatherData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "class_", make_descriptor(CssiSpaceWeatherData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "wrapfn_", make_descriptor(t_CssiSpaceWeatherData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "boxfn_", make_descriptor(boxObject));
              env->getClass(CssiSpaceWeatherData::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherData), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*CssiSpaceWeatherData::DEFAULT_SUPPORTED_NAMES)));
            }

            static PyObject *t_CssiSpaceWeatherData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherData::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherData::wrap_Object(CssiSpaceWeatherData(((t_CssiSpaceWeatherData *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherData_of_(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherData_init_(t_CssiSpaceWeatherData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::java::lang::String a0((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "s", &a0))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kKk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "sKkk", ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  jint a3;
                  jdouble a4;
                  jdouble a5;
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "kKkIDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  CssiSpaceWeatherData object((jobject) NULL);

                  if (!parseArgs(args, "sKkkIDD", ::org::orekit::models::earth::atmosphere::data::CssiSpaceWeatherDataLoader::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_CssiSpaceWeatherDataLoader::parameters_, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CssiSpaceWeatherData(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader);
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

            static PyObject *t_CssiSpaceWeatherData_get24HoursKp(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.get24HoursKp(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "get24HoursKp", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getAp(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAp(a0));
                return result.wrap();
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getAp", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getAverageFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAverageFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getAverageFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getDailyFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDailyFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getDailyFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getInstantFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getInstantFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getInstantFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getMeanFlux(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeanFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getMeanFlux", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherData_getThreeHourlyKP(t_CssiSpaceWeatherData *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherData), (PyObject *) self, "getThreeHourlyKP", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherData_get__parameters_(t_CssiSpaceWeatherData *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/PositionBuilder.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PositionBuilder::class$ = NULL;
          jmethodID *PositionBuilder::mids$ = NULL;
          bool PositionBuilder::live$ = false;

          jclass PositionBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PositionBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e86d7264e9a1f264] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_ae9421582f095ee0] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/Position;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PositionBuilder::PositionBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, jdouble a1, jdouble a2, const ::org::orekit::estimation::measurements::ObservableSatellite & a3) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_e86d7264e9a1f264, a0.this$, a1, a2, a3.this$)) {}

          ::org::orekit::estimation::measurements::Position PositionBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::Position(env->callObjectMethod(this$, mids$[mid_build_ae9421582f095ee0], a0.this$, a1.this$));
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
          static PyObject *t_PositionBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PositionBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PositionBuilder_of_(t_PositionBuilder *self, PyObject *args);
          static int t_PositionBuilder_init_(t_PositionBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PositionBuilder_build(t_PositionBuilder *self, PyObject *args);
          static PyObject *t_PositionBuilder_get__parameters_(t_PositionBuilder *self, void *data);
          static PyGetSetDef t_PositionBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PositionBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PositionBuilder__methods_[] = {
            DECLARE_METHOD(t_PositionBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PositionBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PositionBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PositionBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PositionBuilder)[] = {
            { Py_tp_methods, t_PositionBuilder__methods_ },
            { Py_tp_init, (void *) t_PositionBuilder_init_ },
            { Py_tp_getset, t_PositionBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PositionBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PositionBuilder, t_PositionBuilder, PositionBuilder);
          PyObject *t_PositionBuilder::wrap_Object(const PositionBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PositionBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PositionBuilder *self = (t_PositionBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PositionBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PositionBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PositionBuilder *self = (t_PositionBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PositionBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PositionBuilder), &PY_TYPE_DEF(PositionBuilder), module, "PositionBuilder", 0);
          }

          void t_PositionBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "class_", make_descriptor(PositionBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "wrapfn_", make_descriptor(t_PositionBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PositionBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PositionBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PositionBuilder::initializeClass, 1)))
              return NULL;
            return t_PositionBuilder::wrap_Object(PositionBuilder(((t_PositionBuilder *) arg)->object.this$));
          }
          static PyObject *t_PositionBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PositionBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PositionBuilder_of_(t_PositionBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PositionBuilder_init_(t_PositionBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            ::org::orekit::estimation::measurements::ObservableSatellite a3((jobject) NULL);
            PositionBuilder object((jobject) NULL);

            if (!parseArgs(args, "kDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PositionBuilder(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Position);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PositionBuilder_build(t_PositionBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::Position result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_Position::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PositionBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PositionBuilder_get__parameters_(t_PositionBuilder *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/NRLMSISE00$FieldOutput.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *NRLMSISE00$FieldOutput::class$ = NULL;
          jmethodID *NRLMSISE00$FieldOutput::mids$ = NULL;
          bool NRLMSISE00$FieldOutput::live$ = false;

          jclass NRLMSISE00$FieldOutput::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/NRLMSISE00$FieldOutput");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDensity_93058f0552012043] = env->getMethodID(cls, "getDensity", "(I)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement NRLMSISE00$FieldOutput::getDensity(jint a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_93058f0552012043], a0));
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
        namespace atmosphere {
          static PyObject *t_NRLMSISE00$FieldOutput_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_of_(t_NRLMSISE00$FieldOutput *self, PyObject *args);
          static PyObject *t_NRLMSISE00$FieldOutput_getDensity(t_NRLMSISE00$FieldOutput *self, PyObject *arg);
          static PyObject *t_NRLMSISE00$FieldOutput_get__parameters_(t_NRLMSISE00$FieldOutput *self, void *data);
          static PyGetSetDef t_NRLMSISE00$FieldOutput__fields_[] = {
            DECLARE_GET_FIELD(t_NRLMSISE00$FieldOutput, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NRLMSISE00$FieldOutput__methods_[] = {
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, of_, METH_VARARGS),
            DECLARE_METHOD(t_NRLMSISE00$FieldOutput, getDensity, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NRLMSISE00$FieldOutput)[] = {
            { Py_tp_methods, t_NRLMSISE00$FieldOutput__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NRLMSISE00$FieldOutput__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NRLMSISE00$FieldOutput)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NRLMSISE00$FieldOutput, t_NRLMSISE00$FieldOutput, NRLMSISE00$FieldOutput);
          PyObject *t_NRLMSISE00$FieldOutput::wrap_Object(const NRLMSISE00$FieldOutput& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NRLMSISE00$FieldOutput::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NRLMSISE00$FieldOutput *self = (t_NRLMSISE00$FieldOutput *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NRLMSISE00$FieldOutput::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NRLMSISE00$FieldOutput::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NRLMSISE00$FieldOutput *self = (t_NRLMSISE00$FieldOutput *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NRLMSISE00$FieldOutput::install(PyObject *module)
          {
            installType(&PY_TYPE(NRLMSISE00$FieldOutput), &PY_TYPE_DEF(NRLMSISE00$FieldOutput), module, "NRLMSISE00$FieldOutput", 0);
          }

          void t_NRLMSISE00$FieldOutput::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "class_", make_descriptor(NRLMSISE00$FieldOutput::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "wrapfn_", make_descriptor(t_NRLMSISE00$FieldOutput::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NRLMSISE00$FieldOutput), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NRLMSISE00$FieldOutput_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NRLMSISE00$FieldOutput::initializeClass, 1)))
              return NULL;
            return t_NRLMSISE00$FieldOutput::wrap_Object(NRLMSISE00$FieldOutput(((t_NRLMSISE00$FieldOutput *) arg)->object.this$));
          }
          static PyObject *t_NRLMSISE00$FieldOutput_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NRLMSISE00$FieldOutput::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NRLMSISE00$FieldOutput_of_(t_NRLMSISE00$FieldOutput *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NRLMSISE00$FieldOutput_getDensity(t_NRLMSISE00$FieldOutput *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getDensity(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", arg);
            return NULL;
          }
          static PyObject *t_NRLMSISE00$FieldOutput_get__parameters_(t_NRLMSISE00$FieldOutput *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarN.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarN::class$ = NULL;
          jmethodID *FieldCopolarN::mids$ = NULL;
          bool FieldCopolarN::live$ = false;

          jclass FieldCopolarN::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarN");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cn_eba8e72a22c984ac] = env->getMethodID(cls, "cn", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dn_eba8e72a22c984ac] = env->getMethodID(cls, "dn", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sn_eba8e72a22c984ac] = env->getMethodID(cls, "sn", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::cn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cn_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::dn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dn_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarN::sn() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sn_eba8e72a22c984ac]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldCopolarN_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarN_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarN_of_(t_FieldCopolarN *self, PyObject *args);
          static PyObject *t_FieldCopolarN_cn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_dn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_sn(t_FieldCopolarN *self);
          static PyObject *t_FieldCopolarN_get__parameters_(t_FieldCopolarN *self, void *data);
          static PyGetSetDef t_FieldCopolarN__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarN, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarN__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarN, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarN, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarN, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarN, cn, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarN, dn, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarN, sn, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarN)[] = {
            { Py_tp_methods, t_FieldCopolarN__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarN__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarN)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarN, t_FieldCopolarN, FieldCopolarN);
          PyObject *t_FieldCopolarN::wrap_Object(const FieldCopolarN& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarN::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarN *self = (t_FieldCopolarN *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarN::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarN::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarN *self = (t_FieldCopolarN *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarN::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarN), &PY_TYPE_DEF(FieldCopolarN), module, "FieldCopolarN", 0);
          }

          void t_FieldCopolarN::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "class_", make_descriptor(FieldCopolarN::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "wrapfn_", make_descriptor(t_FieldCopolarN::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarN), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarN_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarN::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarN::wrap_Object(FieldCopolarN(((t_FieldCopolarN *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarN_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarN::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarN_of_(t_FieldCopolarN *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarN_cn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarN_dn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.dn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarN_sn(t_FieldCopolarN *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sn());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarN_get__parameters_(t_FieldCopolarN *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *SimpleRatioAmbiguityAcceptance::class$ = NULL;
          jmethodID *SimpleRatioAmbiguityAcceptance::mids$ = NULL;
          bool SimpleRatioAmbiguityAcceptance::live$ = false;

          jclass SimpleRatioAmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/SimpleRatioAmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_accept_9b257df6a366a6ba] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_numberOfCandidates_570ce0828f81a2c1] = env->getMethodID(cls, "numberOfCandidates", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SimpleRatioAmbiguityAcceptance::SimpleRatioAmbiguityAcceptance(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution SimpleRatioAmbiguityAcceptance::accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution(env->callObjectMethod(this$, mids$[mid_accept_9b257df6a366a6ba], a0.this$));
          }

          jint SimpleRatioAmbiguityAcceptance::numberOfCandidates() const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfCandidates_570ce0828f81a2c1]);
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
          static PyObject *t_SimpleRatioAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SimpleRatioAmbiguityAcceptance_init_(t_SimpleRatioAmbiguityAcceptance *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_accept(t_SimpleRatioAmbiguityAcceptance *self, PyObject *arg);
          static PyObject *t_SimpleRatioAmbiguityAcceptance_numberOfCandidates(t_SimpleRatioAmbiguityAcceptance *self);

          static PyMethodDef t_SimpleRatioAmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, accept, METH_O),
            DECLARE_METHOD(t_SimpleRatioAmbiguityAcceptance, numberOfCandidates, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SimpleRatioAmbiguityAcceptance)[] = {
            { Py_tp_methods, t_SimpleRatioAmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) t_SimpleRatioAmbiguityAcceptance_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SimpleRatioAmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SimpleRatioAmbiguityAcceptance, t_SimpleRatioAmbiguityAcceptance, SimpleRatioAmbiguityAcceptance);

          void t_SimpleRatioAmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(SimpleRatioAmbiguityAcceptance), &PY_TYPE_DEF(SimpleRatioAmbiguityAcceptance), module, "SimpleRatioAmbiguityAcceptance", 0);
          }

          void t_SimpleRatioAmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "class_", make_descriptor(SimpleRatioAmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "wrapfn_", make_descriptor(t_SimpleRatioAmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleRatioAmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SimpleRatioAmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_SimpleRatioAmbiguityAcceptance::wrap_Object(SimpleRatioAmbiguityAcceptance(((t_SimpleRatioAmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_SimpleRatioAmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SimpleRatioAmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SimpleRatioAmbiguityAcceptance_init_(t_SimpleRatioAmbiguityAcceptance *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            SimpleRatioAmbiguityAcceptance object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = SimpleRatioAmbiguityAcceptance(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_accept(t_SimpleRatioAmbiguityAcceptance *self, PyObject *arg)
          {
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution result((jobject) NULL);

            if (!parseArg(arg, "[k", ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.accept(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "accept", arg);
            return NULL;
          }

          static PyObject *t_SimpleRatioAmbiguityAcceptance_numberOfCandidates(t_SimpleRatioAmbiguityAcceptance *self)
          {
            jint result;
            OBJ_CALL(result = self->object.numberOfCandidates());
            return PyLong_FromLong((long) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/StateFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *StateFunction::class$ = NULL;
      jmethodID *StateFunction::mids$ = NULL;
      bool StateFunction::live$ = false;

      jclass StateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/StateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_cb44069ef445f941] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > StateFunction::value(const ::org::orekit::propagation::SpacecraftState & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_cb44069ef445f941], a0.this$));
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
      static PyObject *t_StateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StateFunction_value(t_StateFunction *self, PyObject *arg);

      static PyMethodDef t_StateFunction__methods_[] = {
        DECLARE_METHOD(t_StateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StateFunction)[] = {
        { Py_tp_methods, t_StateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StateFunction, t_StateFunction, StateFunction);

      void t_StateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(StateFunction), &PY_TYPE_DEF(StateFunction), module, "StateFunction", 0);
      }

      void t_StateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "class_", make_descriptor(StateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "wrapfn_", make_descriptor(t_StateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StateFunction::initializeClass, 1)))
          return NULL;
        return t_StateFunction::wrap_Object(StateFunction(((t_StateFunction *) arg)->object.this$));
      }
      static PyObject *t_StateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StateFunction_value(t_StateFunction *self, PyObject *arg)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ThreeEighthesIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ThreeEighthesIntegratorBuilder::class$ = NULL;
        jmethodID *ThreeEighthesIntegratorBuilder::mids$ = NULL;
        bool ThreeEighthesIntegratorBuilder::live$ = false;

        jclass ThreeEighthesIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ThreeEighthesIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesIntegratorBuilder::ThreeEighthesIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator ThreeEighthesIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
        static PyObject *t_ThreeEighthesIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThreeEighthesIntegratorBuilder_init_(t_ThreeEighthesIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesIntegratorBuilder_buildIntegrator(t_ThreeEighthesIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ThreeEighthesIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesIntegratorBuilder)[] = {
          { Py_tp_methods, t_ThreeEighthesIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesIntegratorBuilder, t_ThreeEighthesIntegratorBuilder, ThreeEighthesIntegratorBuilder);

        void t_ThreeEighthesIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesIntegratorBuilder), &PY_TYPE_DEF(ThreeEighthesIntegratorBuilder), module, "ThreeEighthesIntegratorBuilder", 0);
        }

        void t_ThreeEighthesIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "class_", make_descriptor(ThreeEighthesIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "wrapfn_", make_descriptor(t_ThreeEighthesIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesIntegratorBuilder::wrap_Object(ThreeEighthesIntegratorBuilder(((t_ThreeEighthesIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThreeEighthesIntegratorBuilder_init_(t_ThreeEighthesIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ThreeEighthesIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ThreeEighthesIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesIntegratorBuilder_buildIntegrator(t_ThreeEighthesIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PythonParametricModelEffect::class$ = NULL;
          jmethodID *PythonParametricModelEffect::mids$ = NULL;
          bool PythonParametricModelEffect::live$ = false;

          jclass PythonParametricModelEffect::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PythonParametricModelEffect");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_evaluate_08d2a35aee39232b] = env->getMethodID(cls, "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonParametricModelEffect::PythonParametricModelEffect() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonParametricModelEffect::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonParametricModelEffect::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonParametricModelEffect::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
          static PyObject *t_PythonParametricModelEffect_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonParametricModelEffect_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonParametricModelEffect_init_(t_PythonParametricModelEffect *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonParametricModelEffect_finalize(t_PythonParametricModelEffect *self);
          static PyObject *t_PythonParametricModelEffect_pythonExtension(t_PythonParametricModelEffect *self, PyObject *args);
          static jdouble JNICALL t_PythonParametricModelEffect_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonParametricModelEffect_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonParametricModelEffect_get__self(t_PythonParametricModelEffect *self, void *data);
          static PyGetSetDef t_PythonParametricModelEffect__fields_[] = {
            DECLARE_GET_FIELD(t_PythonParametricModelEffect, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonParametricModelEffect__methods_[] = {
            DECLARE_METHOD(t_PythonParametricModelEffect, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffect, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonParametricModelEffect, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonParametricModelEffect, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonParametricModelEffect)[] = {
            { Py_tp_methods, t_PythonParametricModelEffect__methods_ },
            { Py_tp_init, (void *) t_PythonParametricModelEffect_init_ },
            { Py_tp_getset, t_PythonParametricModelEffect__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonParametricModelEffect)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonParametricModelEffect, t_PythonParametricModelEffect, PythonParametricModelEffect);

          void t_PythonParametricModelEffect::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonParametricModelEffect), &PY_TYPE_DEF(PythonParametricModelEffect), module, "PythonParametricModelEffect", 1);
          }

          void t_PythonParametricModelEffect::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "class_", make_descriptor(PythonParametricModelEffect::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "wrapfn_", make_descriptor(t_PythonParametricModelEffect::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonParametricModelEffect), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonParametricModelEffect::initializeClass);
            JNINativeMethod methods[] = {
              { "evaluate", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D", (void *) t_PythonParametricModelEffect_evaluate0 },
              { "pythonDecRef", "()V", (void *) t_PythonParametricModelEffect_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonParametricModelEffect_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonParametricModelEffect::initializeClass, 1)))
              return NULL;
            return t_PythonParametricModelEffect::wrap_Object(PythonParametricModelEffect(((t_PythonParametricModelEffect *) arg)->object.this$));
          }
          static PyObject *t_PythonParametricModelEffect_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonParametricModelEffect::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonParametricModelEffect_init_(t_PythonParametricModelEffect *self, PyObject *args, PyObject *kwds)
          {
            PythonParametricModelEffect object((jobject) NULL);

            INT_CALL(object = PythonParametricModelEffect());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonParametricModelEffect_finalize(t_PythonParametricModelEffect *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonParametricModelEffect_pythonExtension(t_PythonParametricModelEffect *self, PyObject *args)
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

          static jdouble JNICALL t_PythonParametricModelEffect_evaluate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(::org::orekit::estimation::measurements::GroundStation(a0));
            PyObject *o1 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a1));
            PyObject *result = PyObject_CallMethod(obj, "evaluate", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("evaluate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonParametricModelEffect_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonParametricModelEffect::mids$[PythonParametricModelEffect::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonParametricModelEffect_get__self(t_PythonParametricModelEffect *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmMetadataKey::class$ = NULL;
              jmethodID *OmmMetadataKey::mids$ = NULL;
              bool OmmMetadataKey::live$ = false;
              OmmMetadataKey *OmmMetadataKey::MEAN_ELEMENT_THEORY = NULL;

              jclass OmmMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_b83c10c50d39384a] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadata;)Z");
                  mids$[mid_valueOf_85883ec7e374d856] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;");
                  mids$[mid_values_9892dd21229bb4b3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  MEAN_ELEMENT_THEORY = new OmmMetadataKey(env->getStaticObjectField(cls, "MEAN_ELEMENT_THEORY", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OmmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_b83c10c50d39384a], a0.this$, a1.this$, a2.this$);
              }

              OmmMetadataKey OmmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OmmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_85883ec7e374d856], a0.this$));
              }

              JArray< OmmMetadataKey > OmmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OmmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_9892dd21229bb4b3]));
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
            namespace omm {
              static PyObject *t_OmmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadataKey_of_(t_OmmMetadataKey *self, PyObject *args);
              static PyObject *t_OmmMetadataKey_process(t_OmmMetadataKey *self, PyObject *args);
              static PyObject *t_OmmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OmmMetadataKey_values(PyTypeObject *type);
              static PyObject *t_OmmMetadataKey_get__parameters_(t_OmmMetadataKey *self, void *data);
              static PyGetSetDef t_OmmMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_OmmMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmMetadataKey__methods_[] = {
                DECLARE_METHOD(t_OmmMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OmmMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OmmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmMetadataKey)[] = {
                { Py_tp_methods, t_OmmMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OmmMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OmmMetadataKey, t_OmmMetadataKey, OmmMetadataKey);
              PyObject *t_OmmMetadataKey::wrap_Object(const OmmMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmMetadataKey *self = (t_OmmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OmmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OmmMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OmmMetadataKey *self = (t_OmmMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OmmMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmMetadataKey), &PY_TYPE_DEF(OmmMetadataKey), module, "OmmMetadataKey", 0);
              }

              void t_OmmMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "class_", make_descriptor(OmmMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "wrapfn_", make_descriptor(t_OmmMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadataKey), "MEAN_ELEMENT_THEORY", make_descriptor(t_OmmMetadataKey::wrap_Object(*OmmMetadataKey::MEAN_ELEMENT_THEORY)));
              }

              static PyObject *t_OmmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_OmmMetadataKey::wrap_Object(OmmMetadataKey(((t_OmmMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_OmmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OmmMetadataKey_of_(t_OmmMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OmmMetadataKey_process(t_OmmMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OmmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OmmMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadataKey::valueOf(a0));
                  return t_OmmMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OmmMetadataKey_values(PyTypeObject *type)
              {
                JArray< OmmMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_OmmMetadataKey::wrap_jobject);
              }
              static PyObject *t_OmmMetadataKey_get__parameters_(t_OmmMetadataKey *self, void *data)
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
#include "org/orekit/estimation/iod/IodLaplace.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinates.h"
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
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_12719eba39e9d7d3] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_e5fb064d6de252af] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_24be0461599c9b60] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodLaplace::IodLaplace(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_12719eba39e9d7d3], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_e5fb064d6de252af], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::orbits::Orbit IodLaplace::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_24be0461599c9b60], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
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
#include "org/hipparchus/distribution/continuous/TDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *TDistribution::class$ = NULL;
        jmethodID *TDistribution::mids$ = NULL;
        bool TDistribution::live$ = false;

        jclass TDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/TDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_dcbc7ce2902fa136] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_dcbc7ce2902fa136] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDegreesOfFreedom_dff5885c2c873297] = env->getMethodID(cls, "getDegreesOfFreedom", "()D");
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

        TDistribution::TDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        TDistribution::TDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        jdouble TDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_dcbc7ce2902fa136], a0);
        }

        jdouble TDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_dcbc7ce2902fa136], a0);
        }

        jdouble TDistribution::getDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDegreesOfFreedom_dff5885c2c873297]);
        }

        jdouble TDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble TDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble TDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_dff5885c2c873297]);
        }

        jdouble TDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_dff5885c2c873297]);
        }

        jboolean TDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble TDistribution::logDensity(jdouble a0) const
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
        static PyObject *t_TDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TDistribution_init_(t_TDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TDistribution_cumulativeProbability(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_density(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getDegreesOfFreedom(t_TDistribution *self);
        static PyObject *t_TDistribution_getNumericalMean(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getNumericalVariance(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getSupportLowerBound(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getSupportUpperBound(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_isSupportConnected(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_logDensity(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_get__degreesOfFreedom(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__numericalMean(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__numericalVariance(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportConnected(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportLowerBound(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportUpperBound(t_TDistribution *self, void *data);
        static PyGetSetDef t_TDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_TDistribution, degreesOfFreedom),
          DECLARE_GET_FIELD(t_TDistribution, numericalMean),
          DECLARE_GET_FIELD(t_TDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_TDistribution, supportConnected),
          DECLARE_GET_FIELD(t_TDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_TDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TDistribution__methods_[] = {
          DECLARE_METHOD(t_TDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_TDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TDistribution)[] = {
          { Py_tp_methods, t_TDistribution__methods_ },
          { Py_tp_init, (void *) t_TDistribution_init_ },
          { Py_tp_getset, t_TDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(TDistribution, t_TDistribution, TDistribution);

        void t_TDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(TDistribution), &PY_TYPE_DEF(TDistribution), module, "TDistribution", 0);
        }

        void t_TDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "class_", make_descriptor(TDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "wrapfn_", make_descriptor(t_TDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TDistribution::initializeClass, 1)))
            return NULL;
          return t_TDistribution::wrap_Object(TDistribution(((t_TDistribution *) arg)->object.this$));
        }
        static PyObject *t_TDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TDistribution_init_(t_TDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              TDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = TDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              TDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = TDistribution(a0, a1));
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

        static PyObject *t_TDistribution_cumulativeProbability(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_TDistribution_density(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_TDistribution_getDegreesOfFreedom(t_TDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_TDistribution_getNumericalMean(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_TDistribution_getNumericalVariance(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_TDistribution_getSupportLowerBound(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_TDistribution_getSupportUpperBound(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_TDistribution_isSupportConnected(t_TDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_TDistribution_logDensity(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_TDistribution_get__degreesOfFreedom(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__numericalMean(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__numericalVariance(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__supportConnected(t_TDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_TDistribution_get__supportLowerBound(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__supportUpperBound(t_TDistribution *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticClockPhaseModifier::class$ = NULL;
          jmethodID *RelativisticClockPhaseModifier::mids$ = NULL;
          bool RelativisticClockPhaseModifier::live$ = false;

          jclass RelativisticClockPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticClockPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockPhaseModifier::RelativisticClockPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::java::util::List RelativisticClockPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticClockPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_RelativisticClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticClockPhaseModifier_init_(t_RelativisticClockPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticClockPhaseModifier_getParametersDrivers(t_RelativisticClockPhaseModifier *self);
          static PyObject *t_RelativisticClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticClockPhaseModifier_get__parametersDrivers(t_RelativisticClockPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticClockPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticClockPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticClockPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticClockPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticClockPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticClockPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticClockPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticClockPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticClockPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticClockPhaseModifier, t_RelativisticClockPhaseModifier, RelativisticClockPhaseModifier);

          void t_RelativisticClockPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticClockPhaseModifier), &PY_TYPE_DEF(RelativisticClockPhaseModifier), module, "RelativisticClockPhaseModifier", 0);
          }

          void t_RelativisticClockPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "class_", make_descriptor(RelativisticClockPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticClockPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticClockPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticClockPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticClockPhaseModifier::wrap_Object(RelativisticClockPhaseModifier(((t_RelativisticClockPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticClockPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticClockPhaseModifier_init_(t_RelativisticClockPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            RelativisticClockPhaseModifier object((jobject) NULL);

            INT_CALL(object = RelativisticClockPhaseModifier());
            self->object = object;

            return 0;
          }

          static PyObject *t_RelativisticClockPhaseModifier_getParametersDrivers(t_RelativisticClockPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticClockPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticClockPhaseModifier_get__parametersDrivers(t_RelativisticClockPhaseModifier *self, void *data)
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
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/EphemerisPropagatorBuilder.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EphemerisPropagatorBuilder::class$ = NULL;
        jmethodID *EphemerisPropagatorBuilder::mids$ = NULL;
        bool EphemerisPropagatorBuilder::live$ = false;

        jclass EphemerisPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EphemerisPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ccae413695f0dab4] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_e43529ca1a21e83d] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_33831b7a373bdb29] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_cd5e79efaeff69df] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_buildLeastSquaresModel_2eb3122719704f90] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_0c183831cad84280] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_4c5b72b9d02e7846] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/EphemerisPropagatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_ccae413695f0dab4, a0.this$, a1.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_e43529ca1a21e83d, a0.this$, a1.this$, a2.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_33831b7a373bdb29, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        EphemerisPropagatorBuilder::EphemerisPropagatorBuilder(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_cd5e79efaeff69df, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel EphemerisPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_2eb3122719704f90], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::Propagator EphemerisPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_0c183831cad84280], a0.this$));
        }

        EphemerisPropagatorBuilder EphemerisPropagatorBuilder::copy() const
        {
          return EphemerisPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_4c5b72b9d02e7846]));
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
        static PyObject *t_EphemerisPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EphemerisPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EphemerisPropagatorBuilder_init_(t_EphemerisPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EphemerisPropagatorBuilder_buildLeastSquaresModel(t_EphemerisPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EphemerisPropagatorBuilder_buildPropagator(t_EphemerisPropagatorBuilder *self, PyObject *args);
        static PyObject *t_EphemerisPropagatorBuilder_copy(t_EphemerisPropagatorBuilder *self, PyObject *args);

        static PyMethodDef t_EphemerisPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_EphemerisPropagatorBuilder, copy, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EphemerisPropagatorBuilder)[] = {
          { Py_tp_methods, t_EphemerisPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_EphemerisPropagatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EphemerisPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(EphemerisPropagatorBuilder, t_EphemerisPropagatorBuilder, EphemerisPropagatorBuilder);

        void t_EphemerisPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EphemerisPropagatorBuilder), &PY_TYPE_DEF(EphemerisPropagatorBuilder), module, "EphemerisPropagatorBuilder", 0);
        }

        void t_EphemerisPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "class_", make_descriptor(EphemerisPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "wrapfn_", make_descriptor(t_EphemerisPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EphemerisPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EphemerisPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EphemerisPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_EphemerisPropagatorBuilder::wrap_Object(EphemerisPropagatorBuilder(((t_EphemerisPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EphemerisPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EphemerisPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EphemerisPropagatorBuilder_init_(t_EphemerisPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              EphemerisPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "KKKKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4))
              {
                INT_CALL(object = EphemerisPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_EphemerisPropagatorBuilder_buildLeastSquaresModel(t_EphemerisPropagatorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_EphemerisPropagatorBuilder_buildPropagator(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::Propagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_EphemerisPropagatorBuilder_copy(t_EphemerisPropagatorBuilder *self, PyObject *args)
        {
          EphemerisPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_EphemerisPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EphemerisPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManBasis.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ManeuverFieldType.h"
#include "org/orekit/utils/units/Unit.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/DutyCycleType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistoryMetadata::class$ = NULL;
              jmethodID *OrbitManeuverHistoryMetadata::mids$ = NULL;
              bool OrbitManeuverHistoryMetadata::live$ = false;
              ::org::orekit::files::ccsds::definitions::DutyCycleType *OrbitManeuverHistoryMetadata::DEFAULT_DC_TYPE = NULL;

              jclass OrbitManeuverHistoryMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_600a2a61652bc473] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getDcBodyFrame_630d91cd1f29802e] = env->getMethodID(cls, "getDcBodyFrame", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
                  mids$[mid_getDcBodyTrigger_d52645e0d4c07563] = env->getMethodID(cls, "getDcBodyTrigger", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDcExecStart_85703d13e302437e] = env->getMethodID(cls, "getDcExecStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcExecStop_85703d13e302437e] = env->getMethodID(cls, "getDcExecStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcMaxCycles_570ce0828f81a2c1] = env->getMethodID(cls, "getDcMaxCycles", "()I");
                  mids$[mid_getDcMinCycles_570ce0828f81a2c1] = env->getMethodID(cls, "getDcMinCycles", "()I");
                  mids$[mid_getDcPhaseStartAngle_dff5885c2c873297] = env->getMethodID(cls, "getDcPhaseStartAngle", "()D");
                  mids$[mid_getDcPhaseStopAngle_dff5885c2c873297] = env->getMethodID(cls, "getDcPhaseStopAngle", "()D");
                  mids$[mid_getDcRefDir_d52645e0d4c07563] = env->getMethodID(cls, "getDcRefDir", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDcRefTime_85703d13e302437e] = env->getMethodID(cls, "getDcRefTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcTimePulseDuration_dff5885c2c873297] = env->getMethodID(cls, "getDcTimePulseDuration", "()D");
                  mids$[mid_getDcTimePulsePeriod_dff5885c2c873297] = env->getMethodID(cls, "getDcTimePulsePeriod", "()D");
                  mids$[mid_getDcType_f6c2c917cc164be8] = env->getMethodID(cls, "getDcType", "()Lorg/orekit/files/ccsds/definitions/DutyCycleType;");
                  mids$[mid_getDcWindowClose_85703d13e302437e] = env->getMethodID(cls, "getDcWindowClose", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDcWindowOpen_85703d13e302437e] = env->getMethodID(cls, "getDcWindowOpen", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getGravitationalAssist_23d31d5db0bee8e9] = env->getMethodID(cls, "getGravitationalAssist", "()Lorg/orekit/files/ccsds/definitions/BodyFacade;");
                  mids$[mid_getManBasis_c5a5e285b1a83f5e] = env->getMethodID(cls, "getManBasis", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;");
                  mids$[mid_getManBasisID_11b109bd155ca898] = env->getMethodID(cls, "getManBasisID", "()Ljava/lang/String;");
                  mids$[mid_getManComposition_2afa36052df4765d] = env->getMethodID(cls, "getManComposition", "()Ljava/util/List;");
                  mids$[mid_getManDeviceID_11b109bd155ca898] = env->getMethodID(cls, "getManDeviceID", "()Ljava/lang/String;");
                  mids$[mid_getManFrameEpoch_85703d13e302437e] = env->getMethodID(cls, "getManFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManID_11b109bd155ca898] = env->getMethodID(cls, "getManID", "()Ljava/lang/String;");
                  mids$[mid_getManNextEpoch_85703d13e302437e] = env->getMethodID(cls, "getManNextEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManNextID_11b109bd155ca898] = env->getMethodID(cls, "getManNextID", "()Ljava/lang/String;");
                  mids$[mid_getManPredSource_11b109bd155ca898] = env->getMethodID(cls, "getManPredSource", "()Ljava/lang/String;");
                  mids$[mid_getManPrevEpoch_85703d13e302437e] = env->getMethodID(cls, "getManPrevEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getManPrevID_11b109bd155ca898] = env->getMethodID(cls, "getManPrevID", "()Ljava/lang/String;");
                  mids$[mid_getManPurpose_2afa36052df4765d] = env->getMethodID(cls, "getManPurpose", "()Ljava/util/List;");
                  mids$[mid_getManReferenceFrame_5d5dd95b04037824] = env->getMethodID(cls, "getManReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getManUnits_2afa36052df4765d] = env->getMethodID(cls, "getManUnits", "()Ljava/util/List;");
                  mids$[mid_setDcBodyFrame_da2b68dd5e1213c8] = env->getMethodID(cls, "setDcBodyFrame", "(Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;)V");
                  mids$[mid_setDcBodyTrigger_029ff0cbf68ea054] = env->getMethodID(cls, "setDcBodyTrigger", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setDcExecStart_600a2a61652bc473] = env->getMethodID(cls, "setDcExecStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcExecStop_600a2a61652bc473] = env->getMethodID(cls, "setDcExecStop", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcMaxCycles_99803b0791f320ff] = env->getMethodID(cls, "setDcMaxCycles", "(I)V");
                  mids$[mid_setDcMinCycles_99803b0791f320ff] = env->getMethodID(cls, "setDcMinCycles", "(I)V");
                  mids$[mid_setDcPhaseStartAngle_17db3a65980d3441] = env->getMethodID(cls, "setDcPhaseStartAngle", "(D)V");
                  mids$[mid_setDcPhaseStopAngle_17db3a65980d3441] = env->getMethodID(cls, "setDcPhaseStopAngle", "(D)V");
                  mids$[mid_setDcRefDir_029ff0cbf68ea054] = env->getMethodID(cls, "setDcRefDir", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setDcRefTime_600a2a61652bc473] = env->getMethodID(cls, "setDcRefTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcTimePulseDuration_17db3a65980d3441] = env->getMethodID(cls, "setDcTimePulseDuration", "(D)V");
                  mids$[mid_setDcTimePulsePeriod_17db3a65980d3441] = env->getMethodID(cls, "setDcTimePulsePeriod", "(D)V");
                  mids$[mid_setDcType_16c5f15eeddfdcd8] = env->getMethodID(cls, "setDcType", "(Lorg/orekit/files/ccsds/definitions/DutyCycleType;)V");
                  mids$[mid_setDcWindowClose_600a2a61652bc473] = env->getMethodID(cls, "setDcWindowClose", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDcWindowOpen_600a2a61652bc473] = env->getMethodID(cls, "setDcWindowOpen", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setGravitationalAssist_32e120c3a0353f27] = env->getMethodID(cls, "setGravitationalAssist", "(Lorg/orekit/files/ccsds/definitions/BodyFacade;)V");
                  mids$[mid_setManBasis_e936bb223a91f519] = env->getMethodID(cls, "setManBasis", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/ManBasis;)V");
                  mids$[mid_setManBasisID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setManBasisID", "(Ljava/lang/String;)V");
                  mids$[mid_setManComposition_de3e021e7266b71e] = env->getMethodID(cls, "setManComposition", "(Ljava/util/List;)V");
                  mids$[mid_setManDeviceID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setManDeviceID", "(Ljava/lang/String;)V");
                  mids$[mid_setManFrameEpoch_600a2a61652bc473] = env->getMethodID(cls, "setManFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setManID", "(Ljava/lang/String;)V");
                  mids$[mid_setManNextEpoch_600a2a61652bc473] = env->getMethodID(cls, "setManNextEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManNextID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setManNextID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPredSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setManPredSource", "(Ljava/lang/String;)V");
                  mids$[mid_setManPrevEpoch_600a2a61652bc473] = env->getMethodID(cls, "setManPrevEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setManPrevID_d0bc48d5b00dc40c] = env->getMethodID(cls, "setManPrevID", "(Ljava/lang/String;)V");
                  mids$[mid_setManPurpose_de3e021e7266b71e] = env->getMethodID(cls, "setManPurpose", "(Ljava/util/List;)V");
                  mids$[mid_setManReferenceFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setManReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setManUnits_de3e021e7266b71e] = env->getMethodID(cls, "setManUnits", "(Ljava/util/List;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_DC_TYPE = new ::org::orekit::files::ccsds::definitions::DutyCycleType(env->getStaticObjectField(cls, "DEFAULT_DC_TYPE", "Lorg/orekit/files/ccsds/definitions/DutyCycleType;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuverHistoryMetadata::OrbitManeuverHistoryMetadata(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_600a2a61652bc473, a0.this$)) {}

              ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame OrbitManeuverHistoryMetadata::getDcBodyFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame(env->callObjectMethod(this$, mids$[mid_getDcBodyFrame_630d91cd1f29802e]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuverHistoryMetadata::getDcBodyTrigger() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDcBodyTrigger_d52645e0d4c07563]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcExecStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcExecStart_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcExecStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcExecStop_85703d13e302437e]));
              }

              jint OrbitManeuverHistoryMetadata::getDcMaxCycles() const
              {
                return env->callIntMethod(this$, mids$[mid_getDcMaxCycles_570ce0828f81a2c1]);
              }

              jint OrbitManeuverHistoryMetadata::getDcMinCycles() const
              {
                return env->callIntMethod(this$, mids$[mid_getDcMinCycles_570ce0828f81a2c1]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcPhaseStartAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcPhaseStartAngle_dff5885c2c873297]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcPhaseStopAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcPhaseStopAngle_dff5885c2c873297]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuverHistoryMetadata::getDcRefDir() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDcRefDir_d52645e0d4c07563]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcRefTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcRefTime_85703d13e302437e]));
              }

              jdouble OrbitManeuverHistoryMetadata::getDcTimePulseDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcTimePulseDuration_dff5885c2c873297]);
              }

              jdouble OrbitManeuverHistoryMetadata::getDcTimePulsePeriod() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDcTimePulsePeriod_dff5885c2c873297]);
              }

              ::org::orekit::files::ccsds::definitions::DutyCycleType OrbitManeuverHistoryMetadata::getDcType() const
              {
                return ::org::orekit::files::ccsds::definitions::DutyCycleType(env->callObjectMethod(this$, mids$[mid_getDcType_f6c2c917cc164be8]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcWindowClose() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcWindowClose_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getDcWindowOpen() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDcWindowOpen_85703d13e302437e]));
              }

              ::org::orekit::files::ccsds::definitions::BodyFacade OrbitManeuverHistoryMetadata::getGravitationalAssist() const
              {
                return ::org::orekit::files::ccsds::definitions::BodyFacade(env->callObjectMethod(this$, mids$[mid_getGravitationalAssist_23d31d5db0bee8e9]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis OrbitManeuverHistoryMetadata::getManBasis() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis(env->callObjectMethod(this$, mids$[mid_getManBasis_c5a5e285b1a83f5e]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManBasisID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManBasisID_11b109bd155ca898]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManComposition() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManComposition_2afa36052df4765d]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManDeviceID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManDeviceID_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManFrameEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManFrameEpoch_85703d13e302437e]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManID_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManNextEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManNextEpoch_85703d13e302437e]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManNextID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManNextID_11b109bd155ca898]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManPredSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPredSource_11b109bd155ca898]));
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuverHistoryMetadata::getManPrevEpoch() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getManPrevEpoch_85703d13e302437e]));
              }

              ::java::lang::String OrbitManeuverHistoryMetadata::getManPrevID() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getManPrevID_11b109bd155ca898]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManPurpose() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManPurpose_2afa36052df4765d]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade OrbitManeuverHistoryMetadata::getManReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getManReferenceFrame_5d5dd95b04037824]));
              }

              ::java::util::List OrbitManeuverHistoryMetadata::getManUnits() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManUnits_2afa36052df4765d]));
              }

              void OrbitManeuverHistoryMetadata::setDcBodyFrame(const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcBodyFrame_da2b68dd5e1213c8], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcBodyTrigger(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcBodyTrigger_029ff0cbf68ea054], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcExecStart(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcExecStart_600a2a61652bc473], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcExecStop(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcExecStop_600a2a61652bc473], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcMaxCycles(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcMaxCycles_99803b0791f320ff], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcMinCycles(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcMinCycles_99803b0791f320ff], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcPhaseStartAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcPhaseStartAngle_17db3a65980d3441], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcPhaseStopAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcPhaseStopAngle_17db3a65980d3441], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcRefDir(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcRefDir_029ff0cbf68ea054], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcRefTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcRefTime_600a2a61652bc473], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcTimePulseDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcTimePulseDuration_17db3a65980d3441], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcTimePulsePeriod(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcTimePulsePeriod_17db3a65980d3441], a0);
              }

              void OrbitManeuverHistoryMetadata::setDcType(const ::org::orekit::files::ccsds::definitions::DutyCycleType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcType_16c5f15eeddfdcd8], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcWindowClose(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcWindowClose_600a2a61652bc473], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setDcWindowOpen(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDcWindowOpen_600a2a61652bc473], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setGravitationalAssist(const ::org::orekit::files::ccsds::definitions::BodyFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGravitationalAssist_32e120c3a0353f27], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManBasis(const ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManBasis_e936bb223a91f519], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManBasisID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManBasisID_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManComposition(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManComposition_de3e021e7266b71e], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManDeviceID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManDeviceID_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManFrameEpoch_600a2a61652bc473], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManID_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManNextEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManNextEpoch_600a2a61652bc473], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManNextID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManNextID_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPredSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPredSource_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPrevEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPrevEpoch_600a2a61652bc473], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPrevID(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPrevID_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManPurpose(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManPurpose_de3e021e7266b71e], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManReferenceFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::setManUnits(const ::java::util::List & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setManUnits_de3e021e7266b71e], a0.this$);
              }

              void OrbitManeuverHistoryMetadata::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_OrbitManeuverHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuverHistoryMetadata_init_(t_OrbitManeuverHistoryMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyFrame(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStart(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStop(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMaxCycles(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMinCycles(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefDir(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefTime(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcType(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowClose(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowOpen(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getGravitationalAssist(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasis(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasisID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManComposition(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManDeviceID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManFrameEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPredSource(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevEpoch(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevID(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManPurpose(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManReferenceFrame(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_getManUnits(t_OrbitManeuverHistoryMetadata *self);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setGravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_setManUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg);
              static PyObject *t_OrbitManeuverHistoryMetadata_validate(t_OrbitManeuverHistoryMetadata *self, PyObject *args);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStart(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStop(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefDir(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefTime(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcType(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasis(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasisID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manComposition(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manDeviceID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPredSource(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevID(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPurpose(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuverHistoryMetadata_get__manUnits(t_OrbitManeuverHistoryMetadata *self, void *data);
              static int t_OrbitManeuverHistoryMetadata_set__manUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitManeuverHistoryMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcBodyFrame),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcBodyTrigger),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcExecStart),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcExecStop),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcMaxCycles),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcMinCycles),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcPhaseStartAngle),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcPhaseStopAngle),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcRefDir),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcRefTime),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcTimePulseDuration),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcTimePulsePeriod),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcType),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcWindowClose),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, dcWindowOpen),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, gravitationalAssist),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manBasis),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manBasisID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manComposition),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manDeviceID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manFrameEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manNextEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manNextID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPredSource),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPrevEpoch),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPrevID),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manPurpose),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manReferenceFrame),
                DECLARE_GETSET_FIELD(t_OrbitManeuverHistoryMetadata, manUnits),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistoryMetadata__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcBodyFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcBodyTrigger, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcExecStart, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcExecStop, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcMaxCycles, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcMinCycles, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcPhaseStartAngle, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcPhaseStopAngle, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcRefDir, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcRefTime, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcTimePulseDuration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcTimePulsePeriod, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcType, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcWindowClose, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getDcWindowOpen, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getGravitationalAssist, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManBasis, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManBasisID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManComposition, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManDeviceID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManFrameEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManNextEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManNextID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPredSource, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPrevEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPrevID, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManPurpose, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, getManUnits, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcBodyFrame, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcBodyTrigger, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcExecStart, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcExecStop, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcMaxCycles, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcMinCycles, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcPhaseStartAngle, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcPhaseStopAngle, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcRefDir, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcRefTime, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcTimePulseDuration, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcTimePulsePeriod, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcType, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcWindowClose, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setDcWindowOpen, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setGravitationalAssist, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManBasis, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManBasisID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManComposition, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManDeviceID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManFrameEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManNextEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManNextID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPredSource, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPrevEpoch, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPrevID, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManPurpose, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManReferenceFrame, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, setManUnits, METH_O),
                DECLARE_METHOD(t_OrbitManeuverHistoryMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistoryMetadata)[] = {
                { Py_tp_methods, t_OrbitManeuverHistoryMetadata__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuverHistoryMetadata_init_ },
                { Py_tp_getset, t_OrbitManeuverHistoryMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistoryMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistoryMetadata, t_OrbitManeuverHistoryMetadata, OrbitManeuverHistoryMetadata);

              void t_OrbitManeuverHistoryMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistoryMetadata), &PY_TYPE_DEF(OrbitManeuverHistoryMetadata), module, "OrbitManeuverHistoryMetadata", 0);
              }

              void t_OrbitManeuverHistoryMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "class_", make_descriptor(OrbitManeuverHistoryMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "wrapfn_", make_descriptor(t_OrbitManeuverHistoryMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitManeuverHistoryMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistoryMetadata), "DEFAULT_DC_TYPE", make_descriptor(::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(*OrbitManeuverHistoryMetadata::DEFAULT_DC_TYPE)));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistoryMetadata::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistoryMetadata::wrap_Object(OrbitManeuverHistoryMetadata(((t_OrbitManeuverHistoryMetadata *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistoryMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistoryMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuverHistoryMetadata_init_(t_OrbitManeuverHistoryMetadata *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                OrbitManeuverHistoryMetadata object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = OrbitManeuverHistoryMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyFrame(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcBodyFrame());
                return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcBodyTrigger());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStart(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcExecStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcExecStop(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcExecStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMaxCycles(t_OrbitManeuverHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getDcMaxCycles());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcMinCycles(t_OrbitManeuverHistoryMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getDcMinCycles());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcPhaseStartAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcPhaseStopAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefDir(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcRefDir());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcRefTime(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcRefTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcTimePulseDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDcTimePulsePeriod());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcType(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcType());
                return ::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowClose(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcWindowClose());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getDcWindowOpen(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDcWindowOpen());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getGravitationalAssist(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getGravitationalAssist());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasis(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis result((jobject) NULL);
                OBJ_CALL(result = self->object.getManBasis());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManBasisID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManBasisID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManComposition(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManComposition());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(ManeuverFieldType));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManDeviceID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManDeviceID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManFrameEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManNextEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManNextID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManNextID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPredSource(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPredSource());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevEpoch(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPrevEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPrevID(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPrevID());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManPurpose(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManPurpose());
                return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManReferenceFrame(t_OrbitManeuverHistoryMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getManReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_getManUnits(t_OrbitManeuverHistoryMetadata *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManUnits());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::units::PY_TYPE(Unit));
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcBodyFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcBodyFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcBodyTrigger(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcBodyTrigger", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcExecStart(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcExecStart", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcExecStop(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcExecStop", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setDcMaxCycles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcMaxCycles", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setDcMinCycles(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcMinCycles", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcPhaseStartAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcPhaseStartAngle", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcPhaseStopAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcPhaseStopAngle", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcRefDir(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcRefDir", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcRefTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcRefTime", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcTimePulseDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcTimePulseDuration", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDcTimePulsePeriod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcTimePulsePeriod", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::DutyCycleType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_DutyCycleType::parameters_))
                {
                  OBJ_CALL(self->object.setDcType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcType", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcWindowClose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcWindowClose", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setDcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDcWindowOpen(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDcWindowOpen", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setGravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGravitationalAssist(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGravitationalAssist", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::parameters_))
                {
                  OBJ_CALL(self->object.setManBasis(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManBasis", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManBasisID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManBasisID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManComposition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManComposition", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManDeviceID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManDeviceID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManFrameEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManFrameEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManNextEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManNextEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManNextID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManNextID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPredSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPredSource", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManPrevEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPrevEpoch", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setManPrevID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPrevID", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManPurpose(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManPurpose", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setManReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_setManUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg)
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  OBJ_CALL(self->object.setManUnits(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setManUnits", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_validate(t_OrbitManeuverHistoryMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OrbitManeuverHistoryMetadata), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcBodyFrame());
                return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcBodyFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcBodyFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcBodyTrigger());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcBodyTrigger(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcBodyTrigger(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcBodyTrigger", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStart(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcExecStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStart(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcExecStart(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcExecStart", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcExecStop(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcExecStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcExecStop(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcExecStop(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcExecStop", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getDcMaxCycles());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcMaxCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setDcMaxCycles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcMaxCycles", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getDcMinCycles());
                return PyLong_FromLong((long) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcMinCycles(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setDcMinCycles(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcMinCycles", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcPhaseStartAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStartAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcPhaseStartAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcPhaseStartAngle", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcPhaseStopAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcPhaseStopAngle(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcPhaseStopAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcPhaseStopAngle", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefDir(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcRefDir());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcRefDir(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcRefDir(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcRefDir", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcRefTime(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcRefTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcRefTime(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcRefTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcRefTime", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcTimePulseDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulseDuration(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcTimePulseDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcTimePulseDuration", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDcTimePulsePeriod());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcTimePulsePeriod(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDcTimePulsePeriod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcTimePulsePeriod", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcType(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::DutyCycleType value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcType());
                return ::org::orekit::files::ccsds::definitions::t_DutyCycleType::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcType(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::DutyCycleType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::DutyCycleType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcType", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcWindowClose());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowClose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcWindowClose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcWindowClose", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDcWindowOpen());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__dcWindowOpen(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDcWindowOpen(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dcWindowOpen", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getGravitationalAssist());
                return ::org::orekit::files::ccsds::definitions::t_BodyFacade::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__gravitationalAssist(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::BodyFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::BodyFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGravitationalAssist(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gravitationalAssist", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasis(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis value((jobject) NULL);
                OBJ_CALL(value = self->object.getManBasis());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_ManBasis::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manBasis(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::ocm::ManBasis::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManBasis(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manBasis", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manBasisID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManBasisID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manBasisID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManBasisID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manBasisID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manComposition(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManComposition());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manComposition(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManComposition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manComposition", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manDeviceID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManDeviceID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manDeviceID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManDeviceID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manDeviceID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManFrameEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manFrameEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManFrameEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manFrameEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManNextEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manNextEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManNextEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manNextEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manNextID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManNextID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manNextID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManNextID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manNextID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPredSource(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPredSource());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPredSource(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPredSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPredSource", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPrevEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPrevEpoch(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManPrevEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPrevEpoch", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPrevID(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPrevID());
                return j2p(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPrevID(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setManPrevID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPrevID", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manPurpose(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManPurpose());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manPurpose(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManPurpose(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manPurpose", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getManReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manReferenceFrame(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuverHistoryMetadata_get__manUnits(t_OrbitManeuverHistoryMetadata *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManUnits());
                return ::java::util::t_List::wrap_Object(value);
              }
              static int t_OrbitManeuverHistoryMetadata_set__manUnits(t_OrbitManeuverHistoryMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::util::List value((jobject) NULL);
                  if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
                  {
                    INT_CALL(self->object.setManUnits(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "manUnits", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
