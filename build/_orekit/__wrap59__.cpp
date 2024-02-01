#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AmbiguityAcceptance.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AmbiguityAcceptance::class$ = NULL;
          jmethodID *AmbiguityAcceptance::mids$ = NULL;
          bool AmbiguityAcceptance::live$ = false;

          jclass AmbiguityAcceptance::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AmbiguityAcceptance");

              mids$ = new jmethodID[max_mid];
              mids$[mid_accept_5ee686c7fe5c8130] = env->getMethodID(cls, "accept", "([Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;)Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_numberOfCandidates_d6ab429752e7c267] = env->getMethodID(cls, "numberOfCandidates", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution AmbiguityAcceptance::accept(const JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution(env->callObjectMethod(this$, mids$[mid_accept_5ee686c7fe5c8130], a0.this$));
          }

          jint AmbiguityAcceptance::numberOfCandidates() const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfCandidates_d6ab429752e7c267]);
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
          static PyObject *t_AmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_accept(t_AmbiguityAcceptance *self, PyObject *arg);
          static PyObject *t_AmbiguityAcceptance_numberOfCandidates(t_AmbiguityAcceptance *self);

          static PyMethodDef t_AmbiguityAcceptance__methods_[] = {
            DECLARE_METHOD(t_AmbiguityAcceptance, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityAcceptance, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AmbiguityAcceptance, accept, METH_O),
            DECLARE_METHOD(t_AmbiguityAcceptance, numberOfCandidates, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AmbiguityAcceptance)[] = {
            { Py_tp_methods, t_AmbiguityAcceptance__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AmbiguityAcceptance)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AmbiguityAcceptance, t_AmbiguityAcceptance, AmbiguityAcceptance);

          void t_AmbiguityAcceptance::install(PyObject *module)
          {
            installType(&PY_TYPE(AmbiguityAcceptance), &PY_TYPE_DEF(AmbiguityAcceptance), module, "AmbiguityAcceptance", 0);
          }

          void t_AmbiguityAcceptance::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "class_", make_descriptor(AmbiguityAcceptance::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "wrapfn_", make_descriptor(t_AmbiguityAcceptance::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AmbiguityAcceptance), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AmbiguityAcceptance_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AmbiguityAcceptance::initializeClass, 1)))
              return NULL;
            return t_AmbiguityAcceptance::wrap_Object(AmbiguityAcceptance(((t_AmbiguityAcceptance *) arg)->object.this$));
          }
          static PyObject *t_AmbiguityAcceptance_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AmbiguityAcceptance::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AmbiguityAcceptance_accept(t_AmbiguityAcceptance *self, PyObject *arg)
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

          static PyObject *t_AmbiguityAcceptance_numberOfCandidates(t_AmbiguityAcceptance *self)
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
#include "org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/MultiplexedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *MultiplexedMeasurementBuilder::class$ = NULL;
          jmethodID *MultiplexedMeasurementBuilder::mids$ = NULL;
          bool MultiplexedMeasurementBuilder::live$ = false;

          jclass MultiplexedMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/MultiplexedMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aa335fea495d60e0] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_addModifier_a3bed5360bec47d0] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_5a81322b29df9729] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/MultiplexedMeasurement;");
              mids$[mid_getModifiers_d751c1a57012b438] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_27bb228995072af3] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_ce7d94fe97fdcf55] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultiplexedMeasurementBuilder::MultiplexedMeasurementBuilder(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_aa335fea495d60e0, a0.this$)) {}

          void MultiplexedMeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_a3bed5360bec47d0], a0.this$);
          }

          ::org::orekit::estimation::measurements::MultiplexedMeasurement MultiplexedMeasurementBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::MultiplexedMeasurement(env->callObjectMethod(this$, mids$[mid_build_5a81322b29df9729], a0.this$, a1.this$));
          }

          ::java::util::List MultiplexedMeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_d751c1a57012b438]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > MultiplexedMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_27bb228995072af3]));
          }

          void MultiplexedMeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_ce7d94fe97fdcf55], a0.this$, a1.this$);
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
          static PyObject *t_MultiplexedMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultiplexedMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultiplexedMeasurementBuilder_init_(t_MultiplexedMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultiplexedMeasurementBuilder_addModifier(t_MultiplexedMeasurementBuilder *self, PyObject *arg);
          static PyObject *t_MultiplexedMeasurementBuilder_build(t_MultiplexedMeasurementBuilder *self, PyObject *args);
          static PyObject *t_MultiplexedMeasurementBuilder_getModifiers(t_MultiplexedMeasurementBuilder *self);
          static PyObject *t_MultiplexedMeasurementBuilder_getSatellites(t_MultiplexedMeasurementBuilder *self);
          static PyObject *t_MultiplexedMeasurementBuilder_init(t_MultiplexedMeasurementBuilder *self, PyObject *args);
          static PyObject *t_MultiplexedMeasurementBuilder_get__modifiers(t_MultiplexedMeasurementBuilder *self, void *data);
          static PyObject *t_MultiplexedMeasurementBuilder_get__satellites(t_MultiplexedMeasurementBuilder *self, void *data);
          static PyGetSetDef t_MultiplexedMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_MultiplexedMeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_MultiplexedMeasurementBuilder, satellites),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MultiplexedMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, build, METH_VARARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_MultiplexedMeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultiplexedMeasurementBuilder)[] = {
            { Py_tp_methods, t_MultiplexedMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_MultiplexedMeasurementBuilder_init_ },
            { Py_tp_getset, t_MultiplexedMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultiplexedMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultiplexedMeasurementBuilder, t_MultiplexedMeasurementBuilder, MultiplexedMeasurementBuilder);

          void t_MultiplexedMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(MultiplexedMeasurementBuilder), &PY_TYPE_DEF(MultiplexedMeasurementBuilder), module, "MultiplexedMeasurementBuilder", 0);
          }

          void t_MultiplexedMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "class_", make_descriptor(MultiplexedMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "wrapfn_", make_descriptor(t_MultiplexedMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultiplexedMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultiplexedMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultiplexedMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_MultiplexedMeasurementBuilder::wrap_Object(MultiplexedMeasurementBuilder(((t_MultiplexedMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_MultiplexedMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultiplexedMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultiplexedMeasurementBuilder_init_(t_MultiplexedMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            MultiplexedMeasurementBuilder object((jobject) NULL);

            if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = MultiplexedMeasurementBuilder(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_addModifier(t_MultiplexedMeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_build(t_MultiplexedMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::MultiplexedMeasurement result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_MultiplexedMeasurement::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "build", args);
            return NULL;
          }

          static PyObject *t_MultiplexedMeasurementBuilder_getModifiers(t_MultiplexedMeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_getSatellites(t_MultiplexedMeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_init(t_MultiplexedMeasurementBuilder *self, PyObject *args)
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

          static PyObject *t_MultiplexedMeasurementBuilder_get__modifiers(t_MultiplexedMeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_MultiplexedMeasurementBuilder_get__satellites(t_MultiplexedMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/IterativeLinearSolverEvent.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *IterativeLinearSolverEvent::class$ = NULL;
      jmethodID *IterativeLinearSolverEvent::mids$ = NULL;
      bool IterativeLinearSolverEvent::live$ = false;

      jclass IterativeLinearSolverEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/IterativeLinearSolverEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7e50748b6c508ddd] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;I)V");
          mids$[mid_getNormOfResidual_9981f74b2d109da6] = env->getMethodID(cls, "getNormOfResidual", "()D");
          mids$[mid_getResidual_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getRightHandSideVector_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getRightHandSideVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSolution_92d7e8d8d3f1dfcf] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_providesResidual_eee3de00fe971136] = env->getMethodID(cls, "providesResidual", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterativeLinearSolverEvent::IterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1) : ::org::hipparchus::util::IterationEvent(env->newObject(initializeClass, &mids$, mid_init$_7e50748b6c508ddd, a0.this$, a1)) {}

      jdouble IterativeLinearSolverEvent::getNormOfResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormOfResidual_9981f74b2d109da6]);
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getResidual() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResidual_92d7e8d8d3f1dfcf]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getRightHandSideVector() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRightHandSideVector_92d7e8d8d3f1dfcf]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getSolution() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSolution_92d7e8d8d3f1dfcf]));
      }

      jboolean IterativeLinearSolverEvent::providesResidual() const
      {
        return env->callBooleanMethod(this$, mids$[mid_providesResidual_eee3de00fe971136]);
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
      static PyObject *t_IterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterativeLinearSolverEvent_init_(t_IterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterativeLinearSolverEvent_getNormOfResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getRightHandSideVector(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getSolution(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_providesResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_get__normOfResidual(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__residual(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__rightHandSideVector(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__solution(t_IterativeLinearSolverEvent *self, void *data);
      static PyGetSetDef t_IterativeLinearSolverEvent__fields_[] = {
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, normOfResidual),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, residual),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, rightHandSideVector),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, solution),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterativeLinearSolverEvent__methods_[] = {
        DECLARE_METHOD(t_IterativeLinearSolverEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getNormOfResidual, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getRightHandSideVector, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getSolution, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, providesResidual, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterativeLinearSolverEvent)[] = {
        { Py_tp_methods, t_IterativeLinearSolverEvent__methods_ },
        { Py_tp_init, (void *) t_IterativeLinearSolverEvent_init_ },
        { Py_tp_getset, t_IterativeLinearSolverEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterativeLinearSolverEvent)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::IterationEvent),
        NULL
      };

      DEFINE_TYPE(IterativeLinearSolverEvent, t_IterativeLinearSolverEvent, IterativeLinearSolverEvent);

      void t_IterativeLinearSolverEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(IterativeLinearSolverEvent), &PY_TYPE_DEF(IterativeLinearSolverEvent), module, "IterativeLinearSolverEvent", 0);
      }

      void t_IterativeLinearSolverEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "class_", make_descriptor(IterativeLinearSolverEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "wrapfn_", make_descriptor(t_IterativeLinearSolverEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterativeLinearSolverEvent::initializeClass, 1)))
          return NULL;
        return t_IterativeLinearSolverEvent::wrap_Object(IterativeLinearSolverEvent(((t_IterativeLinearSolverEvent *) arg)->object.this$));
      }
      static PyObject *t_IterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterativeLinearSolverEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterativeLinearSolverEvent_init_(t_IterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        jint a1;
        IterativeLinearSolverEvent object((jobject) NULL);

        if (!parseArgs(args, "oI", &a0, &a1))
        {
          INT_CALL(object = IterativeLinearSolverEvent(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterativeLinearSolverEvent_getNormOfResidual(t_IterativeLinearSolverEvent *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getResidual(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getRightHandSideVector(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getSolution(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_providesResidual(t_IterativeLinearSolverEvent *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.providesResidual());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__normOfResidual(t_IterativeLinearSolverEvent *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__residual(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__rightHandSideVector(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__solution(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
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
          mids$[mid_init$_374bb06c374e0711] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/frames/ITRFVersion;II)V");
          mids$[mid_appliesTo_df4c65b2aede5c41] = env->getMethodID(cls, "appliesTo", "(Ljava/lang/String;)Z");
          mids$[mid_getVersion_4865f340ec39b9c4] = env->getMethodID(cls, "getVersion", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_isValid_e24caac814db1df5] = env->getMethodID(cls, "isValid", "(I)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ITRFVersionLoader$ITRFVersionConfiguration::ITRFVersionLoader$ITRFVersionConfiguration(const ::java::lang::String & a0, const ::org::orekit::frames::ITRFVersion & a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_374bb06c374e0711, a0.this$, a1.this$, a2, a3)) {}

      jboolean ITRFVersionLoader$ITRFVersionConfiguration::appliesTo(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_appliesTo_df4c65b2aede5c41], a0.this$);
      }

      ::org::orekit::frames::ITRFVersion ITRFVersionLoader$ITRFVersionConfiguration::getVersion() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getVersion_4865f340ec39b9c4]));
      }

      jboolean ITRFVersionLoader$ITRFVersionConfiguration::isValid(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isValid_e24caac814db1df5], a0);
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
#include "org/hipparchus/ode/nonstiff/StepsizeHelper.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *StepsizeHelper::class$ = NULL;
        jmethodID *StepsizeHelper::mids$ = NULL;
        bool StepsizeHelper::live$ = false;

        jclass StepsizeHelper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/StepsizeHelper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e3195482263a60ce] = env->getMethodID(cls, "<init>", "(DD[D[D)V");
            mids$[mid_init$_cd5724127cc72e96] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_filterStep_ada0cfabe3e16796] = env->getMethodID(cls, "filterStep", "(DZZ)D");
            mids$[mid_filterStep_a931394f246a1ad5] = env->getMethodID(cls, "filterStep", "(Lorg/hipparchus/CalculusFieldElement;ZZ)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDummyStepsize_9981f74b2d109da6] = env->getMethodID(cls, "getDummyStepsize", "()D");
            mids$[mid_getInitialStep_9981f74b2d109da6] = env->getMethodID(cls, "getInitialStep", "()D");
            mids$[mid_getMainSetDimension_d6ab429752e7c267] = env->getMethodID(cls, "getMainSetDimension", "()I");
            mids$[mid_getMaxStep_9981f74b2d109da6] = env->getMethodID(cls, "getMaxStep", "()D");
            mids$[mid_getMinStep_9981f74b2d109da6] = env->getMethodID(cls, "getMinStep", "()D");
            mids$[mid_getRelativeTolerance_ce4c02d583456bc9] = env->getMethodID(cls, "getRelativeTolerance", "(I)D");
            mids$[mid_getTolerance_5540210c7d309f18] = env->getMethodID(cls, "getTolerance", "(ID)D");
            mids$[mid_getTolerance_b23de0cfc61f8f60] = env->getMethodID(cls, "getTolerance", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_setInitialStepSize_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setInitialStepSize", "(D)V");
            mids$[mid_setMainSetDimension_8fd427ab23829bf5] = env->getMethodID(cls, "setMainSetDimension", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepsizeHelper::StepsizeHelper(jdouble a0, jdouble a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e3195482263a60ce, a0, a1, a2.this$, a3.this$)) {}

        StepsizeHelper::StepsizeHelper(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd5724127cc72e96, a0, a1, a2, a3)) {}

        jdouble StepsizeHelper::filterStep(jdouble a0, jboolean a1, jboolean a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_filterStep_ada0cfabe3e16796], a0, a1, a2);
        }

        ::org::hipparchus::CalculusFieldElement StepsizeHelper::filterStep(const ::org::hipparchus::CalculusFieldElement & a0, jboolean a1, jboolean a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_filterStep_a931394f246a1ad5], a0.this$, a1, a2));
        }

        jdouble StepsizeHelper::getDummyStepsize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDummyStepsize_9981f74b2d109da6]);
        }

        jdouble StepsizeHelper::getInitialStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInitialStep_9981f74b2d109da6]);
        }

        jint StepsizeHelper::getMainSetDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getMainSetDimension_d6ab429752e7c267]);
        }

        jdouble StepsizeHelper::getMaxStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxStep_9981f74b2d109da6]);
        }

        jdouble StepsizeHelper::getMinStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinStep_9981f74b2d109da6]);
        }

        jdouble StepsizeHelper::getRelativeTolerance(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeTolerance_ce4c02d583456bc9], a0);
        }

        jdouble StepsizeHelper::getTolerance(jint a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_5540210c7d309f18], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement StepsizeHelper::getTolerance(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTolerance_b23de0cfc61f8f60], a0, a1.this$));
        }

        void StepsizeHelper::setInitialStepSize(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialStepSize_1ad26e8c8c0cd65b], a0);
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
        static PyObject *t_StepsizeHelper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepsizeHelper_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepsizeHelper_init_(t_StepsizeHelper *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepsizeHelper_filterStep(t_StepsizeHelper *self, PyObject *args);
        static PyObject *t_StepsizeHelper_getDummyStepsize(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getInitialStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMainSetDimension(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMaxStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getMinStep(t_StepsizeHelper *self);
        static PyObject *t_StepsizeHelper_getRelativeTolerance(t_StepsizeHelper *self, PyObject *arg);
        static PyObject *t_StepsizeHelper_getTolerance(t_StepsizeHelper *self, PyObject *args);
        static PyObject *t_StepsizeHelper_setInitialStepSize(t_StepsizeHelper *self, PyObject *arg);
        static PyObject *t_StepsizeHelper_get__dummyStepsize(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__initialStep(t_StepsizeHelper *self, void *data);
        static int t_StepsizeHelper_set__initialStepSize(t_StepsizeHelper *self, PyObject *arg, void *data);
        static PyObject *t_StepsizeHelper_get__mainSetDimension(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__maxStep(t_StepsizeHelper *self, void *data);
        static PyObject *t_StepsizeHelper_get__minStep(t_StepsizeHelper *self, void *data);
        static PyGetSetDef t_StepsizeHelper__fields_[] = {
          DECLARE_GET_FIELD(t_StepsizeHelper, dummyStepsize),
          DECLARE_GET_FIELD(t_StepsizeHelper, initialStep),
          DECLARE_SET_FIELD(t_StepsizeHelper, initialStepSize),
          DECLARE_GET_FIELD(t_StepsizeHelper, mainSetDimension),
          DECLARE_GET_FIELD(t_StepsizeHelper, maxStep),
          DECLARE_GET_FIELD(t_StepsizeHelper, minStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepsizeHelper__methods_[] = {
          DECLARE_METHOD(t_StepsizeHelper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepsizeHelper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepsizeHelper, filterStep, METH_VARARGS),
          DECLARE_METHOD(t_StepsizeHelper, getDummyStepsize, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getInitialStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMainSetDimension, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMaxStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getMinStep, METH_NOARGS),
          DECLARE_METHOD(t_StepsizeHelper, getRelativeTolerance, METH_O),
          DECLARE_METHOD(t_StepsizeHelper, getTolerance, METH_VARARGS),
          DECLARE_METHOD(t_StepsizeHelper, setInitialStepSize, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepsizeHelper)[] = {
          { Py_tp_methods, t_StepsizeHelper__methods_ },
          { Py_tp_init, (void *) t_StepsizeHelper_init_ },
          { Py_tp_getset, t_StepsizeHelper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepsizeHelper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepsizeHelper, t_StepsizeHelper, StepsizeHelper);

        void t_StepsizeHelper::install(PyObject *module)
        {
          installType(&PY_TYPE(StepsizeHelper), &PY_TYPE_DEF(StepsizeHelper), module, "StepsizeHelper", 0);
        }

        void t_StepsizeHelper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "class_", make_descriptor(StepsizeHelper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "wrapfn_", make_descriptor(t_StepsizeHelper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepsizeHelper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepsizeHelper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepsizeHelper::initializeClass, 1)))
            return NULL;
          return t_StepsizeHelper::wrap_Object(StepsizeHelper(((t_StepsizeHelper *) arg)->object.this$));
        }
        static PyObject *t_StepsizeHelper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepsizeHelper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepsizeHelper_init_(t_StepsizeHelper *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              StepsizeHelper object((jobject) NULL);

              if (!parseArgs(args, "DD[D[D", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StepsizeHelper(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              StepsizeHelper object((jobject) NULL);

              if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StepsizeHelper(a0, a1, a2, a3));
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

        static PyObject *t_StepsizeHelper_filterStep(t_StepsizeHelper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              jboolean a1;
              jboolean a2;
              jdouble result;

              if (!parseArgs(args, "DZZ", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.filterStep(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean a1;
              jboolean a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KZZ", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.filterStep(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "filterStep", args);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_getDummyStepsize(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDummyStepsize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getInitialStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInitialStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getMainSetDimension(t_StepsizeHelper *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMainSetDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StepsizeHelper_getMaxStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getMinStep(t_StepsizeHelper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StepsizeHelper_getRelativeTolerance(t_StepsizeHelper *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getRelativeTolerance(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRelativeTolerance", arg);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_getTolerance(t_StepsizeHelper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getTolerance(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getTolerance(a0, a1));
                return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getTolerance", args);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_setInitialStepSize(t_StepsizeHelper *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInitialStepSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialStepSize", arg);
          return NULL;
        }

        static PyObject *t_StepsizeHelper_get__dummyStepsize(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDummyStepsize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepsizeHelper_get__initialStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInitialStep());
          return PyFloat_FromDouble((double) value);
        }

        static int t_StepsizeHelper_set__initialStepSize(t_StepsizeHelper *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInitialStepSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialStepSize", arg);
          return -1;
        }

        static PyObject *t_StepsizeHelper_get__mainSetDimension(t_StepsizeHelper *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMainSetDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StepsizeHelper_get__maxStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StepsizeHelper_get__minStep(t_StepsizeHelper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/radiation/KnockeRediffusedForceModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/radiation/RadiationSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/forces/ForceModel.h"
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
            mids$[mid_init$_acb94c2e2ec7d1c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/forces/radiation/RadiationSensitive;DD)V");
            mids$[mid_init$_eb25af3005fe6192] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/forces/radiation/RadiationSensitive;DDLorg/orekit/time/TimeScale;)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KnockeRediffusedForceModel::KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::forces::radiation::RadiationSensitive & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_acb94c2e2ec7d1c9, a0.this$, a1.this$, a2, a3)) {}

        KnockeRediffusedForceModel::KnockeRediffusedForceModel(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, const ::org::orekit::forces::radiation::RadiationSensitive & a1, jdouble a2, jdouble a3, const ::org::orekit::time::TimeScale & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_eb25af3005fe6192, a0.this$, a1.this$, a2, a3, a4.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D KnockeRediffusedForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D KnockeRediffusedForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        jboolean KnockeRediffusedForceModel::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_eee3de00fe971136]);
        }

        ::java::util::List KnockeRediffusedForceModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
#include "org/orekit/propagation/sampling/PythonOrekitFixedStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitFixedStepHandler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonOrekitFixedStepHandler::class$ = NULL;
        jmethodID *PythonOrekitFixedStepHandler::mids$ = NULL;
        bool PythonOrekitFixedStepHandler::live$ = false;

        jclass PythonOrekitFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonOrekitFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_72b846eb87f3af9a] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_72b846eb87f3af9a] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_init_c410ce24bfc8448e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonOrekitFixedStepHandler::PythonOrekitFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonOrekitFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonOrekitFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonOrekitFixedStepHandler::pythonExtension(jlong a0) const
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
      namespace sampling {
        static PyObject *t_PythonOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonOrekitFixedStepHandler_init_(t_PythonOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonOrekitFixedStepHandler_finalize(t_PythonOrekitFixedStepHandler *self);
        static PyObject *t_PythonOrekitFixedStepHandler_pythonExtension(t_PythonOrekitFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonOrekitFixedStepHandler_get__self(t_PythonOrekitFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonOrekitFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonOrekitFixedStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonOrekitFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonOrekitFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonOrekitFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonOrekitFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonOrekitFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonOrekitFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonOrekitFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonOrekitFixedStepHandler, t_PythonOrekitFixedStepHandler, PythonOrekitFixedStepHandler);

        void t_PythonOrekitFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonOrekitFixedStepHandler), &PY_TYPE_DEF(PythonOrekitFixedStepHandler), module, "PythonOrekitFixedStepHandler", 1);
        }

        void t_PythonOrekitFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "class_", make_descriptor(PythonOrekitFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "wrapfn_", make_descriptor(t_PythonOrekitFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrekitFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonOrekitFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitFixedStepHandler_finish0 },
            { "handleStep", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonOrekitFixedStepHandler_handleStep1 },
            { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;D)V", (void *) t_PythonOrekitFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonOrekitFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonOrekitFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonOrekitFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonOrekitFixedStepHandler::wrap_Object(PythonOrekitFixedStepHandler(((t_PythonOrekitFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonOrekitFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonOrekitFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonOrekitFixedStepHandler_init_(t_PythonOrekitFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonOrekitFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonOrekitFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonOrekitFixedStepHandler_finalize(t_PythonOrekitFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonOrekitFixedStepHandler_pythonExtension(t_PythonOrekitFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonOrekitFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonOrekitFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonOrekitFixedStepHandler::mids$[PythonOrekitFixedStepHandler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonOrekitFixedStepHandler_get__self(t_PythonOrekitFixedStepHandler *self, void *data)
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
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getCenterOfMassOffset_9981f74b2d109da6] = env->getMethodID(cls, "getCenterOfMassOffset", "()D");
            mids$[mid_getPrf_9981f74b2d109da6] = env->getMethodID(cls, "getPrf", "()D");
            mids$[mid_getRefFrame_cb151471db4570f0] = env->getMethodID(cls, "getRefFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getRefFrameId_d6ab429752e7c267] = env->getMethodID(cls, "getRefFrameId", "()I");
            mids$[mid_getRotationalAngleType_d6ab429752e7c267] = env->getMethodID(cls, "getRotationalAngleType", "()I");
            mids$[mid_getSource_d2c8eb4129821f0e] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
            mids$[mid_getStep_d6ab429752e7c267] = env->getMethodID(cls, "getStep", "()I");
            mids$[mid_getSubDailySequenceNumber_d6ab429752e7c267] = env->getMethodID(cls, "getSubDailySequenceNumber", "()I");
            mids$[mid_getTranspClkRef_9981f74b2d109da6] = env->getMethodID(cls, "getTranspClkRef", "()D");
            mids$[mid_getTranspOscDrift_9981f74b2d109da6] = env->getMethodID(cls, "getTranspOscDrift", "()D");
            mids$[mid_getTranspTransmitDelay_9981f74b2d109da6] = env->getMethodID(cls, "getTranspTransmitDelay", "()D");
            mids$[mid_getTranspUtcOffset_9981f74b2d109da6] = env->getMethodID(cls, "getTranspUtcOffset", "()D");
            mids$[mid_isCenterOfMassCorrectionApplied_eee3de00fe971136] = env->getMethodID(cls, "isCenterOfMassCorrectionApplied", "()Z");
            mids$[mid_isCompatibleWithTIVs_eee3de00fe971136] = env->getMethodID(cls, "isCompatibleWithTIVs", "()Z");
            mids$[mid_setCenterOfMassOffset_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setCenterOfMassOffset", "(D)V");
            mids$[mid_setIsCenterOfMassCorrectionApplied_b35db77cae58639e] = env->getMethodID(cls, "setIsCenterOfMassCorrectionApplied", "(Z)V");
            mids$[mid_setIsCompatibleWithTIVs_b35db77cae58639e] = env->getMethodID(cls, "setIsCompatibleWithTIVs", "(Z)V");
            mids$[mid_setPrf_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setPrf", "(D)V");
            mids$[mid_setRefFrame_9725b246c9e25f68] = env->getMethodID(cls, "setRefFrame", "(Lorg/orekit/frames/Frame;)V");
            mids$[mid_setRefFrameId_8fd427ab23829bf5] = env->getMethodID(cls, "setRefFrameId", "(I)V");
            mids$[mid_setRotationalAngleType_8fd427ab23829bf5] = env->getMethodID(cls, "setRotationalAngleType", "(I)V");
            mids$[mid_setSource_105e1eadb709d9ac] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
            mids$[mid_setStep_8fd427ab23829bf5] = env->getMethodID(cls, "setStep", "(I)V");
            mids$[mid_setSubDailySequenceNumber_8fd427ab23829bf5] = env->getMethodID(cls, "setSubDailySequenceNumber", "(I)V");
            mids$[mid_setTranspClkRef_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTranspClkRef", "(D)V");
            mids$[mid_setTranspOscDrift_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTranspOscDrift", "(D)V");
            mids$[mid_setTranspTransmitDelay_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTranspTransmitDelay", "(D)V");
            mids$[mid_setTranspUtcOffset_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTranspUtcOffset", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFHeader::CPFHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble CPFHeader::getCenterOfMassOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getCenterOfMassOffset_9981f74b2d109da6]);
        }

        jdouble CPFHeader::getPrf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPrf_9981f74b2d109da6]);
        }

        ::org::orekit::frames::Frame CPFHeader::getRefFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getRefFrame_cb151471db4570f0]));
        }

        jint CPFHeader::getRefFrameId() const
        {
          return env->callIntMethod(this$, mids$[mid_getRefFrameId_d6ab429752e7c267]);
        }

        jint CPFHeader::getRotationalAngleType() const
        {
          return env->callIntMethod(this$, mids$[mid_getRotationalAngleType_d6ab429752e7c267]);
        }

        ::java::lang::String CPFHeader::getSource() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_d2c8eb4129821f0e]));
        }

        jint CPFHeader::getStep() const
        {
          return env->callIntMethod(this$, mids$[mid_getStep_d6ab429752e7c267]);
        }

        jint CPFHeader::getSubDailySequenceNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSubDailySequenceNumber_d6ab429752e7c267]);
        }

        jdouble CPFHeader::getTranspClkRef() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspClkRef_9981f74b2d109da6]);
        }

        jdouble CPFHeader::getTranspOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspOscDrift_9981f74b2d109da6]);
        }

        jdouble CPFHeader::getTranspTransmitDelay() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspTransmitDelay_9981f74b2d109da6]);
        }

        jdouble CPFHeader::getTranspUtcOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspUtcOffset_9981f74b2d109da6]);
        }

        jboolean CPFHeader::isCenterOfMassCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCenterOfMassCorrectionApplied_eee3de00fe971136]);
        }

        jboolean CPFHeader::isCompatibleWithTIVs() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCompatibleWithTIVs_eee3de00fe971136]);
        }

        void CPFHeader::setCenterOfMassOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCenterOfMassOffset_1ad26e8c8c0cd65b], a0);
        }

        void CPFHeader::setIsCenterOfMassCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCenterOfMassCorrectionApplied_b35db77cae58639e], a0);
        }

        void CPFHeader::setIsCompatibleWithTIVs(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCompatibleWithTIVs_b35db77cae58639e], a0);
        }

        void CPFHeader::setPrf(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPrf_1ad26e8c8c0cd65b], a0);
        }

        void CPFHeader::setRefFrame(const ::org::orekit::frames::Frame & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRefFrame_9725b246c9e25f68], a0.this$);
        }

        void CPFHeader::setRefFrameId(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRefFrameId_8fd427ab23829bf5], a0);
        }

        void CPFHeader::setRotationalAngleType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRotationalAngleType_8fd427ab23829bf5], a0);
        }

        void CPFHeader::setSource(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSource_105e1eadb709d9ac], a0.this$);
        }

        void CPFHeader::setStep(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStep_8fd427ab23829bf5], a0);
        }

        void CPFHeader::setSubDailySequenceNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSubDailySequenceNumber_8fd427ab23829bf5], a0);
        }

        void CPFHeader::setTranspClkRef(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspClkRef_1ad26e8c8c0cd65b], a0);
        }

        void CPFHeader::setTranspOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspOscDrift_1ad26e8c8c0cd65b], a0);
        }

        void CPFHeader::setTranspTransmitDelay(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspTransmitDelay_1ad26e8c8c0cd65b], a0);
        }

        void CPFHeader::setTranspUtcOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspUtcOffset_1ad26e8c8c0cd65b], a0);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace carlson {

          ::java::lang::Class *CarlsonEllipticIntegral::class$ = NULL;
          jmethodID *CarlsonEllipticIntegral::mids$ = NULL;
          bool CarlsonEllipticIntegral::live$ = false;

          jclass CarlsonEllipticIntegral::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral");

              mids$ = new jmethodID[max_mid];
              mids$[mid_rC_2d58bd4896edb1e2] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rC_52ba3d392dc930c6] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rC_82f92590f4247da1] = env->getStaticMethodID(cls, "rC", "(DD)D");
              mids$[mid_rC_b5ecd7df9e053968] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rD_373272692db3c8df] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rD_232ee5b9d52b0bf0] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rD_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "rD", "(DDD)D");
              mids$[mid_rD_3130e338b3b4d904] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rF_373272692db3c8df] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rF_232ee5b9d52b0bf0] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rF_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "rF", "(DDD)D");
              mids$[mid_rF_3130e338b3b4d904] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rG_373272692db3c8df] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rG_232ee5b9d52b0bf0] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rG_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "rG", "(DDD)D");
              mids$[mid_rG_3130e338b3b4d904] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rJ_68c85ce87a0825b2] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rJ_1853272de87ee45b] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rJ_45d926aea7231320] = env->getStaticMethodID(cls, "rJ", "(DDDD)D");
              mids$[mid_rJ_d2c2bcf9f0e55408] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rJ_c5419c2e15847ba0] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rJ_044261f00ec25a20] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rJ_773b305e354f2fdd] = env->getStaticMethodID(cls, "rJ", "(DDDDD)D");
              mids$[mid_rJ_f38b8aec1a9a4ac3] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rC(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rC_2d58bd4896edb1e2], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rC(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rC_52ba3d392dc930c6], a0.this$, a1.this$));
          }

          jdouble CarlsonEllipticIntegral::rC(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rC_82f92590f4247da1], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rC(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rC_b5ecd7df9e053968], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rD(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rD_373272692db3c8df], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rD(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rD_232ee5b9d52b0bf0], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rD(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rD_db06d8c3fc3d9670], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rD(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rD_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rF_373272692db3c8df], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rF_232ee5b9d52b0bf0], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rF(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rF_db06d8c3fc3d9670], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rF(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rF_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rG(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rG_373272692db3c8df], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rG(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rG_232ee5b9d52b0bf0], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rG(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rG_db06d8c3fc3d9670], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rG(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rG_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rJ_68c85ce87a0825b2], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rJ_1853272de87ee45b], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble CarlsonEllipticIntegral::rJ(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rJ_45d926aea7231320], a0, a1, a2, a3);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rJ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rJ_d2c2bcf9f0e55408], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3, const ::org::hipparchus::complex::Complex & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rJ_c5419c2e15847ba0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3, const ::org::hipparchus::complex::FieldComplex & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rJ_044261f00ec25a20], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          jdouble CarlsonEllipticIntegral::rJ(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rJ_773b305e354f2fdd], a0, a1, a2, a3, a4);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rJ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rJ_f38b8aec1a9a4ac3], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
        namespace carlson {
          static PyObject *t_CarlsonEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarlsonEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarlsonEllipticIntegral_rC(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rD(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rF(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rG(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rJ(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_CarlsonEllipticIntegral__methods_[] = {
            DECLARE_METHOD(t_CarlsonEllipticIntegral, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rC, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rD, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rG, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rJ, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CarlsonEllipticIntegral)[] = {
            { Py_tp_methods, t_CarlsonEllipticIntegral__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CarlsonEllipticIntegral)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CarlsonEllipticIntegral, t_CarlsonEllipticIntegral, CarlsonEllipticIntegral);

          void t_CarlsonEllipticIntegral::install(PyObject *module)
          {
            installType(&PY_TYPE(CarlsonEllipticIntegral), &PY_TYPE_DEF(CarlsonEllipticIntegral), module, "CarlsonEllipticIntegral", 0);
          }

          void t_CarlsonEllipticIntegral::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "class_", make_descriptor(CarlsonEllipticIntegral::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "wrapfn_", make_descriptor(t_CarlsonEllipticIntegral::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CarlsonEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CarlsonEllipticIntegral::initializeClass, 1)))
              return NULL;
            return t_CarlsonEllipticIntegral::wrap_Object(CarlsonEllipticIntegral(((t_CarlsonEllipticIntegral *) arg)->object.this$));
          }
          static PyObject *t_CarlsonEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CarlsonEllipticIntegral::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CarlsonEllipticIntegral_rC(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
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
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rC", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rD(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rD", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rF(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rF", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rG(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rG", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rJ(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex a3((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
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
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex a3((jobject) NULL);
                ::org::hipparchus::complex::Complex a4((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::complex::FieldComplex a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a4, &p4, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble result;

                if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return PyFloat_FromDouble((double) result);
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
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rJ", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmHeader.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmHeader::class$ = NULL;
            jmethodID *TdmHeader::mids$ = NULL;
            bool TdmHeader::live$ = false;

            jclass TdmHeader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmHeader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TdmHeader::TdmHeader() : ::org::orekit::files::ccsds::section::Header(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}
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
            static PyObject *t_TdmHeader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmHeader_instance_(PyTypeObject *type, PyObject *arg);
            static int t_TdmHeader_init_(t_TdmHeader *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_TdmHeader__methods_[] = {
              DECLARE_METHOD(t_TdmHeader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmHeader, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmHeader)[] = {
              { Py_tp_methods, t_TdmHeader__methods_ },
              { Py_tp_init, (void *) t_TdmHeader_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmHeader)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Header),
              NULL
            };

            DEFINE_TYPE(TdmHeader, t_TdmHeader, TdmHeader);

            void t_TdmHeader::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmHeader), &PY_TYPE_DEF(TdmHeader), module, "TdmHeader", 0);
            }

            void t_TdmHeader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "class_", make_descriptor(TdmHeader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "wrapfn_", make_descriptor(t_TdmHeader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmHeader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TdmHeader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmHeader::initializeClass, 1)))
                return NULL;
              return t_TdmHeader::wrap_Object(TdmHeader(((t_TdmHeader *) arg)->object.this$));
            }
            static PyObject *t_TdmHeader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmHeader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_TdmHeader_init_(t_TdmHeader *self, PyObject *args, PyObject *kwds)
            {
              TdmHeader object((jobject) NULL);

              INT_CALL(object = TdmHeader());
              self->object = object;

              return 0;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Incrementor$MaxCountExceededCallback::class$ = NULL;
      jmethodID *Incrementor$MaxCountExceededCallback::mids$ = NULL;
      bool Incrementor$MaxCountExceededCallback::live$ = false;

      jclass Incrementor$MaxCountExceededCallback::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Incrementor$MaxCountExceededCallback");

          mids$ = new jmethodID[max_mid];
          mids$[mid_trigger_8fd427ab23829bf5] = env->getMethodID(cls, "trigger", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Incrementor$MaxCountExceededCallback::trigger(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_trigger_8fd427ab23829bf5], a0);
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
      static PyObject *t_Incrementor$MaxCountExceededCallback_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor$MaxCountExceededCallback_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor$MaxCountExceededCallback_trigger(t_Incrementor$MaxCountExceededCallback *self, PyObject *arg);

      static PyMethodDef t_Incrementor$MaxCountExceededCallback__methods_[] = {
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor$MaxCountExceededCallback, trigger, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Incrementor$MaxCountExceededCallback)[] = {
        { Py_tp_methods, t_Incrementor$MaxCountExceededCallback__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Incrementor$MaxCountExceededCallback)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Incrementor$MaxCountExceededCallback, t_Incrementor$MaxCountExceededCallback, Incrementor$MaxCountExceededCallback);

      void t_Incrementor$MaxCountExceededCallback::install(PyObject *module)
      {
        installType(&PY_TYPE(Incrementor$MaxCountExceededCallback), &PY_TYPE_DEF(Incrementor$MaxCountExceededCallback), module, "Incrementor$MaxCountExceededCallback", 0);
      }

      void t_Incrementor$MaxCountExceededCallback::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "class_", make_descriptor(Incrementor$MaxCountExceededCallback::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "wrapfn_", make_descriptor(t_Incrementor$MaxCountExceededCallback::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor$MaxCountExceededCallback), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Incrementor$MaxCountExceededCallback_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Incrementor$MaxCountExceededCallback::initializeClass, 1)))
          return NULL;
        return t_Incrementor$MaxCountExceededCallback::wrap_Object(Incrementor$MaxCountExceededCallback(((t_Incrementor$MaxCountExceededCallback *) arg)->object.this$));
      }
      static PyObject *t_Incrementor$MaxCountExceededCallback_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Incrementor$MaxCountExceededCallback::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Incrementor$MaxCountExceededCallback_trigger(t_Incrementor$MaxCountExceededCallback *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.trigger(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "trigger", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/orbits/CartesianOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldCartesianOrbit::class$ = NULL;
      jmethodID *FieldCartesianOrbit::mids$ = NULL;
      bool FieldCartesianOrbit::live$ = false;

      jclass FieldCartesianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldCartesianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3e61171636c74f2c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_18ffa05db829c941] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/CartesianOrbit;)V");
          mids$[mid_init$_0fcb30f8b968c16a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_cc80ec5d9d193ad9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_29a388389f8e2031] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_210d5c728d3233b4] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_08d37e3f77b7239d] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_08d37e3f77b7239d] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getE_08d37e3f77b7239d] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_08d37e3f77b7239d] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_08d37e3f77b7239d] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_08d37e3f77b7239d] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_08d37e3f77b7239d] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_08d37e3f77b7239d] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_08d37e3f77b7239d] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_08d37e3f77b7239d] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_08d37e3f77b7239d] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_08d37e3f77b7239d] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_08d37e3f77b7239d] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_eee3de00fe971136] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_shiftedBy_0b54398eba481170] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldCartesianOrbit;");
          mids$[mid_shiftedBy_8038d7dde51726b1] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCartesianOrbit;");
          mids$[mid_toOrbit_9d4555873fac1cba] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/CartesianOrbit;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_d1b42a6748e907f9] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_be698fa91827b9b2] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_4d010bb8d4780d51] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_3e61171636c74f2c, a0.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::CartesianOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_18ffa05db829c941, a0.this$, a1.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_0fcb30f8b968c16a, a0.this$, a1.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_cc80ec5d9d193ad9, a0.this$, a1.this$, a2.this$)) {}

      FieldCartesianOrbit::FieldCartesianOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_29a388389f8e2031, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      void FieldCartesianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_210d5c728d3233b4], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldCartesianOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_08d37e3f77b7239d]));
      }

      ::org::orekit::orbits::OrbitType FieldCartesianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_495f818d3570b7f5]));
      }

      jboolean FieldCartesianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_eee3de00fe971136]);
      }

      FieldCartesianOrbit FieldCartesianOrbit::shiftedBy(jdouble a0) const
      {
        return FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_0b54398eba481170], a0));
      }

      FieldCartesianOrbit FieldCartesianOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_8038d7dde51726b1], a0.this$));
      }

      ::org::orekit::orbits::CartesianOrbit FieldCartesianOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::CartesianOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_9d4555873fac1cba]));
      }

      ::java::lang::String FieldCartesianOrbit::toString() const
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
    namespace orbits {
      static PyObject *t_FieldCartesianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCartesianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldCartesianOrbit_of_(t_FieldCartesianOrbit *self, PyObject *args);
      static int t_FieldCartesianOrbit_init_(t_FieldCartesianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldCartesianOrbit_addKeplerContribution(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getA(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getADot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getE(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEx(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialExDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getEquinoctialEyDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHx(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHxDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getHyDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getI(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getIDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLE(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLEDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLM(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLMDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLv(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getLvDot(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_getType(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_hasDerivatives(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_shiftedBy(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_toOrbit(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_toString(t_FieldCartesianOrbit *self, PyObject *args);
      static PyObject *t_FieldCartesianOrbit_get__a(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__aDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__e(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__eDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEx(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialExDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEy(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__equinoctialEyDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hx(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hxDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hy(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__hyDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__i(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__iDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lE(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lEDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lM(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lMDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lv(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__lvDot(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__type(t_FieldCartesianOrbit *self, void *data);
      static PyObject *t_FieldCartesianOrbit_get__parameters_(t_FieldCartesianOrbit *self, void *data);
      static PyGetSetDef t_FieldCartesianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, a),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, e),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hx),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hy),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, i),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lE),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lM),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lv),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, type),
        DECLARE_GET_FIELD(t_FieldCartesianOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldCartesianOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldCartesianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCartesianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldCartesianOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldCartesianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldCartesianOrbit)[] = {
        { Py_tp_methods, t_FieldCartesianOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldCartesianOrbit_init_ },
        { Py_tp_getset, t_FieldCartesianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldCartesianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldCartesianOrbit, t_FieldCartesianOrbit, FieldCartesianOrbit);
      PyObject *t_FieldCartesianOrbit::wrap_Object(const FieldCartesianOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCartesianOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCartesianOrbit *self = (t_FieldCartesianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldCartesianOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldCartesianOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldCartesianOrbit *self = (t_FieldCartesianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldCartesianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldCartesianOrbit), &PY_TYPE_DEF(FieldCartesianOrbit), module, "FieldCartesianOrbit", 0);
      }

      void t_FieldCartesianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "class_", make_descriptor(FieldCartesianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "wrapfn_", make_descriptor(t_FieldCartesianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCartesianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldCartesianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldCartesianOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldCartesianOrbit::wrap_Object(FieldCartesianOrbit(((t_FieldCartesianOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldCartesianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldCartesianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldCartesianOrbit_of_(t_FieldCartesianOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldCartesianOrbit_init_(t_FieldCartesianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::CartesianOrbit a1((jobject) NULL);
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::CartesianOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldCartesianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldCartesianOrbit(a0, a1, a2, a3));
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

      static PyObject *t_FieldCartesianOrbit_addKeplerContribution(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getA(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getADot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getE(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEx(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialExDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getEquinoctialEyDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHx(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHxDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getHyDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getI(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getIDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLE(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLEDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLM(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLMDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLv(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getLvDot(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_getType(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_hasDerivatives(t_FieldCartesianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_shiftedBy(t_FieldCartesianOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldCartesianOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldCartesianOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_toOrbit(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::CartesianOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_CartesianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldCartesianOrbit_toString(t_FieldCartesianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldCartesianOrbit), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldCartesianOrbit_get__parameters_(t_FieldCartesianOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldCartesianOrbit_get__a(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__aDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__e(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__eDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEx(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialExDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEy(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__equinoctialEyDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hx(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hxDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hy(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__hyDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__i(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__iDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lE(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lEDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lM(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lMDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lv(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__lvDot(t_FieldCartesianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldCartesianOrbit_get__type(t_FieldCartesianOrbit *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/PythonXmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
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
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_bb6f0a25fbefd346] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonXmlTokenBuilder::PythonXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            void PythonXmlTokenBuilder::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonXmlTokenBuilder::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonXmlTokenBuilder::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonXmlTokenBuilder::mids$[PythonXmlTokenBuilder::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
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
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *KalmanObserver::class$ = NULL;
        jmethodID *KalmanObserver::mids$ = NULL;
        bool KalmanObserver::live$ = false;

        jclass KalmanObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/KalmanObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluationPerformed_f81a8169e0b8e343] = env->getMethodID(cls, "evaluationPerformed", "(Lorg/orekit/estimation/sequential/KalmanEstimation;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void KalmanObserver::evaluationPerformed(const ::org::orekit::estimation::sequential::KalmanEstimation & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_evaluationPerformed_f81a8169e0b8e343], a0.this$);
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
        static PyObject *t_KalmanObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KalmanObserver_evaluationPerformed(t_KalmanObserver *self, PyObject *arg);

        static PyMethodDef t_KalmanObserver__methods_[] = {
          DECLARE_METHOD(t_KalmanObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KalmanObserver, evaluationPerformed, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KalmanObserver)[] = {
          { Py_tp_methods, t_KalmanObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KalmanObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KalmanObserver, t_KalmanObserver, KalmanObserver);

        void t_KalmanObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(KalmanObserver), &PY_TYPE_DEF(KalmanObserver), module, "KalmanObserver", 0);
        }

        void t_KalmanObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanObserver), "class_", make_descriptor(KalmanObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanObserver), "wrapfn_", make_descriptor(t_KalmanObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KalmanObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KalmanObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KalmanObserver::initializeClass, 1)))
            return NULL;
          return t_KalmanObserver::wrap_Object(KalmanObserver(((t_KalmanObserver *) arg)->object.this$));
        }
        static PyObject *t_KalmanObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KalmanObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_KalmanObserver_evaluationPerformed(t_KalmanObserver *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanEstimation a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanEstimation::initializeClass, &a0))
          {
            OBJ_CALL(self->object.evaluationPerformed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "evaluationPerformed", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/SortedSet.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *AbstractSolarActivityDataLoader::class$ = NULL;
            jmethodID *AbstractSolarActivityDataLoader::mids$ = NULL;
            bool AbstractSolarActivityDataLoader::live$ = false;

            jclass AbstractSolarActivityDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDataSet_815c7115fae241c1] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getUTC_5e2cac12ab8da943] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/TimeScale;");
                mids$[mid_setMaxDate_8497861b879c83f7] = env->getMethodID(cls, "setMaxDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setMinDate_8497861b879c83f7] = env->getMethodID(cls, "setMinDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_stillAcceptsData_eee3de00fe971136] = env->getMethodID(cls, "stillAcceptsData", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::SortedSet AbstractSolarActivityDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_815c7115fae241c1]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader::getMaxDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
            }

            ::org::orekit::time::AbsoluteDate AbstractSolarActivityDataLoader::getMinDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
            }

            ::org::orekit::time::TimeScale AbstractSolarActivityDataLoader::getUTC() const
            {
              return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUTC_5e2cac12ab8da943]));
            }

            void AbstractSolarActivityDataLoader::setMaxDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMaxDate_8497861b879c83f7], a0.this$);
            }

            void AbstractSolarActivityDataLoader::setMinDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMinDate_8497861b879c83f7], a0.this$);
            }

            jboolean AbstractSolarActivityDataLoader::stillAcceptsData() const
            {
              return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_eee3de00fe971136]);
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
#include "org/orekit/models/earth/atmosphere/data/AbstractSolarActivityDataLoader$LineParameters.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_AbstractSolarActivityDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_of_(t_AbstractSolarActivityDataLoader *self, PyObject *args);
            static PyObject *t_AbstractSolarActivityDataLoader_getDataSet(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getMaxDate(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getMinDate(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_getUTC(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_setMaxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_setMinDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg);
            static PyObject *t_AbstractSolarActivityDataLoader_stillAcceptsData(t_AbstractSolarActivityDataLoader *self);
            static PyObject *t_AbstractSolarActivityDataLoader_get__dataSet(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__maxDate(t_AbstractSolarActivityDataLoader *self, void *data);
            static int t_AbstractSolarActivityDataLoader_set__maxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__minDate(t_AbstractSolarActivityDataLoader *self, void *data);
            static int t_AbstractSolarActivityDataLoader_set__minDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__uTC(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyObject *t_AbstractSolarActivityDataLoader_get__parameters_(t_AbstractSolarActivityDataLoader *self, void *data);
            static PyGetSetDef t_AbstractSolarActivityDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, dataSet),
              DECLARE_GETSET_FIELD(t_AbstractSolarActivityDataLoader, maxDate),
              DECLARE_GETSET_FIELD(t_AbstractSolarActivityDataLoader, minDate),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, uTC),
              DECLARE_GET_FIELD(t_AbstractSolarActivityDataLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSolarActivityDataLoader__methods_[] = {
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getDataSet, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getMaxDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getMinDate, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, getUTC, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, setMaxDate, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, setMinDate, METH_O),
              DECLARE_METHOD(t_AbstractSolarActivityDataLoader, stillAcceptsData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSolarActivityDataLoader)[] = {
              { Py_tp_methods, t_AbstractSolarActivityDataLoader__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSolarActivityDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSolarActivityDataLoader)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSolarActivityDataLoader, t_AbstractSolarActivityDataLoader, AbstractSolarActivityDataLoader);
            PyObject *t_AbstractSolarActivityDataLoader::wrap_Object(const AbstractSolarActivityDataLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader *self = (t_AbstractSolarActivityDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractSolarActivityDataLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractSolarActivityDataLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractSolarActivityDataLoader *self = (t_AbstractSolarActivityDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractSolarActivityDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSolarActivityDataLoader), &PY_TYPE_DEF(AbstractSolarActivityDataLoader), module, "AbstractSolarActivityDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(AbstractSolarActivityDataLoader$LineParameters)));
            }

            void t_AbstractSolarActivityDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "class_", make_descriptor(AbstractSolarActivityDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "wrapfn_", make_descriptor(t_AbstractSolarActivityDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSolarActivityDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSolarActivityDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSolarActivityDataLoader::initializeClass, 1)))
                return NULL;
              return t_AbstractSolarActivityDataLoader::wrap_Object(AbstractSolarActivityDataLoader(((t_AbstractSolarActivityDataLoader *) arg)->object.this$));
            }
            static PyObject *t_AbstractSolarActivityDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSolarActivityDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_of_(t_AbstractSolarActivityDataLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getDataSet(t_AbstractSolarActivityDataLoader *self)
            {
              ::java::util::SortedSet result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getMaxDate(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getMinDate(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_getUTC(t_AbstractSolarActivityDataLoader *self)
            {
              ::org::orekit::time::TimeScale result((jobject) NULL);
              OBJ_CALL(result = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(result);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_setMaxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMaxDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMaxDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_setMinDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setMinDate(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMinDate", arg);
              return NULL;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_stillAcceptsData(t_AbstractSolarActivityDataLoader *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.stillAcceptsData());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractSolarActivityDataLoader_get__parameters_(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__dataSet(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__maxDate(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMaxDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractSolarActivityDataLoader_set__maxDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setMaxDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "maxDate", arg);
              return -1;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__minDate(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMinDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_AbstractSolarActivityDataLoader_set__minDate(t_AbstractSolarActivityDataLoader *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setMinDate(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "minDate", arg);
              return -1;
            }

            static PyObject *t_AbstractSolarActivityDataLoader_get__uTC(t_AbstractSolarActivityDataLoader *self, void *data)
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              OBJ_CALL(value = self->object.getUTC());
              return ::org::orekit::time::t_TimeScale::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *OneWayGNSSRange::class$ = NULL;
          jmethodID *OneWayGNSSRange::mids$ = NULL;
          bool OneWayGNSSRange::live$ = false;
          ::java::lang::String *OneWayGNSSRange::MEASUREMENT_TYPE = NULL;

          jclass OneWayGNSSRange::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/OneWayGNSSRange");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fda3b241682bc710] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OneWayGNSSRange::OneWayGNSSRange(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_fda3b241682bc710, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}
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
          static PyObject *t_OneWayGNSSRange_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRange_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSRange_of_(t_OneWayGNSSRange *self, PyObject *args);
          static int t_OneWayGNSSRange_init_(t_OneWayGNSSRange *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSRange_get__parameters_(t_OneWayGNSSRange *self, void *data);
          static PyGetSetDef t_OneWayGNSSRange__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSRange, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSRange__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSRange, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRange, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSRange, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSRange)[] = {
            { Py_tp_methods, t_OneWayGNSSRange__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSRange_init_ },
            { Py_tp_getset, t_OneWayGNSSRange__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSRange)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSRange, t_OneWayGNSSRange, OneWayGNSSRange);
          PyObject *t_OneWayGNSSRange::wrap_Object(const OneWayGNSSRange& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRange::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRange *self = (t_OneWayGNSSRange *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSRange::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSRange *self = (t_OneWayGNSSRange *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSRange::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSRange), &PY_TYPE_DEF(OneWayGNSSRange), module, "OneWayGNSSRange", 0);
          }

          void t_OneWayGNSSRange::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "class_", make_descriptor(OneWayGNSSRange::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "wrapfn_", make_descriptor(t_OneWayGNSSRange::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "boxfn_", make_descriptor(boxObject));
            env->getClass(OneWayGNSSRange::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*OneWayGNSSRange::MEASUREMENT_TYPE)));
          }

          static PyObject *t_OneWayGNSSRange_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSRange::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSRange::wrap_Object(OneWayGNSSRange(((t_OneWayGNSSRange *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSRange_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSRange::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSRange_of_(t_OneWayGNSSRange *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OneWayGNSSRange_init_(t_OneWayGNSSRange *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            OneWayGNSSRange object((jobject) NULL);

            if (!parseArgs(args, "kDkDDDk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = OneWayGNSSRange(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(OneWayGNSSRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_OneWayGNSSRange_get__parameters_(t_OneWayGNSSRange *self, void *data)
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
#include "org/orekit/models/PythonAtmosphericRefractionModel.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {

      ::java::lang::Class *PythonAtmosphericRefractionModel::class$ = NULL;
      jmethodID *PythonAtmosphericRefractionModel::mids$ = NULL;
      bool PythonAtmosphericRefractionModel::live$ = false;

      jclass PythonAtmosphericRefractionModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/models/PythonAtmosphericRefractionModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getRefraction_bf28ed64d6e8576b] = env->getMethodID(cls, "getRefraction", "(D)D");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAtmosphericRefractionModel::PythonAtmosphericRefractionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonAtmosphericRefractionModel::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAtmosphericRefractionModel::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAtmosphericRefractionModel::pythonExtension(jlong a0) const
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
    namespace models {
      static PyObject *t_PythonAtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAtmosphericRefractionModel_init_(t_PythonAtmosphericRefractionModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAtmosphericRefractionModel_finalize(t_PythonAtmosphericRefractionModel *self);
      static PyObject *t_PythonAtmosphericRefractionModel_pythonExtension(t_PythonAtmosphericRefractionModel *self, PyObject *args);
      static jdouble JNICALL t_PythonAtmosphericRefractionModel_getRefraction0(JNIEnv *jenv, jobject jobj, jdouble a0);
      static void JNICALL t_PythonAtmosphericRefractionModel_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAtmosphericRefractionModel_get__self(t_PythonAtmosphericRefractionModel *self, void *data);
      static PyGetSetDef t_PythonAtmosphericRefractionModel__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAtmosphericRefractionModel, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAtmosphericRefractionModel__methods_[] = {
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAtmosphericRefractionModel, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAtmosphericRefractionModel)[] = {
        { Py_tp_methods, t_PythonAtmosphericRefractionModel__methods_ },
        { Py_tp_init, (void *) t_PythonAtmosphericRefractionModel_init_ },
        { Py_tp_getset, t_PythonAtmosphericRefractionModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAtmosphericRefractionModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAtmosphericRefractionModel, t_PythonAtmosphericRefractionModel, PythonAtmosphericRefractionModel);

      void t_PythonAtmosphericRefractionModel::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAtmosphericRefractionModel), &PY_TYPE_DEF(PythonAtmosphericRefractionModel), module, "PythonAtmosphericRefractionModel", 1);
      }

      void t_PythonAtmosphericRefractionModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "class_", make_descriptor(PythonAtmosphericRefractionModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "wrapfn_", make_descriptor(t_PythonAtmosphericRefractionModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphericRefractionModel), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAtmosphericRefractionModel::initializeClass);
        JNINativeMethod methods[] = {
          { "getRefraction", "(D)D", (void *) t_PythonAtmosphericRefractionModel_getRefraction0 },
          { "pythonDecRef", "()V", (void *) t_PythonAtmosphericRefractionModel_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonAtmosphericRefractionModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAtmosphericRefractionModel::initializeClass, 1)))
          return NULL;
        return t_PythonAtmosphericRefractionModel::wrap_Object(PythonAtmosphericRefractionModel(((t_PythonAtmosphericRefractionModel *) arg)->object.this$));
      }
      static PyObject *t_PythonAtmosphericRefractionModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAtmosphericRefractionModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAtmosphericRefractionModel_init_(t_PythonAtmosphericRefractionModel *self, PyObject *args, PyObject *kwds)
      {
        PythonAtmosphericRefractionModel object((jobject) NULL);

        INT_CALL(object = PythonAtmosphericRefractionModel());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAtmosphericRefractionModel_finalize(t_PythonAtmosphericRefractionModel *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAtmosphericRefractionModel_pythonExtension(t_PythonAtmosphericRefractionModel *self, PyObject *args)
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

      static jdouble JNICALL t_PythonAtmosphericRefractionModel_getRefraction0(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getRefraction", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getRefraction", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static void JNICALL t_PythonAtmosphericRefractionModel_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAtmosphericRefractionModel::mids$[PythonAtmosphericRefractionModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAtmosphericRefractionModel_get__self(t_PythonAtmosphericRefractionModel *self, void *data)
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
#include "org/orekit/utils/AggregatedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AggregatedPVCoordinatesProvider::class$ = NULL;
      jmethodID *AggregatedPVCoordinatesProvider::mids$ = NULL;
      bool AggregatedPVCoordinatesProvider::live$ = false;

      jclass AggregatedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AggregatedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5d8d405cc3fef70d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;)V");
          mids$[mid_init$_baf0926dfa2672d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPVCoordinates_6236a35378ed47a5] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_abe01c75f7e82353] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AggregatedPVCoordinatesProvider::AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d8d405cc3fef70d, a0.this$)) {}

      AggregatedPVCoordinatesProvider::AggregatedPVCoordinatesProvider(const ::org::orekit::utils::TimeSpanMap & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_baf0926dfa2672d0, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::time::AbsoluteDate AggregatedPVCoordinatesProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate AggregatedPVCoordinatesProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates AggregatedPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_6236a35378ed47a5], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D AggregatedPVCoordinatesProvider::getPosition(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_abe01c75f7e82353], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$InvalidPVProvider.h"
#include "org/orekit/utils/AggregatedPVCoordinatesProvider$Builder.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_AggregatedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AggregatedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AggregatedPVCoordinatesProvider_init_(t_AggregatedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AggregatedPVCoordinatesProvider_getMaxDate(t_AggregatedPVCoordinatesProvider *self);
      static PyObject *t_AggregatedPVCoordinatesProvider_getMinDate(t_AggregatedPVCoordinatesProvider *self);
      static PyObject *t_AggregatedPVCoordinatesProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider_getPosition(t_AggregatedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_AggregatedPVCoordinatesProvider_get__maxDate(t_AggregatedPVCoordinatesProvider *self, void *data);
      static PyObject *t_AggregatedPVCoordinatesProvider_get__minDate(t_AggregatedPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_AggregatedPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_AggregatedPVCoordinatesProvider, maxDate),
        DECLARE_GET_FIELD(t_AggregatedPVCoordinatesProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AggregatedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getMinDate, METH_NOARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_AggregatedPVCoordinatesProvider, getPosition, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AggregatedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_AggregatedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_AggregatedPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_AggregatedPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AggregatedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AggregatedPVCoordinatesProvider, t_AggregatedPVCoordinatesProvider, AggregatedPVCoordinatesProvider);

      void t_AggregatedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AggregatedPVCoordinatesProvider), &PY_TYPE_DEF(AggregatedPVCoordinatesProvider), module, "AggregatedPVCoordinatesProvider", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "InvalidPVProvider", make_descriptor(&PY_TYPE_DEF(AggregatedPVCoordinatesProvider$InvalidPVProvider)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "Builder", make_descriptor(&PY_TYPE_DEF(AggregatedPVCoordinatesProvider$Builder)));
      }

      void t_AggregatedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "class_", make_descriptor(AggregatedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_AggregatedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AggregatedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_AggregatedPVCoordinatesProvider::wrap_Object(AggregatedPVCoordinatesProvider(((t_AggregatedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_AggregatedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AggregatedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AggregatedPVCoordinatesProvider_init_(t_AggregatedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            AggregatedPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            AggregatedPVCoordinatesProvider object((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1, &a2))
            {
              INT_CALL(object = AggregatedPVCoordinatesProvider(a0, a1, a2));
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

      static PyObject *t_AggregatedPVCoordinatesProvider_getMaxDate(t_AggregatedPVCoordinatesProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_getMinDate(t_AggregatedPVCoordinatesProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_getPVCoordinates(t_AggregatedPVCoordinatesProvider *self, PyObject *args)
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

      static PyObject *t_AggregatedPVCoordinatesProvider_getPosition(t_AggregatedPVCoordinatesProvider *self, PyObject *args)
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

      static PyObject *t_AggregatedPVCoordinatesProvider_get__maxDate(t_AggregatedPVCoordinatesProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AggregatedPVCoordinatesProvider_get__minDate(t_AggregatedPVCoordinatesProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TCGScale::class$ = NULL;
      jmethodID *TCGScale::mids$ = NULL;
      bool TCGScale::live$ = false;

      jclass TCGScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TCGScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TCGScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble TCGScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TCGScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      ::java::lang::String TCGScale::toString() const
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
    namespace time {
      static PyObject *t_TCGScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCGScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TCGScale_getName(t_TCGScale *self);
      static PyObject *t_TCGScale_offsetFromTAI(t_TCGScale *self, PyObject *args);
      static PyObject *t_TCGScale_toString(t_TCGScale *self, PyObject *args);
      static PyObject *t_TCGScale_get__name(t_TCGScale *self, void *data);
      static PyGetSetDef t_TCGScale__fields_[] = {
        DECLARE_GET_FIELD(t_TCGScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TCGScale__methods_[] = {
        DECLARE_METHOD(t_TCGScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCGScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TCGScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TCGScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TCGScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TCGScale)[] = {
        { Py_tp_methods, t_TCGScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TCGScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TCGScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TCGScale, t_TCGScale, TCGScale);

      void t_TCGScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TCGScale), &PY_TYPE_DEF(TCGScale), module, "TCGScale", 0);
      }

      void t_TCGScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "class_", make_descriptor(TCGScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "wrapfn_", make_descriptor(t_TCGScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TCGScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TCGScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TCGScale::initializeClass, 1)))
          return NULL;
        return t_TCGScale::wrap_Object(TCGScale(((t_TCGScale *) arg)->object.this$));
      }
      static PyObject *t_TCGScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TCGScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TCGScale_getName(t_TCGScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TCGScale_offsetFromTAI(t_TCGScale *self, PyObject *args)
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

      static PyObject *t_TCGScale_toString(t_TCGScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TCGScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TCGScale_get__name(t_TCGScale *self, void *data)
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
#include "org/orekit/forces/radiation/ECOM2.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
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
      namespace radiation {

        ::java::lang::Class *ECOM2::class$ = NULL;
        jmethodID *ECOM2::mids$ = NULL;
        bool ECOM2::live$ = false;
        ::java::lang::String *ECOM2::ECOM_COEFFICIENT = NULL;

        jclass ECOM2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/radiation/ECOM2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_85e2aef72c2e015f] = env->getMethodID(cls, "<init>", "(IIDLorg/orekit/utils/ExtendedPVCoordinatesProvider;D)V");
            mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ECOM_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ECOM_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ECOM2::ECOM2(jint a0, jint a1, jdouble a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, jdouble a4) : ::org::orekit::forces::radiation::AbstractRadiationForceModel(env->newObject(initializeClass, &mids$, mid_init$_85e2aef72c2e015f, a0, a1, a2, a3.this$, a4)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ECOM2::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_5e147f44c28a35c9], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ECOM2::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_9816b8f76e94356a], a0.this$, a1.this$));
        }

        ::java::util::List ECOM2::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
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
        static PyObject *t_ECOM2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ECOM2_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ECOM2_init_(t_ECOM2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ECOM2_acceleration(t_ECOM2 *self, PyObject *args);
        static PyObject *t_ECOM2_getParametersDrivers(t_ECOM2 *self, PyObject *args);
        static PyObject *t_ECOM2_get__parametersDrivers(t_ECOM2 *self, void *data);
        static PyGetSetDef t_ECOM2__fields_[] = {
          DECLARE_GET_FIELD(t_ECOM2, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ECOM2__methods_[] = {
          DECLARE_METHOD(t_ECOM2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ECOM2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ECOM2, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_ECOM2, getParametersDrivers, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ECOM2)[] = {
          { Py_tp_methods, t_ECOM2__methods_ },
          { Py_tp_init, (void *) t_ECOM2_init_ },
          { Py_tp_getset, t_ECOM2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ECOM2)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::radiation::AbstractRadiationForceModel),
          NULL
        };

        DEFINE_TYPE(ECOM2, t_ECOM2, ECOM2);

        void t_ECOM2::install(PyObject *module)
        {
          installType(&PY_TYPE(ECOM2), &PY_TYPE_DEF(ECOM2), module, "ECOM2", 0);
        }

        void t_ECOM2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "class_", make_descriptor(ECOM2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "wrapfn_", make_descriptor(t_ECOM2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "boxfn_", make_descriptor(boxObject));
          env->getClass(ECOM2::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ECOM2), "ECOM_COEFFICIENT", make_descriptor(j2p(*ECOM2::ECOM_COEFFICIENT)));
        }

        static PyObject *t_ECOM2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ECOM2::initializeClass, 1)))
            return NULL;
          return t_ECOM2::wrap_Object(ECOM2(((t_ECOM2 *) arg)->object.this$));
        }
        static PyObject *t_ECOM2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ECOM2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ECOM2_init_(t_ECOM2 *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jdouble a2;
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          jdouble a4;
          ECOM2 object((jobject) NULL);

          if (!parseArgs(args, "IIDkD", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = ECOM2(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ECOM2_acceleration(t_ECOM2 *self, PyObject *args)
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

          return callSuper(PY_TYPE(ECOM2), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_ECOM2_getParametersDrivers(t_ECOM2 *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(ECOM2), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_ECOM2_get__parametersDrivers(t_ECOM2 *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTTesseralContext::class$ = NULL;
            jmethodID *DSSTTesseralContext::mids$ = NULL;
            bool DSSTTesseralContext::live$ = false;

            jclass DSSTTesseralContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTTesseralContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAx2oA_9981f74b2d109da6] = env->getMethodID(cls, "getAx2oA", "()D");
                mids$[mid_getBoA_9981f74b2d109da6] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_9981f74b2d109da6] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getChi_9981f74b2d109da6] = env->getMethodID(cls, "getChi", "()D");
                mids$[mid_getChi2_9981f74b2d109da6] = env->getMethodID(cls, "getChi2", "()D");
                mids$[mid_getCo2AB_9981f74b2d109da6] = env->getMethodID(cls, "getCo2AB", "()D");
                mids$[mid_getE2_9981f74b2d109da6] = env->getMethodID(cls, "getE2", "()D");
                mids$[mid_getMeanMotion_9981f74b2d109da6] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMoa_9981f74b2d109da6] = env->getMethodID(cls, "getMoa", "()D");
                mids$[mid_getOoAB_9981f74b2d109da6] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getOrbitPeriod_9981f74b2d109da6] = env->getMethodID(cls, "getOrbitPeriod", "()D");
                mids$[mid_getRatio_9981f74b2d109da6] = env->getMethodID(cls, "getRatio", "()D");
                mids$[mid_getRoa_9981f74b2d109da6] = env->getMethodID(cls, "getRoa", "()D");
                mids$[mid_getTheta_9981f74b2d109da6] = env->getMethodID(cls, "getTheta", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble DSSTTesseralContext::getAx2oA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAx2oA_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getChi() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChi_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getChi2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChi2_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCo2AB_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getE2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE2_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getMoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMoa_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getOrbitPeriod() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOrbitPeriod_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getRatio() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRatio_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getRoa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRoa_9981f74b2d109da6]);
            }

            jdouble DSSTTesseralContext::getTheta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTheta_9981f74b2d109da6]);
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
            static PyObject *t_DSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTTesseralContext_getAx2oA(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getBoA(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getBoABpo(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getChi(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getChi2(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getCo2AB(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getE2(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getMeanMotion(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getMoa(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getOoAB(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getOrbitPeriod(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getRatio(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getRoa(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_getTheta(t_DSSTTesseralContext *self);
            static PyObject *t_DSSTTesseralContext_get__ax2oA(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__boA(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__boABpo(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__chi(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__chi2(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__co2AB(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__e2(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__meanMotion(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__moa(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__ooAB(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__orbitPeriod(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__ratio(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__roa(t_DSSTTesseralContext *self, void *data);
            static PyObject *t_DSSTTesseralContext_get__theta(t_DSSTTesseralContext *self, void *data);
            static PyGetSetDef t_DSSTTesseralContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ax2oA),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, boA),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, chi),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, chi2),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, co2AB),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, e2),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, moa),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, orbitPeriod),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, ratio),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, roa),
              DECLARE_GET_FIELD(t_DSSTTesseralContext, theta),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTTesseralContext__methods_[] = {
              DECLARE_METHOD(t_DSSTTesseralContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseralContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTTesseralContext, getAx2oA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getChi, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getChi2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getE2, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getMoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getOrbitPeriod, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getRatio, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getRoa, METH_NOARGS),
              DECLARE_METHOD(t_DSSTTesseralContext, getTheta, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTTesseralContext)[] = {
              { Py_tp_methods, t_DSSTTesseralContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DSSTTesseralContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTTesseralContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTTesseralContext, t_DSSTTesseralContext, DSSTTesseralContext);

            void t_DSSTTesseralContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTTesseralContext), &PY_TYPE_DEF(DSSTTesseralContext), module, "DSSTTesseralContext", 0);
            }

            void t_DSSTTesseralContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "class_", make_descriptor(DSSTTesseralContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "wrapfn_", make_descriptor(t_DSSTTesseralContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTTesseralContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTTesseralContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTTesseralContext::initializeClass, 1)))
                return NULL;
              return t_DSSTTesseralContext::wrap_Object(DSSTTesseralContext(((t_DSSTTesseralContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTTesseralContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTTesseralContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DSSTTesseralContext_getAx2oA(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAx2oA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getBoA(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getBoABpo(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getChi(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChi());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getChi2(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChi2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getCo2AB(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getE2(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getMeanMotion(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getMoa(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getOoAB(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getOrbitPeriod(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOrbitPeriod());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getRatio(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRatio());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getRoa(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRoa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_getTheta(t_DSSTTesseralContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTheta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTTesseralContext_get__ax2oA(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAx2oA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__boA(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__boABpo(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__chi(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChi());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__chi2(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChi2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__co2AB(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__e2(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE2());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__meanMotion(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__moa(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__ooAB(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__orbitPeriod(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOrbitPeriod());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__ratio(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRatio());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__roa(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRoa());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTTesseralContext_get__theta(t_DSSTTesseralContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTheta());
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
#include "org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *HexadecimalSequenceEncodedMessage::class$ = NULL;
          jmethodID *HexadecimalSequenceEncodedMessage::mids$ = NULL;
          bool HexadecimalSequenceEncodedMessage::live$ = false;

          jclass HexadecimalSequenceEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b81bfb528ebad57a] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
              mids$[mid_start_ff7cb6c242604316] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_d6ab429752e7c267] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HexadecimalSequenceEncodedMessage::HexadecimalSequenceEncodedMessage(const ::java::lang::CharSequence & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_b81bfb528ebad57a, a0.this$)) {}

          void HexadecimalSequenceEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_ff7cb6c242604316]);
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
        namespace parser {
          static PyObject *t_HexadecimalSequenceEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HexadecimalSequenceEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HexadecimalSequenceEncodedMessage_init_(t_HexadecimalSequenceEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HexadecimalSequenceEncodedMessage_start(t_HexadecimalSequenceEncodedMessage *self, PyObject *args);

          static PyMethodDef t_HexadecimalSequenceEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, start, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HexadecimalSequenceEncodedMessage)[] = {
            { Py_tp_methods, t_HexadecimalSequenceEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_HexadecimalSequenceEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HexadecimalSequenceEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(HexadecimalSequenceEncodedMessage, t_HexadecimalSequenceEncodedMessage, HexadecimalSequenceEncodedMessage);

          void t_HexadecimalSequenceEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(HexadecimalSequenceEncodedMessage), &PY_TYPE_DEF(HexadecimalSequenceEncodedMessage), module, "HexadecimalSequenceEncodedMessage", 0);
          }

          void t_HexadecimalSequenceEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "class_", make_descriptor(HexadecimalSequenceEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "wrapfn_", make_descriptor(t_HexadecimalSequenceEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HexadecimalSequenceEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HexadecimalSequenceEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_HexadecimalSequenceEncodedMessage::wrap_Object(HexadecimalSequenceEncodedMessage(((t_HexadecimalSequenceEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_HexadecimalSequenceEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HexadecimalSequenceEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HexadecimalSequenceEncodedMessage_init_(t_HexadecimalSequenceEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::CharSequence a0((jobject) NULL);
            HexadecimalSequenceEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
            {
              INT_CALL(object = HexadecimalSequenceEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HexadecimalSequenceEncodedMessage_start(t_HexadecimalSequenceEncodedMessage *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.start());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(HexadecimalSequenceEncodedMessage), (PyObject *) self, "start", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/EulerFieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EulerFieldIntegratorBuilder::class$ = NULL;
        jmethodID *EulerFieldIntegratorBuilder::mids$ = NULL;
        bool EulerFieldIntegratorBuilder::live$ = false;

        jclass EulerFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EulerFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f63ca9e3185c722e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerFieldIntegratorBuilder::EulerFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        EulerFieldIntegratorBuilder::EulerFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f63ca9e3185c722e, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator EulerFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_EulerFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerFieldIntegratorBuilder_of_(t_EulerFieldIntegratorBuilder *self, PyObject *args);
        static int t_EulerFieldIntegratorBuilder_init_(t_EulerFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerFieldIntegratorBuilder_buildIntegrator(t_EulerFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_EulerFieldIntegratorBuilder_get__parameters_(t_EulerFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_EulerFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_EulerFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EulerFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_EulerFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_EulerFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_EulerFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_EulerFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(EulerFieldIntegratorBuilder, t_EulerFieldIntegratorBuilder, EulerFieldIntegratorBuilder);
        PyObject *t_EulerFieldIntegratorBuilder::wrap_Object(const EulerFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegratorBuilder *self = (t_EulerFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EulerFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EulerFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EulerFieldIntegratorBuilder *self = (t_EulerFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EulerFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerFieldIntegratorBuilder), &PY_TYPE_DEF(EulerFieldIntegratorBuilder), module, "EulerFieldIntegratorBuilder", 0);
        }

        void t_EulerFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "class_", make_descriptor(EulerFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_EulerFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_EulerFieldIntegratorBuilder::wrap_Object(EulerFieldIntegratorBuilder(((t_EulerFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EulerFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EulerFieldIntegratorBuilder_of_(t_EulerFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EulerFieldIntegratorBuilder_init_(t_EulerFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              EulerFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = EulerFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              EulerFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = EulerFieldIntegratorBuilder(a0));
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

        static PyObject *t_EulerFieldIntegratorBuilder_buildIntegrator(t_EulerFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(EulerFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_EulerFieldIntegratorBuilder_get__parameters_(t_EulerFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesPhase::class$ = NULL;
          jmethodID *InterSatellitesPhase::mids$ = NULL;
          bool InterSatellitesPhase::live$ = false;
          ::java::lang::String *InterSatellitesPhase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *InterSatellitesPhase::MEASUREMENT_TYPE = NULL;

          jclass InterSatellitesPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5b8a5193e03c684e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/time/AbsoluteDate;DDDD)V");
              mids$[mid_getAmbiguityDriver_7daccb22665e511b] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_9981f74b2d109da6] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhase::InterSatellitesPhase(const ::org::orekit::estimation::measurements::ObservableSatellite & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_5b8a5193e03c684e, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::utils::ParameterDriver InterSatellitesPhase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_7daccb22665e511b]));
          }

          jdouble InterSatellitesPhase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_9981f74b2d109da6]);
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
          static PyObject *t_InterSatellitesPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhase_of_(t_InterSatellitesPhase *self, PyObject *args);
          static int t_InterSatellitesPhase_init_(t_InterSatellitesPhase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhase_getAmbiguityDriver(t_InterSatellitesPhase *self);
          static PyObject *t_InterSatellitesPhase_getWavelength(t_InterSatellitesPhase *self);
          static PyObject *t_InterSatellitesPhase_get__ambiguityDriver(t_InterSatellitesPhase *self, void *data);
          static PyObject *t_InterSatellitesPhase_get__wavelength(t_InterSatellitesPhase *self, void *data);
          static PyObject *t_InterSatellitesPhase_get__parameters_(t_InterSatellitesPhase *self, void *data);
          static PyGetSetDef t_InterSatellitesPhase__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhase, ambiguityDriver),
            DECLARE_GET_FIELD(t_InterSatellitesPhase, wavelength),
            DECLARE_GET_FIELD(t_InterSatellitesPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhase__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesPhase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_InterSatellitesPhase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhase)[] = {
            { Py_tp_methods, t_InterSatellitesPhase__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhase_init_ },
            { Py_tp_getset, t_InterSatellitesPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhase, t_InterSatellitesPhase, InterSatellitesPhase);
          PyObject *t_InterSatellitesPhase::wrap_Object(const InterSatellitesPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhase *self = (t_InterSatellitesPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhase *self = (t_InterSatellitesPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhase), &PY_TYPE_DEF(InterSatellitesPhase), module, "InterSatellitesPhase", 0);
          }

          void t_InterSatellitesPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "class_", make_descriptor(InterSatellitesPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "wrapfn_", make_descriptor(t_InterSatellitesPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(InterSatellitesPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "AMBIGUITY_NAME", make_descriptor(j2p(*InterSatellitesPhase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "MEASUREMENT_TYPE", make_descriptor(j2p(*InterSatellitesPhase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_InterSatellitesPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhase::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhase::wrap_Object(InterSatellitesPhase(((t_InterSatellitesPhase *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesPhase_of_(t_InterSatellitesPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesPhase_init_(t_InterSatellitesPhase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            InterSatellitesPhase object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDD", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = InterSatellitesPhase(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(InterSatellitesPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhase_getAmbiguityDriver(t_InterSatellitesPhase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_InterSatellitesPhase_getWavelength(t_InterSatellitesPhase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_InterSatellitesPhase_get__parameters_(t_InterSatellitesPhase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_InterSatellitesPhase_get__ambiguityDriver(t_InterSatellitesPhase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_InterSatellitesPhase_get__wavelength(t_InterSatellitesPhase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEclipseDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEclipseDetector::class$ = NULL;
        jmethodID *FieldEclipseDetector::mids$ = NULL;
        bool FieldEclipseDetector::live$ = false;

        jclass FieldEclipseDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEclipseDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0a96eb6a68fe1abe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/OccultationEngine;)V");
            mids$[mid_init$_7b2d1c02d123ea44] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMargin_08d37e3f77b7239d] = env->getMethodID(cls, "getMargin", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOccultationEngine_06e3ea62eb505e97] = env->getMethodID(cls, "getOccultationEngine", "()Lorg/orekit/utils/OccultationEngine;");
            mids$[mid_getTotalEclipse_eee3de00fe971136] = env->getMethodID(cls, "getTotalEclipse", "()Z");
            mids$[mid_withMargin_32cc8af9a8d19fdd] = env->getMethodID(cls, "withMargin", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_withPenumbra_e74bbc9679c66997] = env->getMethodID(cls, "withPenumbra", "()Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_withUmbra_e74bbc9679c66997] = env->getMethodID(cls, "withUmbra", "()Lorg/orekit/propagation/events/FieldEclipseDetector;");
            mids$[mid_create_8c04d329cd9e2ad2] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEclipseDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEclipseDetector::FieldEclipseDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::OccultationEngine & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_0a96eb6a68fe1abe, a0.this$, a1.this$)) {}

        FieldEclipseDetector::FieldEclipseDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, jdouble a2, const ::org::orekit::bodies::OneAxisEllipsoid & a3) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_7b2d1c02d123ea44, a0.this$, a1.this$, a2, a3.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEclipseDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldEclipseDetector::getMargin() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMargin_08d37e3f77b7239d]));
        }

        ::org::orekit::utils::OccultationEngine FieldEclipseDetector::getOccultationEngine() const
        {
          return ::org::orekit::utils::OccultationEngine(env->callObjectMethod(this$, mids$[mid_getOccultationEngine_06e3ea62eb505e97]));
        }

        jboolean FieldEclipseDetector::getTotalEclipse() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getTotalEclipse_eee3de00fe971136]);
        }

        FieldEclipseDetector FieldEclipseDetector::withMargin(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withMargin_32cc8af9a8d19fdd], a0.this$));
        }

        FieldEclipseDetector FieldEclipseDetector::withPenumbra() const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withPenumbra_e74bbc9679c66997]));
        }

        FieldEclipseDetector FieldEclipseDetector::withUmbra() const
        {
          return FieldEclipseDetector(env->callObjectMethod(this$, mids$[mid_withUmbra_e74bbc9679c66997]));
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
        static PyObject *t_FieldEclipseDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_of_(t_FieldEclipseDetector *self, PyObject *args);
        static int t_FieldEclipseDetector_init_(t_FieldEclipseDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEclipseDetector_g(t_FieldEclipseDetector *self, PyObject *args);
        static PyObject *t_FieldEclipseDetector_getMargin(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_getOccultationEngine(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_getTotalEclipse(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_withMargin(t_FieldEclipseDetector *self, PyObject *arg);
        static PyObject *t_FieldEclipseDetector_withPenumbra(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_withUmbra(t_FieldEclipseDetector *self);
        static PyObject *t_FieldEclipseDetector_get__margin(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__occultationEngine(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__totalEclipse(t_FieldEclipseDetector *self, void *data);
        static PyObject *t_FieldEclipseDetector_get__parameters_(t_FieldEclipseDetector *self, void *data);
        static PyGetSetDef t_FieldEclipseDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEclipseDetector, margin),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, occultationEngine),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, totalEclipse),
          DECLARE_GET_FIELD(t_FieldEclipseDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEclipseDetector__methods_[] = {
          DECLARE_METHOD(t_FieldEclipseDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEclipseDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEclipseDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getOccultationEngine, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, getTotalEclipse, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, withMargin, METH_O),
          DECLARE_METHOD(t_FieldEclipseDetector, withPenumbra, METH_NOARGS),
          DECLARE_METHOD(t_FieldEclipseDetector, withUmbra, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEclipseDetector)[] = {
          { Py_tp_methods, t_FieldEclipseDetector__methods_ },
          { Py_tp_init, (void *) t_FieldEclipseDetector_init_ },
          { Py_tp_getset, t_FieldEclipseDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEclipseDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEclipseDetector, t_FieldEclipseDetector, FieldEclipseDetector);
        PyObject *t_FieldEclipseDetector::wrap_Object(const FieldEclipseDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEclipseDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEclipseDetector *self = (t_FieldEclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEclipseDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEclipseDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEclipseDetector *self = (t_FieldEclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEclipseDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEclipseDetector), &PY_TYPE_DEF(FieldEclipseDetector), module, "FieldEclipseDetector", 0);
        }

        void t_FieldEclipseDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "class_", make_descriptor(FieldEclipseDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "wrapfn_", make_descriptor(t_FieldEclipseDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEclipseDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEclipseDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEclipseDetector::initializeClass, 1)))
            return NULL;
          return t_FieldEclipseDetector::wrap_Object(FieldEclipseDetector(((t_FieldEclipseDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldEclipseDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEclipseDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEclipseDetector_of_(t_FieldEclipseDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEclipseDetector_init_(t_FieldEclipseDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::OccultationEngine a1((jobject) NULL);
              FieldEclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::OccultationEngine::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldEclipseDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
              jdouble a2;
              ::org::orekit::bodies::OneAxisEllipsoid a3((jobject) NULL);
              FieldEclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "KkDk", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = FieldEclipseDetector(a0, a1, a2, a3));
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

        static PyObject *t_FieldEclipseDetector_g(t_FieldEclipseDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEclipseDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEclipseDetector_getMargin(t_FieldEclipseDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMargin());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldEclipseDetector_getOccultationEngine(t_FieldEclipseDetector *self)
        {
          ::org::orekit::utils::OccultationEngine result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(result);
        }

        static PyObject *t_FieldEclipseDetector_getTotalEclipse(t_FieldEclipseDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getTotalEclipse());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldEclipseDetector_withMargin(t_FieldEclipseDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldEclipseDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }

        static PyObject *t_FieldEclipseDetector_withPenumbra(t_FieldEclipseDetector *self)
        {
          FieldEclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withPenumbra());
          return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEclipseDetector_withUmbra(t_FieldEclipseDetector *self)
        {
          FieldEclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withUmbra());
          return t_FieldEclipseDetector::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldEclipseDetector_get__parameters_(t_FieldEclipseDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEclipseDetector_get__margin(t_FieldEclipseDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMargin());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldEclipseDetector_get__occultationEngine(t_FieldEclipseDetector *self, void *data)
        {
          ::org::orekit::utils::OccultationEngine value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(value);
        }

        static PyObject *t_FieldEclipseDetector_get__totalEclipse(t_FieldEclipseDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getTotalEclipse());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DoublyIndexedDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$DoublyIndexedDoubleConsumer::mids$ = NULL;
            bool ParseToken$DoublyIndexedDoubleConsumer::live$ = false;

            jclass ParseToken$DoublyIndexedDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DoublyIndexedDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_e98d7b3e971b6087] = env->getMethodID(cls, "accept", "(IID)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DoublyIndexedDoubleConsumer::accept(jint a0, jint a1, jdouble a2) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_e98d7b3e971b6087], a0, a1, a2);
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
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_accept(t_ParseToken$DoublyIndexedDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$DoublyIndexedDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DoublyIndexedDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DoublyIndexedDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DoublyIndexedDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DoublyIndexedDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DoublyIndexedDoubleConsumer, t_ParseToken$DoublyIndexedDoubleConsumer, ParseToken$DoublyIndexedDoubleConsumer);

            void t_ParseToken$DoublyIndexedDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), &PY_TYPE_DEF(ParseToken$DoublyIndexedDoubleConsumer), module, "ParseToken$DoublyIndexedDoubleConsumer", 0);
            }

            void t_ParseToken$DoublyIndexedDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "class_", make_descriptor(ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$DoublyIndexedDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DoublyIndexedDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DoublyIndexedDoubleConsumer::wrap_Object(ParseToken$DoublyIndexedDoubleConsumer(((t_ParseToken$DoublyIndexedDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DoublyIndexedDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DoublyIndexedDoubleConsumer_accept(t_ParseToken$DoublyIndexedDoubleConsumer *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "IID", &a0, &a1, &a2))
              {
                OBJ_CALL(self->object.accept(a0, a1, a2));
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
#include "org/orekit/models/earth/tessellation/ConstantAzimuthAiming.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
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

          ::java::lang::Class *ConstantAzimuthAiming::class$ = NULL;
          jmethodID *ConstantAzimuthAiming::mids$ = NULL;
          bool ConstantAzimuthAiming::live$ = false;

          jclass ConstantAzimuthAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/ConstantAzimuthAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4a8b2a0e42b8245c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
              mids$[mid_alongTileDirection_73bb6a45361007eb] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_d751c1a57012b438] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ConstantAzimuthAiming::ConstantAzimuthAiming(const ::org::orekit::bodies::OneAxisEllipsoid & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4a8b2a0e42b8245c, a0.this$, a1)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ConstantAzimuthAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_73bb6a45361007eb], a0.this$, a1.this$));
          }

          ::java::util::List ConstantAzimuthAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_d751c1a57012b438]));
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
          static PyObject *t_ConstantAzimuthAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ConstantAzimuthAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ConstantAzimuthAiming_init_(t_ConstantAzimuthAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ConstantAzimuthAiming_alongTileDirection(t_ConstantAzimuthAiming *self, PyObject *args);
          static PyObject *t_ConstantAzimuthAiming_getSingularPoints(t_ConstantAzimuthAiming *self);
          static PyObject *t_ConstantAzimuthAiming_get__singularPoints(t_ConstantAzimuthAiming *self, void *data);
          static PyGetSetDef t_ConstantAzimuthAiming__fields_[] = {
            DECLARE_GET_FIELD(t_ConstantAzimuthAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ConstantAzimuthAiming__methods_[] = {
            DECLARE_METHOD(t_ConstantAzimuthAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_ConstantAzimuthAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ConstantAzimuthAiming)[] = {
            { Py_tp_methods, t_ConstantAzimuthAiming__methods_ },
            { Py_tp_init, (void *) t_ConstantAzimuthAiming_init_ },
            { Py_tp_getset, t_ConstantAzimuthAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ConstantAzimuthAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ConstantAzimuthAiming, t_ConstantAzimuthAiming, ConstantAzimuthAiming);

          void t_ConstantAzimuthAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(ConstantAzimuthAiming), &PY_TYPE_DEF(ConstantAzimuthAiming), module, "ConstantAzimuthAiming", 0);
          }

          void t_ConstantAzimuthAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "class_", make_descriptor(ConstantAzimuthAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "wrapfn_", make_descriptor(t_ConstantAzimuthAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantAzimuthAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ConstantAzimuthAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ConstantAzimuthAiming::initializeClass, 1)))
              return NULL;
            return t_ConstantAzimuthAiming::wrap_Object(ConstantAzimuthAiming(((t_ConstantAzimuthAiming *) arg)->object.this$));
          }
          static PyObject *t_ConstantAzimuthAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ConstantAzimuthAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ConstantAzimuthAiming_init_(t_ConstantAzimuthAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            jdouble a1;
            ConstantAzimuthAiming object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ConstantAzimuthAiming(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ConstantAzimuthAiming_alongTileDirection(t_ConstantAzimuthAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_ConstantAzimuthAiming_getSingularPoints(t_ConstantAzimuthAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_ConstantAzimuthAiming_get__singularPoints(t_ConstantAzimuthAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldAdditionalStateProvider::class$ = NULL;
      jmethodID *FieldAdditionalStateProvider::mids$ = NULL;
      bool FieldAdditionalStateProvider::live$ = false;

      jclass FieldAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAdditionalState_d4f2e3295d4ac943] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_yields_712e981f67f3ccbe] = env->getMethodID(cls, "yields", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldAdditionalStateProvider::getAdditionalState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_d4f2e3295d4ac943], a0.this$));
      }

      ::java::lang::String FieldAdditionalStateProvider::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      void FieldAdditionalStateProvider::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
      }

      jboolean FieldAdditionalStateProvider::yields(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yields_712e981f67f3ccbe], a0.this$);
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
      static PyObject *t_FieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_of_(t_FieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_FieldAdditionalStateProvider_getAdditionalState(t_FieldAdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_getName(t_FieldAdditionalStateProvider *self);
      static PyObject *t_FieldAdditionalStateProvider_init(t_FieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_FieldAdditionalStateProvider_yields(t_FieldAdditionalStateProvider *self, PyObject *arg);
      static PyObject *t_FieldAdditionalStateProvider_get__name(t_FieldAdditionalStateProvider *self, void *data);
      static PyObject *t_FieldAdditionalStateProvider_get__parameters_(t_FieldAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_FieldAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAdditionalStateProvider, name),
        DECLARE_GET_FIELD(t_FieldAdditionalStateProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_FieldAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, getAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, getName, METH_NOARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, init, METH_VARARGS),
        DECLARE_METHOD(t_FieldAdditionalStateProvider, yields, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAdditionalStateProvider)[] = {
        { Py_tp_methods, t_FieldAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAdditionalStateProvider, t_FieldAdditionalStateProvider, FieldAdditionalStateProvider);
      PyObject *t_FieldAdditionalStateProvider::wrap_Object(const FieldAdditionalStateProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAdditionalStateProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAdditionalStateProvider *self = (t_FieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAdditionalStateProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAdditionalStateProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAdditionalStateProvider *self = (t_FieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAdditionalStateProvider), &PY_TYPE_DEF(FieldAdditionalStateProvider), module, "FieldAdditionalStateProvider", 0);
      }

      void t_FieldAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "class_", make_descriptor(FieldAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "wrapfn_", make_descriptor(t_FieldAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_FieldAdditionalStateProvider::wrap_Object(FieldAdditionalStateProvider(((t_FieldAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_FieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAdditionalStateProvider_of_(t_FieldAdditionalStateProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldAdditionalStateProvider_getAdditionalState(t_FieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldAdditionalStateProvider_getName(t_FieldAdditionalStateProvider *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_FieldAdditionalStateProvider_init(t_FieldAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_FieldAdditionalStateProvider_yields(t_FieldAdditionalStateProvider *self, PyObject *arg)
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
      static PyObject *t_FieldAdditionalStateProvider_get__parameters_(t_FieldAdditionalStateProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAdditionalStateProvider_get__name(t_FieldAdditionalStateProvider *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Hyperplane::class$ = NULL;
        jmethodID *Hyperplane::mids$ = NULL;
        bool Hyperplane::live$ = false;

        jclass Hyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Hyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copySelf_e081ba7b06e71434] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_emptyHyperplane_24c5633e830ec593] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getOffset_277cb62c4ec87155] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
            mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");
            mids$[mid_project_ff0c84956c63705d] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_sameOrientationAs_51737f919fe0cf72] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
            mids$[mid_wholeHyperplane_24c5633e830ec593] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_wholeSpace_3069dff3a674defc] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/partitioning/Region;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Hyperplane Hyperplane::copySelf() const
        {
          return Hyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_e081ba7b06e71434]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Hyperplane::emptyHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_24c5633e830ec593]));
        }

        jdouble Hyperplane::getOffset(const ::org::hipparchus::geometry::Point & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOffset_277cb62c4ec87155], a0.this$);
        }

        jdouble Hyperplane::getTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
        }

        ::org::hipparchus::geometry::Point Hyperplane::project(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ff0c84956c63705d], a0.this$));
        }

        jboolean Hyperplane::sameOrientationAs(const Hyperplane & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_51737f919fe0cf72], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Hyperplane::wholeHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_24c5633e830ec593]));
        }

        ::org::hipparchus::geometry::partitioning::Region Hyperplane::wholeSpace() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_wholeSpace_3069dff3a674defc]));
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
        static PyObject *t_Hyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Hyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Hyperplane_of_(t_Hyperplane *self, PyObject *args);
        static PyObject *t_Hyperplane_copySelf(t_Hyperplane *self);
        static PyObject *t_Hyperplane_emptyHyperplane(t_Hyperplane *self);
        static PyObject *t_Hyperplane_getOffset(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_getTolerance(t_Hyperplane *self);
        static PyObject *t_Hyperplane_project(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_sameOrientationAs(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_wholeHyperplane(t_Hyperplane *self);
        static PyObject *t_Hyperplane_wholeSpace(t_Hyperplane *self);
        static PyObject *t_Hyperplane_get__tolerance(t_Hyperplane *self, void *data);
        static PyObject *t_Hyperplane_get__parameters_(t_Hyperplane *self, void *data);
        static PyGetSetDef t_Hyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_Hyperplane, tolerance),
          DECLARE_GET_FIELD(t_Hyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Hyperplane__methods_[] = {
          DECLARE_METHOD(t_Hyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Hyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Hyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_Hyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, emptyHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, getOffset, METH_O),
          DECLARE_METHOD(t_Hyperplane, getTolerance, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, project, METH_O),
          DECLARE_METHOD(t_Hyperplane, sameOrientationAs, METH_O),
          DECLARE_METHOD(t_Hyperplane, wholeHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, wholeSpace, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Hyperplane)[] = {
          { Py_tp_methods, t_Hyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Hyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Hyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Hyperplane, t_Hyperplane, Hyperplane);
        PyObject *t_Hyperplane::wrap_Object(const Hyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Hyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Hyperplane *self = (t_Hyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Hyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Hyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Hyperplane *self = (t_Hyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Hyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(Hyperplane), &PY_TYPE_DEF(Hyperplane), module, "Hyperplane", 0);
        }

        void t_Hyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "class_", make_descriptor(Hyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "wrapfn_", make_descriptor(t_Hyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Hyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Hyperplane::initializeClass, 1)))
            return NULL;
          return t_Hyperplane::wrap_Object(Hyperplane(((t_Hyperplane *) arg)->object.this$));
        }
        static PyObject *t_Hyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Hyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Hyperplane_of_(t_Hyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Hyperplane_copySelf(t_Hyperplane *self)
        {
          Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_emptyHyperplane(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.emptyHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_getOffset(t_Hyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.getOffset(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOffset", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_getTolerance(t_Hyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Hyperplane_project(t_Hyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.project(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "project", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_sameOrientationAs(t_Hyperplane *self, PyObject *arg)
        {
          Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", Hyperplane::initializeClass, &a0, &p0, t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.sameOrientationAs(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_wholeHyperplane(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.wholeHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_wholeSpace(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.wholeSpace());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_Hyperplane_get__parameters_(t_Hyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Hyperplane_get__tolerance(t_Hyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTolerance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeInterpolator::class$ = NULL;
      jmethodID *TimeInterpolator::mids$ = NULL;
      bool TimeInterpolator::live$ = false;

      jclass TimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getExtrapolationThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_d6ab429752e7c267] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_d751c1a57012b438] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_96cdbf28d116a6bf] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_12f5cef05abb91a8] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_9981f74b2d109da6]);
      }

      jint TimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_d6ab429752e7c267]);
      }

      ::java::util::List TimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_d751c1a57012b438]));
      }

      ::org::orekit::time::TimeStamped TimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_96cdbf28d116a6bf], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeStamped TimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_12f5cef05abb91a8], a0.this$, a1.this$));
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
      static PyObject *t_TimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeInterpolator_of_(t_TimeInterpolator *self, PyObject *args);
      static PyObject *t_TimeInterpolator_getExtrapolationThreshold(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_getNbInterpolationPoints(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_getSubInterpolators(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_interpolate(t_TimeInterpolator *self, PyObject *args);
      static PyObject *t_TimeInterpolator_get__extrapolationThreshold(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__nbInterpolationPoints(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__subInterpolators(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__parameters_(t_TimeInterpolator *self, void *data);
      static PyGetSetDef t_TimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_TimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_TimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_TimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeInterpolator)[] = {
        { Py_tp_methods, t_TimeInterpolator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeInterpolator, t_TimeInterpolator, TimeInterpolator);
      PyObject *t_TimeInterpolator::wrap_Object(const TimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeInterpolator *self = (t_TimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeInterpolator *self = (t_TimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeInterpolator), &PY_TYPE_DEF(TimeInterpolator), module, "TimeInterpolator", 0);
      }

      void t_TimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "class_", make_descriptor(TimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "wrapfn_", make_descriptor(t_TimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeInterpolator::wrap_Object(TimeInterpolator(((t_TimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeInterpolator_of_(t_TimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeInterpolator_getExtrapolationThreshold(t_TimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeInterpolator_getNbInterpolationPoints(t_TimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeInterpolator_getSubInterpolators(t_TimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_TimeInterpolator_interpolate(t_TimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_TimeInterpolator_get__parameters_(t_TimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeInterpolator_get__extrapolationThreshold(t_TimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeInterpolator_get__nbInterpolationPoints(t_TimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeInterpolator_get__subInterpolators(t_TimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/RinexFile.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "org/orekit/files/rinex/section/RinexBaseHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *RinexFile::class$ = NULL;
        jmethodID *RinexFile::mids$ = NULL;
        bool RinexFile::live$ = false;

        jclass RinexFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/RinexFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addComment_4025351edffeacb1] = env->getMethodID(cls, "addComment", "(Lorg/orekit/files/rinex/section/RinexComment;)V");
            mids$[mid_getComments_d751c1a57012b438] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getHeader_006d72cea1374eb7] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/rinex/section/RinexBaseHeader;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void RinexFile::addComment(const ::org::orekit::files::rinex::section::RinexComment & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addComment_4025351edffeacb1], a0.this$);
        }

        ::java::util::List RinexFile::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_d751c1a57012b438]));
        }

        ::org::orekit::files::rinex::section::RinexBaseHeader RinexFile::getHeader() const
        {
          return ::org::orekit::files::rinex::section::RinexBaseHeader(env->callObjectMethod(this$, mids$[mid_getHeader_006d72cea1374eb7]));
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
        static PyObject *t_RinexFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RinexFile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RinexFile_of_(t_RinexFile *self, PyObject *args);
        static PyObject *t_RinexFile_addComment(t_RinexFile *self, PyObject *arg);
        static PyObject *t_RinexFile_getComments(t_RinexFile *self);
        static PyObject *t_RinexFile_getHeader(t_RinexFile *self);
        static PyObject *t_RinexFile_get__comments(t_RinexFile *self, void *data);
        static PyObject *t_RinexFile_get__header(t_RinexFile *self, void *data);
        static PyObject *t_RinexFile_get__parameters_(t_RinexFile *self, void *data);
        static PyGetSetDef t_RinexFile__fields_[] = {
          DECLARE_GET_FIELD(t_RinexFile, comments),
          DECLARE_GET_FIELD(t_RinexFile, header),
          DECLARE_GET_FIELD(t_RinexFile, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RinexFile__methods_[] = {
          DECLARE_METHOD(t_RinexFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RinexFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RinexFile, of_, METH_VARARGS),
          DECLARE_METHOD(t_RinexFile, addComment, METH_O),
          DECLARE_METHOD(t_RinexFile, getComments, METH_NOARGS),
          DECLARE_METHOD(t_RinexFile, getHeader, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RinexFile)[] = {
          { Py_tp_methods, t_RinexFile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RinexFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RinexFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RinexFile, t_RinexFile, RinexFile);
        PyObject *t_RinexFile::wrap_Object(const RinexFile& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RinexFile::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RinexFile *self = (t_RinexFile *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RinexFile::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RinexFile::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RinexFile *self = (t_RinexFile *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RinexFile::install(PyObject *module)
        {
          installType(&PY_TYPE(RinexFile), &PY_TYPE_DEF(RinexFile), module, "RinexFile", 0);
        }

        void t_RinexFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "class_", make_descriptor(RinexFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "wrapfn_", make_descriptor(t_RinexFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RinexFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RinexFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RinexFile::initializeClass, 1)))
            return NULL;
          return t_RinexFile::wrap_Object(RinexFile(((t_RinexFile *) arg)->object.this$));
        }
        static PyObject *t_RinexFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RinexFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RinexFile_of_(t_RinexFile *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_RinexFile_addComment(t_RinexFile *self, PyObject *arg)
        {
          ::org::orekit::files::rinex::section::RinexComment a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::rinex::section::RinexComment::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addComment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addComment", arg);
          return NULL;
        }

        static PyObject *t_RinexFile_getComments(t_RinexFile *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::section::PY_TYPE(RinexComment));
        }

        static PyObject *t_RinexFile_getHeader(t_RinexFile *self)
        {
          ::org::orekit::files::rinex::section::RinexBaseHeader result((jobject) NULL);
          OBJ_CALL(result = self->object.getHeader());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::rinex::section::t_RinexBaseHeader::wrap_Object(result);
        }
        static PyObject *t_RinexFile_get__parameters_(t_RinexFile *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_RinexFile_get__comments(t_RinexFile *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RinexFile_get__header(t_RinexFile *self, void *data)
        {
          ::org::orekit::files::rinex::section::RinexBaseHeader value((jobject) NULL);
          OBJ_CALL(value = self->object.getHeader());
          return ::org::orekit::files::rinex::section::t_RinexBaseHeader::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4B.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4B::class$ = NULL;
          jmethodID *SubFrame4B::mids$ = NULL;
          bool SubFrame4B::live$ = false;

          jclass SubFrame4B::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4B");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReserved03_d6ab429752e7c267] = env->getMethodID(cls, "getReserved03", "()I");
              mids$[mid_getReserved04_d6ab429752e7c267] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_d6ab429752e7c267] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_d6ab429752e7c267] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_d6ab429752e7c267] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getReserved08_d6ab429752e7c267] = env->getMethodID(cls, "getReserved08", "()I");
              mids$[mid_getReserved09_d6ab429752e7c267] = env->getMethodID(cls, "getReserved09", "()I");
              mids$[mid_getReserved10_d6ab429752e7c267] = env->getMethodID(cls, "getReserved10", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4B::getReserved03() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved03_d6ab429752e7c267]);
          }

          jint SubFrame4B::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_d6ab429752e7c267]);
          }

          jint SubFrame4B::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_d6ab429752e7c267]);
          }

          jint SubFrame4B::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_d6ab429752e7c267]);
          }

          jint SubFrame4B::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_d6ab429752e7c267]);
          }

          jint SubFrame4B::getReserved08() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved08_d6ab429752e7c267]);
          }

          jint SubFrame4B::getReserved09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved09_d6ab429752e7c267]);
          }

          jint SubFrame4B::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_d6ab429752e7c267]);
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
          static PyObject *t_SubFrame4B_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4B_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4B_getReserved03(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved04(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved05(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved06(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved07(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved08(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved09(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved10(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_get__reserved03(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved04(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved05(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved06(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved07(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved08(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved09(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved10(t_SubFrame4B *self, void *data);
          static PyGetSetDef t_SubFrame4B__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4B, reserved03),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved04),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved05),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved06),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved07),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved08),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved09),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved10),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4B__methods_[] = {
            DECLARE_METHOD(t_SubFrame4B, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4B, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4B, getReserved03, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved08, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved09, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved10, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4B)[] = {
            { Py_tp_methods, t_SubFrame4B__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4B__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4B)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4B, t_SubFrame4B, SubFrame4B);

          void t_SubFrame4B::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4B), &PY_TYPE_DEF(SubFrame4B), module, "SubFrame4B", 0);
          }

          void t_SubFrame4B::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "class_", make_descriptor(SubFrame4B::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "wrapfn_", make_descriptor(t_SubFrame4B::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4B_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4B::initializeClass, 1)))
              return NULL;
            return t_SubFrame4B::wrap_Object(SubFrame4B(((t_SubFrame4B *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4B_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4B::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4B_getReserved03(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved03());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved04(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved05(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved06(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved07(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved08(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved08());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved09(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved10(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_get__reserved03(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved03());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved04(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved05(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved06(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved07(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved08(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved08());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved09(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved09());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved10(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
