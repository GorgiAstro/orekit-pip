#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldEphemerisGenerator::class$ = NULL;
      jmethodID *FieldEphemerisGenerator::mids$ = NULL;
      bool FieldEphemerisGenerator::live$ = false;

      jclass FieldEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getGeneratedEphemeris_5671a4f762a73711] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::propagation::FieldBoundedPropagator FieldEphemerisGenerator::getGeneratedEphemeris() const
      {
        return ::org::orekit::propagation::FieldBoundedPropagator(env->callObjectMethod(this$, mids$[mid_getGeneratedEphemeris_5671a4f762a73711]));
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
      static PyObject *t_FieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEphemerisGenerator_of_(t_FieldEphemerisGenerator *self, PyObject *args);
      static PyObject *t_FieldEphemerisGenerator_getGeneratedEphemeris(t_FieldEphemerisGenerator *self);
      static PyObject *t_FieldEphemerisGenerator_get__generatedEphemeris(t_FieldEphemerisGenerator *self, void *data);
      static PyObject *t_FieldEphemerisGenerator_get__parameters_(t_FieldEphemerisGenerator *self, void *data);
      static PyGetSetDef t_FieldEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEphemerisGenerator, generatedEphemeris),
        DECLARE_GET_FIELD(t_FieldEphemerisGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_FieldEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, getGeneratedEphemeris, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEphemerisGenerator)[] = {
        { Py_tp_methods, t_FieldEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEphemerisGenerator, t_FieldEphemerisGenerator, FieldEphemerisGenerator);
      PyObject *t_FieldEphemerisGenerator::wrap_Object(const FieldEphemerisGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEphemerisGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEphemerisGenerator *self = (t_FieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEphemerisGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEphemerisGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEphemerisGenerator *self = (t_FieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEphemerisGenerator), &PY_TYPE_DEF(FieldEphemerisGenerator), module, "FieldEphemerisGenerator", 0);
      }

      void t_FieldEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "class_", make_descriptor(FieldEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "wrapfn_", make_descriptor(t_FieldEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_FieldEphemerisGenerator::wrap_Object(FieldEphemerisGenerator(((t_FieldEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_FieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEphemerisGenerator_of_(t_FieldEphemerisGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldEphemerisGenerator_getGeneratedEphemeris(t_FieldEphemerisGenerator *self)
      {
        ::org::orekit::propagation::FieldBoundedPropagator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_FieldBoundedPropagator::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldEphemerisGenerator_get__parameters_(t_FieldEphemerisGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEphemerisGenerator_get__generatedEphemeris(t_FieldEphemerisGenerator *self, void *data)
      {
        ::org::orekit::propagation::FieldBoundedPropagator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_FieldBoundedPropagator::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *ForceModel::class$ = NULL;
      jmethodID *ForceModel::mids$ = NULL;
      bool ForceModel::live$ = false;

      jclass ForceModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/ForceModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_addContribution_0f28031d74393af0] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
          mids$[mid_addContribution_9ecc165cc3358de0] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
          mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
          mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
          mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
          mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D ForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
      }

      void ForceModel::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addContribution_0f28031d74393af0], a0.this$, a1.this$);
      }

      void ForceModel::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addContribution_9ecc165cc3358de0], a0.this$, a1.this$);
      }

      jboolean ForceModel::dependsOnPositionOnly() const
      {
        return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
      }

      ::java::util::stream::Stream ForceModel::getEventDetectors() const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
      }

      ::java::util::stream::Stream ForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
      }

      void ForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
      }

      void ForceModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
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
      static PyObject *t_ForceModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForceModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForceModel_acceleration(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_addContribution(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_dependsOnPositionOnly(t_ForceModel *self);
      static PyObject *t_ForceModel_getEventDetectors(t_ForceModel *self);
      static PyObject *t_ForceModel_getFieldEventDetectors(t_ForceModel *self, PyObject *arg);
      static PyObject *t_ForceModel_init(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_get__eventDetectors(t_ForceModel *self, void *data);
      static PyGetSetDef t_ForceModel__fields_[] = {
        DECLARE_GET_FIELD(t_ForceModel, eventDetectors),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ForceModel__methods_[] = {
        DECLARE_METHOD(t_ForceModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForceModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForceModel, acceleration, METH_VARARGS),
        DECLARE_METHOD(t_ForceModel, addContribution, METH_VARARGS),
        DECLARE_METHOD(t_ForceModel, dependsOnPositionOnly, METH_NOARGS),
        DECLARE_METHOD(t_ForceModel, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ForceModel, getFieldEventDetectors, METH_O),
        DECLARE_METHOD(t_ForceModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ForceModel)[] = {
        { Py_tp_methods, t_ForceModel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ForceModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ForceModel)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
        NULL
      };

      DEFINE_TYPE(ForceModel, t_ForceModel, ForceModel);

      void t_ForceModel::install(PyObject *module)
      {
        installType(&PY_TYPE(ForceModel), &PY_TYPE_DEF(ForceModel), module, "ForceModel", 0);
      }

      void t_ForceModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "class_", make_descriptor(ForceModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "wrapfn_", make_descriptor(t_ForceModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ForceModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ForceModel::initializeClass, 1)))
          return NULL;
        return t_ForceModel::wrap_Object(ForceModel(((t_ForceModel *) arg)->object.this$));
      }
      static PyObject *t_ForceModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ForceModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ForceModel_acceleration(t_ForceModel *self, PyObject *args)
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

      static PyObject *t_ForceModel_addContribution(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
            {
              OBJ_CALL(self->object.addContribution(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addContribution(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addContribution", args);
        return NULL;
      }

      static PyObject *t_ForceModel_dependsOnPositionOnly(t_ForceModel *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.dependsOnPositionOnly());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ForceModel_getEventDetectors(t_ForceModel *self)
      {
        ::java::util::stream::Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
      }

      static PyObject *t_ForceModel_getFieldEventDetectors(t_ForceModel *self, PyObject *arg)
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

      static PyObject *t_ForceModel_init(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
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
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ForceModel_get__eventDetectors(t_ForceModel *self, void *data)
      {
        ::java::util::stream::Stream value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::stream::t_Stream::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/EnumeratedDistribution.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "java/lang/Double.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *EnumeratedDistribution::class$ = NULL;
      jmethodID *EnumeratedDistribution::mids$ = NULL;
      bool EnumeratedDistribution::live$ = false;

      jclass EnumeratedDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/EnumeratedDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_checkAndNormalize_1db7c087750eaffe] = env->getStaticMethodID(cls, "checkAndNormalize", "([D)[D");
          mids$[mid_getPmf_0d9551367f7ecdef] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
          mids$[mid_probability_30d4f3cd987878bc] = env->getMethodID(cls, "probability", "(Ljava/lang/Object;)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EnumeratedDistribution::EnumeratedDistribution(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

      JArray< jdouble > EnumeratedDistribution::checkAndNormalize(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_checkAndNormalize_1db7c087750eaffe], a0.this$));
      }

      ::java::util::List EnumeratedDistribution::getPmf() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_0d9551367f7ecdef]));
      }

      jdouble EnumeratedDistribution::probability(const ::java::lang::Object & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_30d4f3cd987878bc], a0.this$);
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
      static PyObject *t_EnumeratedDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_of_(t_EnumeratedDistribution *self, PyObject *args);
      static int t_EnumeratedDistribution_init_(t_EnumeratedDistribution *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EnumeratedDistribution_checkAndNormalize(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_getPmf(t_EnumeratedDistribution *self);
      static PyObject *t_EnumeratedDistribution_probability(t_EnumeratedDistribution *self, PyObject *arg);
      static PyObject *t_EnumeratedDistribution_get__pmf(t_EnumeratedDistribution *self, void *data);
      static PyObject *t_EnumeratedDistribution_get__parameters_(t_EnumeratedDistribution *self, void *data);
      static PyGetSetDef t_EnumeratedDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_EnumeratedDistribution, pmf),
        DECLARE_GET_FIELD(t_EnumeratedDistribution, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EnumeratedDistribution__methods_[] = {
        DECLARE_METHOD(t_EnumeratedDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, of_, METH_VARARGS),
        DECLARE_METHOD(t_EnumeratedDistribution, checkAndNormalize, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EnumeratedDistribution, getPmf, METH_NOARGS),
        DECLARE_METHOD(t_EnumeratedDistribution, probability, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EnumeratedDistribution)[] = {
        { Py_tp_methods, t_EnumeratedDistribution__methods_ },
        { Py_tp_init, (void *) t_EnumeratedDistribution_init_ },
        { Py_tp_getset, t_EnumeratedDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EnumeratedDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EnumeratedDistribution, t_EnumeratedDistribution, EnumeratedDistribution);
      PyObject *t_EnumeratedDistribution::wrap_Object(const EnumeratedDistribution& object, PyTypeObject *p0)
      {
        PyObject *obj = t_EnumeratedDistribution::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_EnumeratedDistribution *self = (t_EnumeratedDistribution *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_EnumeratedDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_EnumeratedDistribution::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_EnumeratedDistribution *self = (t_EnumeratedDistribution *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_EnumeratedDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(EnumeratedDistribution), &PY_TYPE_DEF(EnumeratedDistribution), module, "EnumeratedDistribution", 0);
      }

      void t_EnumeratedDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "class_", make_descriptor(EnumeratedDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "wrapfn_", make_descriptor(t_EnumeratedDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EnumeratedDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EnumeratedDistribution::initializeClass, 1)))
          return NULL;
        return t_EnumeratedDistribution::wrap_Object(EnumeratedDistribution(((t_EnumeratedDistribution *) arg)->object.this$));
      }
      static PyObject *t_EnumeratedDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EnumeratedDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EnumeratedDistribution_of_(t_EnumeratedDistribution *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_EnumeratedDistribution_init_(t_EnumeratedDistribution *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        EnumeratedDistribution object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = EnumeratedDistribution(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EnumeratedDistribution_checkAndNormalize(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::distribution::EnumeratedDistribution::checkAndNormalize(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "checkAndNormalize", arg);
        return NULL;
      }

      static PyObject *t_EnumeratedDistribution_getPmf(t_EnumeratedDistribution *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPmf());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_EnumeratedDistribution_probability(t_EnumeratedDistribution *self, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "O", self->parameters[0], &a0))
        {
          OBJ_CALL(result = self->object.probability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "probability", arg);
        return NULL;
      }
      static PyObject *t_EnumeratedDistribution_get__parameters_(t_EnumeratedDistribution *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_EnumeratedDistribution_get__pmf(t_EnumeratedDistribution *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPmf());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmTle.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmTle::class$ = NULL;
              jmethodID *OmmTle::mids$ = NULL;
              bool OmmTle::live$ = false;
              jint OmmTle::EPHEMERIS_TYPE_PPT3 = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP4 = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SGP4_XP = (jint) 0;
              jint OmmTle::EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS = (jint) 0;

              jclass OmmTle::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmTle");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAGoM_557b8123390d8d0c] = env->getMethodID(cls, "getAGoM", "()D");
                  mids$[mid_getBStar_557b8123390d8d0c] = env->getMethodID(cls, "getBStar", "()D");
                  mids$[mid_getBTerm_557b8123390d8d0c] = env->getMethodID(cls, "getBTerm", "()D");
                  mids$[mid_getClassificationType_d156d1ce330f6993] = env->getMethodID(cls, "getClassificationType", "()C");
                  mids$[mid_getElementSetNumber_412668abc8d889e9] = env->getMethodID(cls, "getElementSetNumber", "()I");
                  mids$[mid_getEphemerisType_412668abc8d889e9] = env->getMethodID(cls, "getEphemerisType", "()I");
                  mids$[mid_getMeanMotionDot_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotionDot", "()D");
                  mids$[mid_getMeanMotionDotDot_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotionDotDot", "()D");
                  mids$[mid_getNoradID_412668abc8d889e9] = env->getMethodID(cls, "getNoradID", "()I");
                  mids$[mid_getRevAtEpoch_412668abc8d889e9] = env->getMethodID(cls, "getRevAtEpoch", "()I");
                  mids$[mid_setAGoM_10f281d777284cea] = env->getMethodID(cls, "setAGoM", "(D)V");
                  mids$[mid_setBStar_10f281d777284cea] = env->getMethodID(cls, "setBStar", "(D)V");
                  mids$[mid_setBTerm_10f281d777284cea] = env->getMethodID(cls, "setBTerm", "(D)V");
                  mids$[mid_setClassificationType_102587d250c3217b] = env->getMethodID(cls, "setClassificationType", "(C)V");
                  mids$[mid_setElementSetNo_a3da1a935cb37f7b] = env->getMethodID(cls, "setElementSetNo", "(I)V");
                  mids$[mid_setEphemerisType_a3da1a935cb37f7b] = env->getMethodID(cls, "setEphemerisType", "(I)V");
                  mids$[mid_setMeanMotionDot_10f281d777284cea] = env->getMethodID(cls, "setMeanMotionDot", "(D)V");
                  mids$[mid_setMeanMotionDotDot_10f281d777284cea] = env->getMethodID(cls, "setMeanMotionDotDot", "(D)V");
                  mids$[mid_setNoradID_a3da1a935cb37f7b] = env->getMethodID(cls, "setNoradID", "(I)V");
                  mids$[mid_setRevAtEpoch_a3da1a935cb37f7b] = env->getMethodID(cls, "setRevAtEpoch", "(I)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  EPHEMERIS_TYPE_PPT3 = env->getStaticIntField(cls, "EPHEMERIS_TYPE_PPT3");
                  EPHEMERIS_TYPE_SGP = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP");
                  EPHEMERIS_TYPE_SGP4 = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP4");
                  EPHEMERIS_TYPE_SGP4_XP = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SGP4_XP");
                  EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS = env->getStaticIntField(cls, "EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmTle::OmmTle() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jdouble OmmTle::getAGoM() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAGoM_557b8123390d8d0c]);
              }

              jdouble OmmTle::getBStar() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBStar_557b8123390d8d0c]);
              }

              jdouble OmmTle::getBTerm() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getBTerm_557b8123390d8d0c]);
              }

              jchar OmmTle::getClassificationType() const
              {
                return env->callCharMethod(this$, mids$[mid_getClassificationType_d156d1ce330f6993]);
              }

              jint OmmTle::getElementSetNumber() const
              {
                return env->callIntMethod(this$, mids$[mid_getElementSetNumber_412668abc8d889e9]);
              }

              jint OmmTle::getEphemerisType() const
              {
                return env->callIntMethod(this$, mids$[mid_getEphemerisType_412668abc8d889e9]);
              }

              jdouble OmmTle::getMeanMotionDot() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMeanMotionDot_557b8123390d8d0c]);
              }

              jdouble OmmTle::getMeanMotionDotDot() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMeanMotionDotDot_557b8123390d8d0c]);
              }

              jint OmmTle::getNoradID() const
              {
                return env->callIntMethod(this$, mids$[mid_getNoradID_412668abc8d889e9]);
              }

              jint OmmTle::getRevAtEpoch() const
              {
                return env->callIntMethod(this$, mids$[mid_getRevAtEpoch_412668abc8d889e9]);
              }

              void OmmTle::setAGoM(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAGoM_10f281d777284cea], a0);
              }

              void OmmTle::setBStar(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBStar_10f281d777284cea], a0);
              }

              void OmmTle::setBTerm(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBTerm_10f281d777284cea], a0);
              }

              void OmmTle::setClassificationType(jchar a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClassificationType_102587d250c3217b], a0);
              }

              void OmmTle::setElementSetNo(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setElementSetNo_a3da1a935cb37f7b], a0);
              }

              void OmmTle::setEphemerisType(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEphemerisType_a3da1a935cb37f7b], a0);
              }

              void OmmTle::setMeanMotionDot(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanMotionDot_10f281d777284cea], a0);
              }

              void OmmTle::setMeanMotionDotDot(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanMotionDotDot_10f281d777284cea], a0);
              }

              void OmmTle::setNoradID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNoradID_a3da1a935cb37f7b], a0);
              }

              void OmmTle::setRevAtEpoch(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRevAtEpoch_a3da1a935cb37f7b], a0);
              }

              void OmmTle::validate(jdouble a0) const
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
          namespace odm {
            namespace omm {
              static PyObject *t_OmmTle_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmTle_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmTle_init_(t_OmmTle *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmTle_getAGoM(t_OmmTle *self);
              static PyObject *t_OmmTle_getBStar(t_OmmTle *self);
              static PyObject *t_OmmTle_getBTerm(t_OmmTle *self);
              static PyObject *t_OmmTle_getClassificationType(t_OmmTle *self);
              static PyObject *t_OmmTle_getElementSetNumber(t_OmmTle *self);
              static PyObject *t_OmmTle_getEphemerisType(t_OmmTle *self);
              static PyObject *t_OmmTle_getMeanMotionDot(t_OmmTle *self);
              static PyObject *t_OmmTle_getMeanMotionDotDot(t_OmmTle *self);
              static PyObject *t_OmmTle_getNoradID(t_OmmTle *self);
              static PyObject *t_OmmTle_getRevAtEpoch(t_OmmTle *self);
              static PyObject *t_OmmTle_setAGoM(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setBStar(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setBTerm(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setClassificationType(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setElementSetNo(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setEphemerisType(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setMeanMotionDot(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setMeanMotionDotDot(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setNoradID(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_setRevAtEpoch(t_OmmTle *self, PyObject *arg);
              static PyObject *t_OmmTle_validate(t_OmmTle *self, PyObject *args);
              static PyObject *t_OmmTle_get__aGoM(t_OmmTle *self, void *data);
              static int t_OmmTle_set__aGoM(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__bStar(t_OmmTle *self, void *data);
              static int t_OmmTle_set__bStar(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__bTerm(t_OmmTle *self, void *data);
              static int t_OmmTle_set__bTerm(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__classificationType(t_OmmTle *self, void *data);
              static int t_OmmTle_set__classificationType(t_OmmTle *self, PyObject *arg, void *data);
              static int t_OmmTle_set__elementSetNo(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__elementSetNumber(t_OmmTle *self, void *data);
              static PyObject *t_OmmTle_get__ephemerisType(t_OmmTle *self, void *data);
              static int t_OmmTle_set__ephemerisType(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__meanMotionDot(t_OmmTle *self, void *data);
              static int t_OmmTle_set__meanMotionDot(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__meanMotionDotDot(t_OmmTle *self, void *data);
              static int t_OmmTle_set__meanMotionDotDot(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__noradID(t_OmmTle *self, void *data);
              static int t_OmmTle_set__noradID(t_OmmTle *self, PyObject *arg, void *data);
              static PyObject *t_OmmTle_get__revAtEpoch(t_OmmTle *self, void *data);
              static int t_OmmTle_set__revAtEpoch(t_OmmTle *self, PyObject *arg, void *data);
              static PyGetSetDef t_OmmTle__fields_[] = {
                DECLARE_GETSET_FIELD(t_OmmTle, aGoM),
                DECLARE_GETSET_FIELD(t_OmmTle, bStar),
                DECLARE_GETSET_FIELD(t_OmmTle, bTerm),
                DECLARE_GETSET_FIELD(t_OmmTle, classificationType),
                DECLARE_SET_FIELD(t_OmmTle, elementSetNo),
                DECLARE_GET_FIELD(t_OmmTle, elementSetNumber),
                DECLARE_GETSET_FIELD(t_OmmTle, ephemerisType),
                DECLARE_GETSET_FIELD(t_OmmTle, meanMotionDot),
                DECLARE_GETSET_FIELD(t_OmmTle, meanMotionDotDot),
                DECLARE_GETSET_FIELD(t_OmmTle, noradID),
                DECLARE_GETSET_FIELD(t_OmmTle, revAtEpoch),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmTle__methods_[] = {
                DECLARE_METHOD(t_OmmTle, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTle, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmTle, getAGoM, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getBStar, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getBTerm, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getClassificationType, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getElementSetNumber, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getEphemerisType, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getMeanMotionDot, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getMeanMotionDotDot, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getNoradID, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, getRevAtEpoch, METH_NOARGS),
                DECLARE_METHOD(t_OmmTle, setAGoM, METH_O),
                DECLARE_METHOD(t_OmmTle, setBStar, METH_O),
                DECLARE_METHOD(t_OmmTle, setBTerm, METH_O),
                DECLARE_METHOD(t_OmmTle, setClassificationType, METH_O),
                DECLARE_METHOD(t_OmmTle, setElementSetNo, METH_O),
                DECLARE_METHOD(t_OmmTle, setEphemerisType, METH_O),
                DECLARE_METHOD(t_OmmTle, setMeanMotionDot, METH_O),
                DECLARE_METHOD(t_OmmTle, setMeanMotionDotDot, METH_O),
                DECLARE_METHOD(t_OmmTle, setNoradID, METH_O),
                DECLARE_METHOD(t_OmmTle, setRevAtEpoch, METH_O),
                DECLARE_METHOD(t_OmmTle, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmTle)[] = {
                { Py_tp_methods, t_OmmTle__methods_ },
                { Py_tp_init, (void *) t_OmmTle_init_ },
                { Py_tp_getset, t_OmmTle__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmTle)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(OmmTle, t_OmmTle, OmmTle);

              void t_OmmTle::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmTle), &PY_TYPE_DEF(OmmTle), module, "OmmTle", 0);
              }

              void t_OmmTle::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "class_", make_descriptor(OmmTle::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "wrapfn_", make_descriptor(t_OmmTle::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmTle::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_PPT3", make_descriptor(OmmTle::EPHEMERIS_TYPE_PPT3));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP4", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP4));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SGP4_XP", make_descriptor(OmmTle::EPHEMERIS_TYPE_SGP4_XP));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmTle), "EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS", make_descriptor(OmmTle::EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS));
              }

              static PyObject *t_OmmTle_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmTle::initializeClass, 1)))
                  return NULL;
                return t_OmmTle::wrap_Object(OmmTle(((t_OmmTle *) arg)->object.this$));
              }
              static PyObject *t_OmmTle_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmTle::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmTle_init_(t_OmmTle *self, PyObject *args, PyObject *kwds)
              {
                OmmTle object((jobject) NULL);

                INT_CALL(object = OmmTle());
                self->object = object;

                return 0;
              }

              static PyObject *t_OmmTle_getAGoM(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAGoM());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getBStar(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBStar());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getBTerm(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBTerm());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getClassificationType(t_OmmTle *self)
              {
                jchar result;
                OBJ_CALL(result = self->object.getClassificationType());
                return c2p(result);
              }

              static PyObject *t_OmmTle_getElementSetNumber(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getElementSetNumber());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getEphemerisType(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getEphemerisType());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getMeanMotionDot(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMeanMotionDot());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getMeanMotionDotDot(t_OmmTle *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMeanMotionDotDot());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OmmTle_getNoradID(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNoradID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_getRevAtEpoch(t_OmmTle *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getRevAtEpoch());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_OmmTle_setAGoM(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAGoM(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAGoM", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setBStar(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBStar(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBStar", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setBTerm(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setBTerm(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBTerm", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setClassificationType(t_OmmTle *self, PyObject *arg)
              {
                jchar a0;

                if (!parseArg(arg, "C", &a0))
                {
                  OBJ_CALL(self->object.setClassificationType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClassificationType", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setElementSetNo(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setElementSetNo(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setElementSetNo", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setEphemerisType(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setEphemerisType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEphemerisType", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setMeanMotionDot(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMeanMotionDot(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanMotionDot", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setMeanMotionDotDot(t_OmmTle *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMeanMotionDotDot(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanMotionDotDot", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setNoradID(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNoradID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNoradID", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_setRevAtEpoch(t_OmmTle *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setRevAtEpoch(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRevAtEpoch", arg);
                return NULL;
              }

              static PyObject *t_OmmTle_validate(t_OmmTle *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OmmTle), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_OmmTle_get__aGoM(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAGoM());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__aGoM(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAGoM(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "aGoM", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__bStar(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBStar());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__bStar(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBStar(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bStar", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__bTerm(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getBTerm());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__bTerm(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setBTerm(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bTerm", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__classificationType(t_OmmTle *self, void *data)
              {
                jchar value;
                OBJ_CALL(value = self->object.getClassificationType());
                return c2p(value);
              }
              static int t_OmmTle_set__classificationType(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jchar value;
                  if (!parseArg(arg, "C", &value))
                  {
                    INT_CALL(self->object.setClassificationType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "classificationType", arg);
                return -1;
              }

              static int t_OmmTle_set__elementSetNo(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setElementSetNo(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "elementSetNo", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__elementSetNumber(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getElementSetNumber());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_OmmTle_get__ephemerisType(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getEphemerisType());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__ephemerisType(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setEphemerisType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ephemerisType", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__meanMotionDot(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMeanMotionDot());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__meanMotionDot(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMeanMotionDot(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanMotionDot", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__meanMotionDotDot(t_OmmTle *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMeanMotionDotDot());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OmmTle_set__meanMotionDotDot(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMeanMotionDotDot(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanMotionDotDot", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__noradID(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNoradID());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__noradID(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNoradID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "noradID", arg);
                return -1;
              }

              static PyObject *t_OmmTle_get__revAtEpoch(t_OmmTle *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getRevAtEpoch());
                return PyLong_FromLong((long) value);
              }
              static int t_OmmTle_set__revAtEpoch(t_OmmTle *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setRevAtEpoch(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "revAtEpoch", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/forces/PythonDSSTForceModel.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *PythonDSSTForceModel::class$ = NULL;
            jmethodID *PythonDSSTForceModel::mids$ = NULL;
            bool PythonDSSTForceModel::live$ = false;

            jclass PythonDSSTForceModel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/PythonDSSTForceModel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getMeanElementRate_3573019cca22a7a6] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_6930c150caff50e0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_a9be3da5be85857d] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_114c99ef73dfde56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonDSSTForceModel::PythonDSSTForceModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonDSSTForceModel::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonDSSTForceModel::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonDSSTForceModel::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_PythonDSSTForceModel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonDSSTForceModel_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonDSSTForceModel_init_(t_PythonDSSTForceModel *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonDSSTForceModel_finalize(t_PythonDSSTForceModel *self);
            static PyObject *t_PythonDSSTForceModel_pythonExtension(t_PythonDSSTForceModel *self, PyObject *args);
            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
            static void JNICALL t_PythonDSSTForceModel_pythonDecRef5(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonDSSTForceModel_registerAttitudeProvider6(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static PyObject *t_PythonDSSTForceModel_get__self(t_PythonDSSTForceModel *self, void *data);
            static PyGetSetDef t_PythonDSSTForceModel__fields_[] = {
              DECLARE_GET_FIELD(t_PythonDSSTForceModel, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonDSSTForceModel__methods_[] = {
              DECLARE_METHOD(t_PythonDSSTForceModel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonDSSTForceModel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonDSSTForceModel, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonDSSTForceModel, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonDSSTForceModel)[] = {
              { Py_tp_methods, t_PythonDSSTForceModel__methods_ },
              { Py_tp_init, (void *) t_PythonDSSTForceModel_init_ },
              { Py_tp_getset, t_PythonDSSTForceModel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonDSSTForceModel)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonDSSTForceModel, t_PythonDSSTForceModel, PythonDSSTForceModel);

            void t_PythonDSSTForceModel::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonDSSTForceModel), &PY_TYPE_DEF(PythonDSSTForceModel), module, "PythonDSSTForceModel", 1);
            }

            void t_PythonDSSTForceModel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "class_", make_descriptor(PythonDSSTForceModel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "wrapfn_", make_descriptor(t_PythonDSSTForceModel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDSSTForceModel), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonDSSTForceModel::initializeClass);
              JNINativeMethod methods[] = {
                { "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D", (void *) t_PythonDSSTForceModel_getMeanElementRate0 },
                { "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonDSSTForceModel_getMeanElementRate1 },
                { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonDSSTForceModel_getParametersDrivers2 },
                { "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;", (void *) t_PythonDSSTForceModel_initializeShortPeriodTerms3 },
                { "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;", (void *) t_PythonDSSTForceModel_initializeShortPeriodTerms4 },
                { "pythonDecRef", "()V", (void *) t_PythonDSSTForceModel_pythonDecRef5 },
                { "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonDSSTForceModel_registerAttitudeProvider6 },
                { "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V", (void *) t_PythonDSSTForceModel_updateShortPeriodTerms7 },
                { "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonDSSTForceModel_updateShortPeriodTerms8 },
              };
              env->registerNatives(cls, methods, 9);
            }

            static PyObject *t_PythonDSSTForceModel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonDSSTForceModel::initializeClass, 1)))
                return NULL;
              return t_PythonDSSTForceModel::wrap_Object(PythonDSSTForceModel(((t_PythonDSSTForceModel *) arg)->object.this$));
            }
            static PyObject *t_PythonDSSTForceModel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonDSSTForceModel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonDSSTForceModel_init_(t_PythonDSSTForceModel *self, PyObject *args, PyObject *kwds)
            {
              PythonDSSTForceModel object((jobject) NULL);

              INT_CALL(object = PythonDSSTForceModel());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonDSSTForceModel_finalize(t_PythonDSSTForceModel *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonDSSTForceModel_pythonExtension(t_PythonDSSTForceModel *self, PyObject *args)
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

            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a1));
              PyObject *o2 = JArray<jdouble>(a2).wrap();
              PyObject *result = PyObject_CallMethod(obj, "getMeanElementRate", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getMeanElementRate", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_getMeanElementRate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a1));
              PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "getMeanElementRate", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
              {
                throwTypeError("getMeanElementRate", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_9e26256fb0d384a2]);
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

            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_AuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements(a0));
              PyObject *o1 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a1));
              PyObject *o2 = JArray<jdouble>(a2).wrap();
              PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodTerms", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("initializeShortPeriodTerms", result);
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

            static jobject JNICALL t_PythonDSSTForceModel_initializeShortPeriodTerms4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::util::List value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::wrap_Object(::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements(a0));
              PyObject *o1 = ::org::orekit::propagation::t_PropagationType::wrap_Object(::org::orekit::propagation::PropagationType(a1));
              PyObject *o2 = JArray<jobject>(a2).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodTerms", "OOO", o0, o1, o2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
              {
                throwTypeError("initializeShortPeriodTerms", result);
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

            static void JNICALL t_PythonDSSTForceModel_pythonDecRef5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonDSSTForceModel_registerAttitudeProvider6(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
              PyObject *result = PyObject_CallMethod(obj, "registerAttitudeProvider", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              PyObject *o1 = JArray<jobject>(a1).wrap(::org::orekit::propagation::t_FieldSpacecraftState::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "updateShortPeriodTerms", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonDSSTForceModel_updateShortPeriodTerms8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonDSSTForceModel::mids$[PythonDSSTForceModel::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = JArray<jdouble>(a0).wrap();
              PyObject *o1 = JArray<jobject>(a1).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
              PyObject *result = PyObject_CallMethod(obj, "updateShortPeriodTerms", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonDSSTForceModel_get__self(t_PythonDSSTForceModel *self, void *data)
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
#include "java/util/function/DoubleConsumer.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *DoubleConsumer::class$ = NULL;
      jmethodID *DoubleConsumer::mids$ = NULL;
      bool DoubleConsumer::live$ = false;

      jclass DoubleConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/DoubleConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_10f281d777284cea] = env->getMethodID(cls, "accept", "(D)V");
          mids$[mid_andThen_41c437f6c629d64a] = env->getMethodID(cls, "andThen", "(Ljava/util/function/DoubleConsumer;)Ljava/util/function/DoubleConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void DoubleConsumer::accept(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_10f281d777284cea], a0);
      }

      DoubleConsumer DoubleConsumer::andThen(const DoubleConsumer & a0) const
      {
        return DoubleConsumer(env->callObjectMethod(this$, mids$[mid_andThen_41c437f6c629d64a], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleConsumer_accept(t_DoubleConsumer *self, PyObject *arg);
      static PyObject *t_DoubleConsumer_andThen(t_DoubleConsumer *self, PyObject *arg);

      static PyMethodDef t_DoubleConsumer__methods_[] = {
        DECLARE_METHOD(t_DoubleConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleConsumer, accept, METH_O),
        DECLARE_METHOD(t_DoubleConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleConsumer)[] = {
        { Py_tp_methods, t_DoubleConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleConsumer, t_DoubleConsumer, DoubleConsumer);

      void t_DoubleConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleConsumer), &PY_TYPE_DEF(DoubleConsumer), module, "DoubleConsumer", 0);
      }

      void t_DoubleConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "class_", make_descriptor(DoubleConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "wrapfn_", make_descriptor(t_DoubleConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleConsumer::initializeClass, 1)))
          return NULL;
        return t_DoubleConsumer::wrap_Object(DoubleConsumer(((t_DoubleConsumer *) arg)->object.this$));
      }
      static PyObject *t_DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleConsumer_accept(t_DoubleConsumer *self, PyObject *arg)
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

      static PyObject *t_DoubleConsumer_andThen(t_DoubleConsumer *self, PyObject *arg)
      {
        DoubleConsumer a0((jobject) NULL);
        DoubleConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_DoubleConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalCovarianceMetadata::class$ = NULL;
            jmethodID *AdditionalCovarianceMetadata::mids$ = NULL;
            bool AdditionalCovarianceMetadata::live$ = false;

            jclass AdditionalCovarianceMetadata::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getDcpSensitivityVectorPosition_a53a7513ecedada2] = env->getMethodID(cls, "getDcpSensitivityVectorPosition", "()[D");
                mids$[mid_getDcpSensitivityVectorVelocity_a53a7513ecedada2] = env->getMethodID(cls, "getDcpSensitivityVectorVelocity", "()[D");
                mids$[mid_getDensityForecastUncertainty_557b8123390d8d0c] = env->getMethodID(cls, "getDensityForecastUncertainty", "()D");
                mids$[mid_getScreeningDataSource_3cffd47377eca18a] = env->getMethodID(cls, "getScreeningDataSource", "()Ljava/lang/String;");
                mids$[mid_getcScaleFactor_557b8123390d8d0c] = env->getMethodID(cls, "getcScaleFactor", "()D");
                mids$[mid_getcScaleFactorMax_557b8123390d8d0c] = env->getMethodID(cls, "getcScaleFactorMax", "()D");
                mids$[mid_getcScaleFactorMin_557b8123390d8d0c] = env->getMethodID(cls, "getcScaleFactorMin", "()D");
                mids$[mid_setDcpSensitivityVectorPosition_cc18240f4a737f14] = env->getMethodID(cls, "setDcpSensitivityVectorPosition", "([D)V");
                mids$[mid_setDcpSensitivityVectorVelocity_cc18240f4a737f14] = env->getMethodID(cls, "setDcpSensitivityVectorVelocity", "([D)V");
                mids$[mid_setDensityForecastUncertainty_10f281d777284cea] = env->getMethodID(cls, "setDensityForecastUncertainty", "(D)V");
                mids$[mid_setScreeningDataSource_f5ffdf29129ef90a] = env->getMethodID(cls, "setScreeningDataSource", "(Ljava/lang/String;)V");
                mids$[mid_setcScaleFactor_10f281d777284cea] = env->getMethodID(cls, "setcScaleFactor", "(D)V");
                mids$[mid_setcScaleFactorMax_10f281d777284cea] = env->getMethodID(cls, "setcScaleFactorMax", "(D)V");
                mids$[mid_setcScaleFactorMin_10f281d777284cea] = env->getMethodID(cls, "setcScaleFactorMin", "(D)V");
                mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdditionalCovarianceMetadata::AdditionalCovarianceMetadata() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            JArray< jdouble > AdditionalCovarianceMetadata::getDcpSensitivityVectorPosition() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDcpSensitivityVectorPosition_a53a7513ecedada2]));
            }

            JArray< jdouble > AdditionalCovarianceMetadata::getDcpSensitivityVectorVelocity() const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDcpSensitivityVectorVelocity_a53a7513ecedada2]));
            }

            jdouble AdditionalCovarianceMetadata::getDensityForecastUncertainty() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDensityForecastUncertainty_557b8123390d8d0c]);
            }

            ::java::lang::String AdditionalCovarianceMetadata::getScreeningDataSource() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getScreeningDataSource_3cffd47377eca18a]));
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactor() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactor_557b8123390d8d0c]);
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactorMax() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactorMax_557b8123390d8d0c]);
            }

            jdouble AdditionalCovarianceMetadata::getcScaleFactorMin() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getcScaleFactorMin_557b8123390d8d0c]);
            }

            void AdditionalCovarianceMetadata::setDcpSensitivityVectorPosition(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDcpSensitivityVectorPosition_cc18240f4a737f14], a0.this$);
            }

            void AdditionalCovarianceMetadata::setDcpSensitivityVectorVelocity(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDcpSensitivityVectorVelocity_cc18240f4a737f14], a0.this$);
            }

            void AdditionalCovarianceMetadata::setDensityForecastUncertainty(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setDensityForecastUncertainty_10f281d777284cea], a0);
            }

            void AdditionalCovarianceMetadata::setScreeningDataSource(const ::java::lang::String & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setScreeningDataSource_f5ffdf29129ef90a], a0.this$);
            }

            void AdditionalCovarianceMetadata::setcScaleFactor(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactor_10f281d777284cea], a0);
            }

            void AdditionalCovarianceMetadata::setcScaleFactorMax(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactorMax_10f281d777284cea], a0);
            }

            void AdditionalCovarianceMetadata::setcScaleFactorMin(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setcScaleFactorMin_10f281d777284cea], a0);
            }

            void AdditionalCovarianceMetadata::validate(jdouble a0) const
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
            static PyObject *t_AdditionalCovarianceMetadata_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdditionalCovarianceMetadata_init_(t_AdditionalCovarianceMetadata *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getScreeningDataSource(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactor(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMax(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMin(t_AdditionalCovarianceMetadata *self);
            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setScreeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg);
            static PyObject *t_AdditionalCovarianceMetadata_validate(t_AdditionalCovarianceMetadata *self, PyObject *args);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactor(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyObject *t_AdditionalCovarianceMetadata_get__screeningDataSource(t_AdditionalCovarianceMetadata *self, void *data);
            static int t_AdditionalCovarianceMetadata_set__screeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data);
            static PyGetSetDef t_AdditionalCovarianceMetadata__fields_[] = {
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactor),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactorMax),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, cScaleFactorMin),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, dcpSensitivityVectorPosition),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, dcpSensitivityVectorVelocity),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, densityForecastUncertainty),
              DECLARE_GETSET_FIELD(t_AdditionalCovarianceMetadata, screeningDataSource),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdditionalCovarianceMetadata__methods_[] = {
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDcpSensitivityVectorPosition, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDcpSensitivityVectorVelocity, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getDensityForecastUncertainty, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getScreeningDataSource, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactor, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactorMax, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, getcScaleFactorMin, METH_NOARGS),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDcpSensitivityVectorPosition, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDcpSensitivityVectorVelocity, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setDensityForecastUncertainty, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setScreeningDataSource, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactor, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactorMax, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, setcScaleFactorMin, METH_O),
              DECLARE_METHOD(t_AdditionalCovarianceMetadata, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalCovarianceMetadata)[] = {
              { Py_tp_methods, t_AdditionalCovarianceMetadata__methods_ },
              { Py_tp_init, (void *) t_AdditionalCovarianceMetadata_init_ },
              { Py_tp_getset, t_AdditionalCovarianceMetadata__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalCovarianceMetadata)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(AdditionalCovarianceMetadata, t_AdditionalCovarianceMetadata, AdditionalCovarianceMetadata);

            void t_AdditionalCovarianceMetadata::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalCovarianceMetadata), &PY_TYPE_DEF(AdditionalCovarianceMetadata), module, "AdditionalCovarianceMetadata", 0);
            }

            void t_AdditionalCovarianceMetadata::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "class_", make_descriptor(AdditionalCovarianceMetadata::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "wrapfn_", make_descriptor(t_AdditionalCovarianceMetadata::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalCovarianceMetadata), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalCovarianceMetadata_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalCovarianceMetadata::initializeClass, 1)))
                return NULL;
              return t_AdditionalCovarianceMetadata::wrap_Object(AdditionalCovarianceMetadata(((t_AdditionalCovarianceMetadata *) arg)->object.this$));
            }
            static PyObject *t_AdditionalCovarianceMetadata_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalCovarianceMetadata::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdditionalCovarianceMetadata_init_(t_AdditionalCovarianceMetadata *self, PyObject *args, PyObject *kwds)
            {
              AdditionalCovarianceMetadata object((jobject) NULL);

              INT_CALL(object = AdditionalCovarianceMetadata());
              self->object = object;

              return 0;
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getDcpSensitivityVectorPosition());
              return result.wrap();
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self)
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.getDcpSensitivityVectorVelocity());
              return result.wrap();
            }

            static PyObject *t_AdditionalCovarianceMetadata_getDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDensityForecastUncertainty());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getScreeningDataSource(t_AdditionalCovarianceMetadata *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getScreeningDataSource());
              return j2p(result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactor(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactor());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMax(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactorMax());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_getcScaleFactorMin(t_AdditionalCovarianceMetadata *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getcScaleFactorMin());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setDcpSensitivityVectorPosition(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDcpSensitivityVectorPosition", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.setDcpSensitivityVectorVelocity(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDcpSensitivityVectorVelocity", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setDensityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setDensityForecastUncertainty(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setDensityForecastUncertainty", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setScreeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(self->object.setScreeningDataSource(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setScreeningDataSource", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactor(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactor", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactorMax(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactorMax", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_setcScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setcScaleFactorMin(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setcScaleFactorMin", arg);
              return NULL;
            }

            static PyObject *t_AdditionalCovarianceMetadata_validate(t_AdditionalCovarianceMetadata *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(AdditionalCovarianceMetadata), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactor(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactor());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactor(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactor(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactor", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactorMax());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMax(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactorMax(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactorMax", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getcScaleFactorMin());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__cScaleFactorMin(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setcScaleFactorMin(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "cScaleFactorMin", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getDcpSensitivityVectorPosition());
              return value.wrap();
            }
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorPosition(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setDcpSensitivityVectorPosition(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dcpSensitivityVectorPosition", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, void *data)
            {
              JArray< jdouble > value((jobject) NULL);
              OBJ_CALL(value = self->object.getDcpSensitivityVectorVelocity());
              return value.wrap();
            }
            static int t_AdditionalCovarianceMetadata_set__dcpSensitivityVectorVelocity(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                JArray< jdouble > value((jobject) NULL);
                if (!parseArg(arg, "[D", &value))
                {
                  INT_CALL(self->object.setDcpSensitivityVectorVelocity(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "dcpSensitivityVectorVelocity", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDensityForecastUncertainty());
              return PyFloat_FromDouble((double) value);
            }
            static int t_AdditionalCovarianceMetadata_set__densityForecastUncertainty(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setDensityForecastUncertainty(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "densityForecastUncertainty", arg);
              return -1;
            }

            static PyObject *t_AdditionalCovarianceMetadata_get__screeningDataSource(t_AdditionalCovarianceMetadata *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getScreeningDataSource());
              return j2p(value);
            }
            static int t_AdditionalCovarianceMetadata_set__screeningDataSource(t_AdditionalCovarianceMetadata *self, PyObject *arg, void *data)
            {
              {
                ::java::lang::String value((jobject) NULL);
                if (!parseArg(arg, "s", &value))
                {
                  INT_CALL(self->object.setScreeningDataSource(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "screeningDataSource", arg);
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresAdapter::class$ = NULL;
            jmethodID *LeastSquaresAdapter::mids$ = NULL;
            bool LeastSquaresAdapter::live$ = false;

            jclass LeastSquaresAdapter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresAdapter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_48c4478f5a3e6b22] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)V");
                mids$[mid_evaluate_45332b266cdd66d4] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_getConvergenceChecker_4c680323f2c08379] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
                mids$[mid_getEvaluationCounter_d3591c1ea177be92] = env->getMethodID(cls, "getEvaluationCounter", "()Lorg/hipparchus/util/Incrementor;");
                mids$[mid_getIterationCounter_d3591c1ea177be92] = env->getMethodID(cls, "getIterationCounter", "()Lorg/hipparchus/util/Incrementor;");
                mids$[mid_getObservationSize_412668abc8d889e9] = env->getMethodID(cls, "getObservationSize", "()I");
                mids$[mid_getParameterSize_412668abc8d889e9] = env->getMethodID(cls, "getParameterSize", "()I");
                mids$[mid_getStart_75d50d73180655b4] = env->getMethodID(cls, "getStart", "()Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresAdapter::LeastSquaresAdapter(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48c4478f5a3e6b22, a0.this$)) {}

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation LeastSquaresAdapter::evaluate(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_evaluate_45332b266cdd66d4], a0.this$));
            }

            ::org::hipparchus::optim::ConvergenceChecker LeastSquaresAdapter::getConvergenceChecker() const
            {
              return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_4c680323f2c08379]));
            }

            ::org::hipparchus::util::Incrementor LeastSquaresAdapter::getEvaluationCounter() const
            {
              return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getEvaluationCounter_d3591c1ea177be92]));
            }

            ::org::hipparchus::util::Incrementor LeastSquaresAdapter::getIterationCounter() const
            {
              return ::org::hipparchus::util::Incrementor(env->callObjectMethod(this$, mids$[mid_getIterationCounter_d3591c1ea177be92]));
            }

            jint LeastSquaresAdapter::getObservationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getObservationSize_412668abc8d889e9]);
            }

            jint LeastSquaresAdapter::getParameterSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getParameterSize_412668abc8d889e9]);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresAdapter::getStart() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getStart_75d50d73180655b4]));
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
            static PyObject *t_LeastSquaresAdapter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresAdapter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresAdapter_init_(t_LeastSquaresAdapter *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresAdapter_evaluate(t_LeastSquaresAdapter *self, PyObject *arg);
            static PyObject *t_LeastSquaresAdapter_getConvergenceChecker(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getEvaluationCounter(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getIterationCounter(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getObservationSize(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getParameterSize(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_getStart(t_LeastSquaresAdapter *self);
            static PyObject *t_LeastSquaresAdapter_get__convergenceChecker(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__evaluationCounter(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__iterationCounter(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__observationSize(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__parameterSize(t_LeastSquaresAdapter *self, void *data);
            static PyObject *t_LeastSquaresAdapter_get__start(t_LeastSquaresAdapter *self, void *data);
            static PyGetSetDef t_LeastSquaresAdapter__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, convergenceChecker),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, evaluationCounter),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, iterationCounter),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, observationSize),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, parameterSize),
              DECLARE_GET_FIELD(t_LeastSquaresAdapter, start),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresAdapter__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresAdapter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresAdapter, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresAdapter, evaluate, METH_O),
              DECLARE_METHOD(t_LeastSquaresAdapter, getConvergenceChecker, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getEvaluationCounter, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getIterationCounter, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getObservationSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getParameterSize, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresAdapter, getStart, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresAdapter)[] = {
              { Py_tp_methods, t_LeastSquaresAdapter__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresAdapter_init_ },
              { Py_tp_getset, t_LeastSquaresAdapter__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresAdapter)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresAdapter, t_LeastSquaresAdapter, LeastSquaresAdapter);

            void t_LeastSquaresAdapter::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresAdapter), &PY_TYPE_DEF(LeastSquaresAdapter), module, "LeastSquaresAdapter", 0);
            }

            void t_LeastSquaresAdapter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "class_", make_descriptor(LeastSquaresAdapter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "wrapfn_", make_descriptor(t_LeastSquaresAdapter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresAdapter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresAdapter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresAdapter::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresAdapter::wrap_Object(LeastSquaresAdapter(((t_LeastSquaresAdapter *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresAdapter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresAdapter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresAdapter_init_(t_LeastSquaresAdapter *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              LeastSquaresAdapter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                INT_CALL(object = LeastSquaresAdapter(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_LeastSquaresAdapter_evaluate(t_LeastSquaresAdapter *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresAdapter_getConvergenceChecker(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
              OBJ_CALL(result = self->object.getConvergenceChecker());
              return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, ::org::hipparchus::optim::nonlinear::vector::leastsquares::PY_TYPE(LeastSquaresProblem$Evaluation));
            }

            static PyObject *t_LeastSquaresAdapter_getEvaluationCounter(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::util::Incrementor result((jobject) NULL);
              OBJ_CALL(result = self->object.getEvaluationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_getIterationCounter(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::util::Incrementor result((jobject) NULL);
              OBJ_CALL(result = self->object.getIterationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_getObservationSize(t_LeastSquaresAdapter *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getObservationSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresAdapter_getParameterSize(t_LeastSquaresAdapter *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getParameterSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LeastSquaresAdapter_getStart(t_LeastSquaresAdapter *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresAdapter_get__convergenceChecker(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
              OBJ_CALL(value = self->object.getConvergenceChecker());
              return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__evaluationCounter(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::util::Incrementor value((jobject) NULL);
              OBJ_CALL(value = self->object.getEvaluationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__iterationCounter(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::util::Incrementor value((jobject) NULL);
              OBJ_CALL(value = self->object.getIterationCounter());
              return ::org::hipparchus::util::t_Incrementor::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresAdapter_get__observationSize(t_LeastSquaresAdapter *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getObservationSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresAdapter_get__parameterSize(t_LeastSquaresAdapter *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getParameterSize());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_LeastSquaresAdapter_get__start(t_LeastSquaresAdapter *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStart());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrData::class$ = NULL;
            jmethodID *SsrData::mids$ = NULL;
            bool SsrData::live$ = false;

            jclass SsrData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrData::SsrData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
            static PyObject *t_SsrData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SsrData_init_(t_SsrData *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_SsrData__methods_[] = {
              DECLARE_METHOD(t_SsrData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrData, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrData)[] = {
              { Py_tp_methods, t_SsrData__methods_ },
              { Py_tp_init, (void *) t_SsrData_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SsrData, t_SsrData, SsrData);

            void t_SsrData::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrData), &PY_TYPE_DEF(SsrData), module, "SsrData", 0);
            }

            void t_SsrData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "class_", make_descriptor(SsrData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "wrapfn_", make_descriptor(t_SsrData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrData::initializeClass, 1)))
                return NULL;
              return t_SsrData::wrap_Object(SsrData(((t_SsrData *) arg)->object.this$));
            }
            static PyObject *t_SsrData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SsrData_init_(t_SsrData *self, PyObject *args, PyObject *kwds)
            {
              SsrData object((jobject) NULL);

              INT_CALL(object = SsrData());
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
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *LocalizedStatFormats::class$ = NULL;
      jmethodID *LocalizedStatFormats::mids$ = NULL;
      bool LocalizedStatFormats::live$ = false;
      LocalizedStatFormats *LocalizedStatFormats::COVARIANCE_MATRIX = NULL;
      LocalizedStatFormats *LocalizedStatFormats::ILLEGAL_STATE_PCA = NULL;
      LocalizedStatFormats *LocalizedStatFormats::INSUFFICIENT_DATA_FOR_T_STATISTIC = NULL;
      LocalizedStatFormats *LocalizedStatFormats::INVALID_REGRESSION_OBSERVATION = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_ENOUGH_DATA_REGRESSION = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_SUPPORTED_NAN_STRATEGY = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NO_REGRESSORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUNDS_CONFIDENCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUNDS_QUANTILE_VALUE = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUND_SIGNIFICANCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::SIGNIFICANCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TIES_ARE_NOT_ALLOWED = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TOO_MANY_REGRESSORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TWO_OR_MORE_CATEGORIES_REQUIRED = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED = NULL;

      jclass LocalizedStatFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/LocalizedStatFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_4b51060c6b7ea981] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_3cffd47377eca18a] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_c8d2c9e037b43e18] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/LocalizedStatFormats;");
          mids$[mid_values_17b3b60ab534a8f7] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/LocalizedStatFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COVARIANCE_MATRIX = new LocalizedStatFormats(env->getStaticObjectField(cls, "COVARIANCE_MATRIX", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          ILLEGAL_STATE_PCA = new LocalizedStatFormats(env->getStaticObjectField(cls, "ILLEGAL_STATE_PCA", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          INSUFFICIENT_DATA_FOR_T_STATISTIC = new LocalizedStatFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DATA_FOR_T_STATISTIC", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          INVALID_REGRESSION_OBSERVATION = new LocalizedStatFormats(env->getStaticObjectField(cls, "INVALID_REGRESSION_OBSERVATION", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_ENOUGH_DATA_REGRESSION = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA_REGRESSION", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_SUPPORTED_NAN_STRATEGY = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_SUPPORTED_NAN_STRATEGY", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NO_REGRESSORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "NO_REGRESSORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUNDS_CONFIDENCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUNDS_CONFIDENCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUNDS_QUANTILE_VALUE = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUNDS_QUANTILE_VALUE", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUND_SIGNIFICANCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUND_SIGNIFICANCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          SIGNIFICANCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "SIGNIFICANCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TIES_ARE_NOT_ALLOWED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TIES_ARE_NOT_ALLOWED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TOO_MANY_REGRESSORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "TOO_MANY_REGRESSORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TWO_OR_MORE_CATEGORIES_REQUIRED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TWO_OR_MORE_CATEGORIES_REQUIRED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedStatFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_4b51060c6b7ea981], a0.this$));
      }

      ::java::lang::String LocalizedStatFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_3cffd47377eca18a]));
      }

      LocalizedStatFormats LocalizedStatFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedStatFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c8d2c9e037b43e18], a0.this$));
      }

      JArray< LocalizedStatFormats > LocalizedStatFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedStatFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_17b3b60ab534a8f7]));
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
      static PyObject *t_LocalizedStatFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_of_(t_LocalizedStatFormats *self, PyObject *args);
      static PyObject *t_LocalizedStatFormats_getLocalizedString(t_LocalizedStatFormats *self, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_getSourceString(t_LocalizedStatFormats *self);
      static PyObject *t_LocalizedStatFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedStatFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedStatFormats_get__sourceString(t_LocalizedStatFormats *self, void *data);
      static PyObject *t_LocalizedStatFormats_get__parameters_(t_LocalizedStatFormats *self, void *data);
      static PyGetSetDef t_LocalizedStatFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedStatFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedStatFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedStatFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedStatFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedStatFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedStatFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedStatFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedStatFormats)[] = {
        { Py_tp_methods, t_LocalizedStatFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedStatFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedStatFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedStatFormats, t_LocalizedStatFormats, LocalizedStatFormats);
      PyObject *t_LocalizedStatFormats::wrap_Object(const LocalizedStatFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedStatFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedStatFormats *self = (t_LocalizedStatFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedStatFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedStatFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedStatFormats *self = (t_LocalizedStatFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedStatFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedStatFormats), &PY_TYPE_DEF(LocalizedStatFormats), module, "LocalizedStatFormats", 0);
      }

      void t_LocalizedStatFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "class_", make_descriptor(LocalizedStatFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "wrapfn_", make_descriptor(t_LocalizedStatFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedStatFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "COVARIANCE_MATRIX", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::COVARIANCE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "ILLEGAL_STATE_PCA", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::ILLEGAL_STATE_PCA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "INSUFFICIENT_DATA_FOR_T_STATISTIC", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::INSUFFICIENT_DATA_FOR_T_STATISTIC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "INVALID_REGRESSION_OBSERVATION", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::INVALID_REGRESSION_OBSERVATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_ENOUGH_DATA_REGRESSION", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_ENOUGH_DATA_REGRESSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_SUPPORTED_NAN_STRATEGY", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_SUPPORTED_NAN_STRATEGY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NO_REGRESSORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NO_REGRESSORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUNDS_CONFIDENCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUNDS_CONFIDENCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUNDS_QUANTILE_VALUE", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUNDS_QUANTILE_VALUE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUND_SIGNIFICANCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUND_SIGNIFICANCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "SIGNIFICANCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::SIGNIFICANCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TIES_ARE_NOT_ALLOWED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TIES_ARE_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TOO_MANY_REGRESSORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TOO_MANY_REGRESSORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TWO_OR_MORE_CATEGORIES_REQUIRED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TWO_OR_MORE_CATEGORIES_REQUIRED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED)));
      }

      static PyObject *t_LocalizedStatFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedStatFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedStatFormats::wrap_Object(LocalizedStatFormats(((t_LocalizedStatFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedStatFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedStatFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedStatFormats_of_(t_LocalizedStatFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedStatFormats_getLocalizedString(t_LocalizedStatFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedStatFormats_getSourceString(t_LocalizedStatFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedStatFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedStatFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::LocalizedStatFormats::valueOf(a0));
          return t_LocalizedStatFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedStatFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedStatFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::stat::LocalizedStatFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedStatFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedStatFormats_get__parameters_(t_LocalizedStatFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedStatFormats_get__sourceString(t_LocalizedStatFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/GroundPointing.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *GroundPointing::class$ = NULL;
      jmethodID *GroundPointing::mids$ = NULL;
      bool GroundPointing::live$ = false;

      jclass GroundPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/GroundPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitudeRotation_85bb0a19efdadc1d] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_5c74bfcf2d42825a] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getBodyFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getTargetPV_9e0119a6fef31431] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_ee00ab612436435b] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPosition_0ed0905f85ed7f56] = env->getMethodID(cls, "getTargetPosition", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getTargetPosition_102e5d95cb32da9e] = env->getMethodID(cls, "getTargetPosition", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::Attitude GroundPointing::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude GroundPointing::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation GroundPointing::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_85bb0a19efdadc1d], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation GroundPointing::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_5c74bfcf2d42825a], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Frame GroundPointing::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_6c9bc0a928c56d4e]));
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
      static PyObject *t_GroundPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GroundPointing_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GroundPointing_getAttitude(t_GroundPointing *self, PyObject *args);
      static PyObject *t_GroundPointing_getAttitudeRotation(t_GroundPointing *self, PyObject *args);
      static PyObject *t_GroundPointing_getBodyFrame(t_GroundPointing *self);
      static PyObject *t_GroundPointing_get__bodyFrame(t_GroundPointing *self, void *data);
      static PyGetSetDef t_GroundPointing__fields_[] = {
        DECLARE_GET_FIELD(t_GroundPointing, bodyFrame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GroundPointing__methods_[] = {
        DECLARE_METHOD(t_GroundPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GroundPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GroundPointing, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_GroundPointing, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_GroundPointing, getBodyFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GroundPointing)[] = {
        { Py_tp_methods, t_GroundPointing__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GroundPointing__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GroundPointing)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GroundPointing, t_GroundPointing, GroundPointing);

      void t_GroundPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(GroundPointing), &PY_TYPE_DEF(GroundPointing), module, "GroundPointing", 0);
      }

      void t_GroundPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "class_", make_descriptor(GroundPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "wrapfn_", make_descriptor(t_GroundPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GroundPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GroundPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GroundPointing::initializeClass, 1)))
          return NULL;
        return t_GroundPointing::wrap_Object(GroundPointing(((t_GroundPointing *) arg)->object.this$));
      }
      static PyObject *t_GroundPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GroundPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GroundPointing_getAttitude(t_GroundPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_GroundPointing_getAttitudeRotation(t_GroundPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_GroundPointing_getBodyFrame(t_GroundPointing *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_GroundPointing_get__bodyFrame(t_GroundPointing *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LogisticDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LogisticDistribution::class$ = NULL;
        jmethodID *LogisticDistribution::mids$ = NULL;
        bool LogisticDistribution::live$ = false;

        jclass LogisticDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LogisticDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_557b8123390d8d0c] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LogisticDistribution::LogisticDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble LogisticDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble LogisticDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble LogisticDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_557b8123390d8d0c]);
        }

        jdouble LogisticDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble LogisticDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble LogisticDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }

        jdouble LogisticDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble LogisticDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble LogisticDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean LogisticDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
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
        static PyObject *t_LogisticDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LogisticDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LogisticDistribution_init_(t_LogisticDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LogisticDistribution_cumulativeProbability(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_density(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getLocation(t_LogisticDistribution *self);
        static PyObject *t_LogisticDistribution_getNumericalMean(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getNumericalVariance(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getScale(t_LogisticDistribution *self);
        static PyObject *t_LogisticDistribution_getSupportLowerBound(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getSupportUpperBound(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_inverseCumulativeProbability(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_isSupportConnected(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_get__location(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__numericalMean(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__numericalVariance(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__scale(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportConnected(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportLowerBound(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportUpperBound(t_LogisticDistribution *self, void *data);
        static PyGetSetDef t_LogisticDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LogisticDistribution, location),
          DECLARE_GET_FIELD(t_LogisticDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LogisticDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LogisticDistribution, scale),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LogisticDistribution__methods_[] = {
          DECLARE_METHOD(t_LogisticDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogisticDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogisticDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LogisticDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LogisticDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LogisticDistribution)[] = {
          { Py_tp_methods, t_LogisticDistribution__methods_ },
          { Py_tp_init, (void *) t_LogisticDistribution_init_ },
          { Py_tp_getset, t_LogisticDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LogisticDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LogisticDistribution, t_LogisticDistribution, LogisticDistribution);

        void t_LogisticDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LogisticDistribution), &PY_TYPE_DEF(LogisticDistribution), module, "LogisticDistribution", 0);
        }

        void t_LogisticDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "class_", make_descriptor(LogisticDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "wrapfn_", make_descriptor(t_LogisticDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LogisticDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LogisticDistribution::initializeClass, 1)))
            return NULL;
          return t_LogisticDistribution::wrap_Object(LogisticDistribution(((t_LogisticDistribution *) arg)->object.this$));
        }
        static PyObject *t_LogisticDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LogisticDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LogisticDistribution_init_(t_LogisticDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LogisticDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LogisticDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LogisticDistribution_cumulativeProbability(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LogisticDistribution_density(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LogisticDistribution_getLocation(t_LogisticDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogisticDistribution_getNumericalMean(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LogisticDistribution_getNumericalVariance(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LogisticDistribution_getScale(t_LogisticDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogisticDistribution_getSupportLowerBound(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LogisticDistribution_getSupportUpperBound(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LogisticDistribution_inverseCumulativeProbability(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LogisticDistribution_isSupportConnected(t_LogisticDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LogisticDistribution_get__location(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__numericalMean(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__numericalVariance(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__scale(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__supportConnected(t_LogisticDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LogisticDistribution_get__supportLowerBound(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__supportUpperBound(t_LogisticDistribution *self, void *data)
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
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *XmlStructureKey::class$ = NULL;
          jmethodID *XmlStructureKey::mids$ = NULL;
          bool XmlStructureKey::live$ = false;
          XmlStructureKey *XmlStructureKey::body = NULL;
          XmlStructureKey *XmlStructureKey::data = NULL;
          XmlStructureKey *XmlStructureKey::header = NULL;
          XmlStructureKey *XmlStructureKey::metadata = NULL;
          XmlStructureKey *XmlStructureKey::segment = NULL;

          jclass XmlStructureKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/XmlStructureKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_3a6d8178bc93b34b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)Z");
              mids$[mid_valueOf_065e92b6996e1984] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/XmlStructureKey;");
              mids$[mid_values_d3069318da798eeb] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/XmlStructureKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              body = new XmlStructureKey(env->getStaticObjectField(cls, "body", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              data = new XmlStructureKey(env->getStaticObjectField(cls, "data", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              header = new XmlStructureKey(env->getStaticObjectField(cls, "header", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              metadata = new XmlStructureKey(env->getStaticObjectField(cls, "metadata", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              segment = new XmlStructureKey(env->getStaticObjectField(cls, "segment", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean XmlStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_3a6d8178bc93b34b], a0.this$, a1.this$);
          }

          XmlStructureKey XmlStructureKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return XmlStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_065e92b6996e1984], a0.this$));
          }

          JArray< XmlStructureKey > XmlStructureKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< XmlStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_d3069318da798eeb]));
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
          static PyObject *t_XmlStructureKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureKey_of_(t_XmlStructureKey *self, PyObject *args);
          static PyObject *t_XmlStructureKey_process(t_XmlStructureKey *self, PyObject *args);
          static PyObject *t_XmlStructureKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_XmlStructureKey_values(PyTypeObject *type);
          static PyObject *t_XmlStructureKey_get__parameters_(t_XmlStructureKey *self, void *data);
          static PyGetSetDef t_XmlStructureKey__fields_[] = {
            DECLARE_GET_FIELD(t_XmlStructureKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_XmlStructureKey__methods_[] = {
            DECLARE_METHOD(t_XmlStructureKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_XmlStructureKey, process, METH_VARARGS),
            DECLARE_METHOD(t_XmlStructureKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(XmlStructureKey)[] = {
            { Py_tp_methods, t_XmlStructureKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_XmlStructureKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(XmlStructureKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(XmlStructureKey, t_XmlStructureKey, XmlStructureKey);
          PyObject *t_XmlStructureKey::wrap_Object(const XmlStructureKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_XmlStructureKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_XmlStructureKey *self = (t_XmlStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_XmlStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_XmlStructureKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_XmlStructureKey *self = (t_XmlStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_XmlStructureKey::install(PyObject *module)
          {
            installType(&PY_TYPE(XmlStructureKey), &PY_TYPE_DEF(XmlStructureKey), module, "XmlStructureKey", 0);
          }

          void t_XmlStructureKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "class_", make_descriptor(XmlStructureKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "wrapfn_", make_descriptor(t_XmlStructureKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(XmlStructureKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "body", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::body)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "data", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::data)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "header", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::header)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "metadata", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::metadata)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "segment", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::segment)));
          }

          static PyObject *t_XmlStructureKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, XmlStructureKey::initializeClass, 1)))
              return NULL;
            return t_XmlStructureKey::wrap_Object(XmlStructureKey(((t_XmlStructureKey *) arg)->object.this$));
          }
          static PyObject *t_XmlStructureKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, XmlStructureKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_XmlStructureKey_of_(t_XmlStructureKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_XmlStructureKey_process(t_XmlStructureKey *self, PyObject *args)
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

          static PyObject *t_XmlStructureKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            XmlStructureKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::XmlStructureKey::valueOf(a0));
              return t_XmlStructureKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_XmlStructureKey_values(PyTypeObject *type)
          {
            JArray< XmlStructureKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::XmlStructureKey::values());
            return JArray<jobject>(result.this$).wrap(t_XmlStructureKey::wrap_jobject);
          }
          static PyObject *t_XmlStructureKey_get__parameters_(t_XmlStructureKey *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/AbstractLambdaMethod.h"
#include "java/util/Comparator.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolver.h"
#include "org/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractLambdaMethod::class$ = NULL;
          jmethodID *AbstractLambdaMethod::mids$ = NULL;
          bool AbstractLambdaMethod::live$ = false;

          jclass AbstractLambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractLambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_setComparator_349032d04af23bed] = env->getMethodID(cls, "setComparator", "(Ljava/util/Comparator;)V");
              mids$[mid_solveILS_1580c6ee6b7d56ce] = env->getMethodID(cls, "solveILS", "(I[D[ILorg/hipparchus/linear/RealMatrix;)[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_zIndex_5625cf3db98dadc1] = env->getMethodID(cls, "zIndex", "(II)I");
              mids$[mid_getDiagReference_a53a7513ecedada2] = env->getMethodID(cls, "getDiagReference", "()[D");
              mids$[mid_getLowReference_a53a7513ecedada2] = env->getMethodID(cls, "getLowReference", "()[D");
              mids$[mid_getDecorrelatedReference_a53a7513ecedada2] = env->getMethodID(cls, "getDecorrelatedReference", "()[D");
              mids$[mid_getZInverseTransformationReference_1b41cf9ebf653611] = env->getMethodID(cls, "getZInverseTransformationReference", "()[I");
              mids$[mid_lIndex_5625cf3db98dadc1] = env->getMethodID(cls, "lIndex", "(II)I");
              mids$[mid_discreteSearch_0640e6acf969ed28] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_recoverAmbiguities_152c52200b30dda4] = env->getMethodID(cls, "recoverAmbiguities", "()[Lorg/orekit/estimation/measurements/gnss/IntegerLeastSquareSolution;");
              mids$[mid_permutation_89aad365fb0ed8da] = env->getMethodID(cls, "permutation", "(ID)V");
              mids$[mid_integerGaussTransformation_a84c9a223722150c] = env->getMethodID(cls, "integerGaussTransformation", "(II)V");
              mids$[mid_getMaxSolution_412668abc8d889e9] = env->getMethodID(cls, "getMaxSolution", "()I");
              mids$[mid_addSolution_c71cb41dee20c1a0] = env->getMethodID(cls, "addSolution", "([JD)V");
              mids$[mid_getSolutionsSize_412668abc8d889e9] = env->getMethodID(cls, "getSolutionsSize", "()I");
              mids$[mid_removeSolution_0640e6acf969ed28] = env->getMethodID(cls, "removeSolution", "()V");
              mids$[mid_ltdlDecomposition_0640e6acf969ed28] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_0640e6acf969ed28] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_inverseDecomposition_0640e6acf969ed28] = env->getMethodID(cls, "inverseDecomposition", "()V");
              mids$[mid_getMaxDistance_557b8123390d8d0c] = env->getMethodID(cls, "getMaxDistance", "()D");
              mids$[mid_getSize_412668abc8d889e9] = env->getMethodID(cls, "getSize", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractLambdaMethod::setComparator(const ::java::util::Comparator & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setComparator_349032d04af23bed], a0.this$);
          }

          JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > AbstractLambdaMethod::solveILS(jint a0, const JArray< jdouble > & a1, const JArray< jint > & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
          {
            return JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution >(env->callObjectMethod(this$, mids$[mid_solveILS_1580c6ee6b7d56ce], a0, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_AbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_setComparator(t_AbstractLambdaMethod *self, PyObject *arg);
          static PyObject *t_AbstractLambdaMethod_solveILS(t_AbstractLambdaMethod *self, PyObject *args);
          static int t_AbstractLambdaMethod_set__comparator(t_AbstractLambdaMethod *self, PyObject *arg, void *data);
          static PyGetSetDef t_AbstractLambdaMethod__fields_[] = {
            DECLARE_SET_FIELD(t_AbstractLambdaMethod, comparator),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractLambdaMethod__methods_[] = {
            DECLARE_METHOD(t_AbstractLambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractLambdaMethod, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractLambdaMethod, setComparator, METH_O),
            DECLARE_METHOD(t_AbstractLambdaMethod, solveILS, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractLambdaMethod)[] = {
            { Py_tp_methods, t_AbstractLambdaMethod__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractLambdaMethod__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractLambdaMethod)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractLambdaMethod, t_AbstractLambdaMethod, AbstractLambdaMethod);

          void t_AbstractLambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractLambdaMethod), &PY_TYPE_DEF(AbstractLambdaMethod), module, "AbstractLambdaMethod", 0);
          }

          void t_AbstractLambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "class_", make_descriptor(AbstractLambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "wrapfn_", make_descriptor(t_AbstractLambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractLambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractLambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractLambdaMethod::initializeClass, 1)))
              return NULL;
            return t_AbstractLambdaMethod::wrap_Object(AbstractLambdaMethod(((t_AbstractLambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_AbstractLambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractLambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractLambdaMethod_setComparator(t_AbstractLambdaMethod *self, PyObject *arg)
          {
            ::java::util::Comparator a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
            {
              OBJ_CALL(self->object.setComparator(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setComparator", arg);
            return NULL;
          }

          static PyObject *t_AbstractLambdaMethod_solveILS(t_AbstractLambdaMethod *self, PyObject *args)
          {
            jint a0;
            JArray< jdouble > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
            JArray< ::org::orekit::estimation::measurements::gnss::IntegerLeastSquareSolution > result((jobject) NULL);

            if (!parseArgs(args, "I[D[Ik", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveILS(a0, a1, a2, a3));
              return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::gnss::t_IntegerLeastSquareSolution::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "solveILS", args);
            return NULL;
          }

          static int t_AbstractLambdaMethod_set__comparator(t_AbstractLambdaMethod *self, PyObject *arg, void *data)
          {
            {
              ::java::util::Comparator value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::Comparator::initializeClass, &value))
              {
                INT_CALL(self->object.setComparator(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "comparator", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/JPLEphemeridesLoader.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$EphemerisType.h"
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *JPLEphemeridesLoader::class$ = NULL;
      jmethodID *JPLEphemeridesLoader::mids$ = NULL;
      bool JPLEphemeridesLoader::live$ = false;
      ::java::lang::String *JPLEphemeridesLoader::DEFAULT_DE_SUPPORTED_NAMES = NULL;
      ::java::lang::String *JPLEphemeridesLoader::DEFAULT_INPOP_SUPPORTED_NAMES = NULL;

      jclass JPLEphemeridesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/JPLEphemeridesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f6332ad449282561] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;)V");
          mids$[mid_init$_5edff63840aa9e5d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getLoadedAstronomicalUnit_557b8123390d8d0c] = env->getMethodID(cls, "getLoadedAstronomicalUnit", "()D");
          mids$[mid_getLoadedConstant_7fabd776843e2b9c] = env->getMethodID(cls, "getLoadedConstant", "([Ljava/lang/String;)D");
          mids$[mid_getLoadedEarthMoonMassRatio_557b8123390d8d0c] = env->getMethodID(cls, "getLoadedEarthMoonMassRatio", "()D");
          mids$[mid_getLoadedGravitationalCoefficient_fdd8401f20d05d59] = env->getMethodID(cls, "getLoadedGravitationalCoefficient", "(Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;)D");
          mids$[mid_getMaxChunksDuration_557b8123390d8d0c] = env->getMethodID(cls, "getMaxChunksDuration", "()D");
          mids$[mid_loadCelestialBody_47d89fc2b3d16fd5] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_DE_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_DE_SUPPORTED_NAMES", "Ljava/lang/String;"));
          DEFAULT_INPOP_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_INPOP_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JPLEphemeridesLoader::JPLEphemeridesLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f6332ad449282561, a0.this$, a1.this$)) {}

      JPLEphemeridesLoader::JPLEphemeridesLoader(const ::java::lang::String & a0, const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScales & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_5edff63840aa9e5d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      jdouble JPLEphemeridesLoader::getLoadedAstronomicalUnit() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedAstronomicalUnit_557b8123390d8d0c]);
      }

      jdouble JPLEphemeridesLoader::getLoadedConstant(const JArray< ::java::lang::String > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedConstant_7fabd776843e2b9c], a0.this$);
      }

      jdouble JPLEphemeridesLoader::getLoadedEarthMoonMassRatio() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedEarthMoonMassRatio_557b8123390d8d0c]);
      }

      jdouble JPLEphemeridesLoader::getLoadedGravitationalCoefficient(const ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLoadedGravitationalCoefficient_fdd8401f20d05d59], a0.this$);
      }

      jdouble JPLEphemeridesLoader::getMaxChunksDuration() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxChunksDuration_557b8123390d8d0c]);
      }

      ::org::orekit::bodies::CelestialBody JPLEphemeridesLoader::loadCelestialBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_loadCelestialBody_47d89fc2b3d16fd5], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/bodies/JPLEphemeridesLoader$RawPVProvider.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_JPLEphemeridesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_JPLEphemeridesLoader_init_(t_JPLEphemeridesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_JPLEphemeridesLoader_getLoadedAstronomicalUnit(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_getLoadedConstant(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_getLoadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_getLoadedGravitationalCoefficient(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_getMaxChunksDuration(t_JPLEphemeridesLoader *self);
      static PyObject *t_JPLEphemeridesLoader_loadCelestialBody(t_JPLEphemeridesLoader *self, PyObject *arg);
      static PyObject *t_JPLEphemeridesLoader_get__loadedAstronomicalUnit(t_JPLEphemeridesLoader *self, void *data);
      static PyObject *t_JPLEphemeridesLoader_get__loadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self, void *data);
      static PyObject *t_JPLEphemeridesLoader_get__maxChunksDuration(t_JPLEphemeridesLoader *self, void *data);
      static PyGetSetDef t_JPLEphemeridesLoader__fields_[] = {
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, loadedAstronomicalUnit),
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, loadedEarthMoonMassRatio),
        DECLARE_GET_FIELD(t_JPLEphemeridesLoader, maxChunksDuration),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_JPLEphemeridesLoader__methods_[] = {
        DECLARE_METHOD(t_JPLEphemeridesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedAstronomicalUnit, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedConstant, METH_O),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedEarthMoonMassRatio, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getLoadedGravitationalCoefficient, METH_O),
        DECLARE_METHOD(t_JPLEphemeridesLoader, getMaxChunksDuration, METH_NOARGS),
        DECLARE_METHOD(t_JPLEphemeridesLoader, loadCelestialBody, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(JPLEphemeridesLoader)[] = {
        { Py_tp_methods, t_JPLEphemeridesLoader__methods_ },
        { Py_tp_init, (void *) t_JPLEphemeridesLoader_init_ },
        { Py_tp_getset, t_JPLEphemeridesLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(JPLEphemeridesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(JPLEphemeridesLoader, t_JPLEphemeridesLoader, JPLEphemeridesLoader);

      void t_JPLEphemeridesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(JPLEphemeridesLoader), &PY_TYPE_DEF(JPLEphemeridesLoader), module, "JPLEphemeridesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "EphemerisType", make_descriptor(&PY_TYPE_DEF(JPLEphemeridesLoader$EphemerisType)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "RawPVProvider", make_descriptor(&PY_TYPE_DEF(JPLEphemeridesLoader$RawPVProvider)));
      }

      void t_JPLEphemeridesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "class_", make_descriptor(JPLEphemeridesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "wrapfn_", make_descriptor(t_JPLEphemeridesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(JPLEphemeridesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "DEFAULT_DE_SUPPORTED_NAMES", make_descriptor(j2p(*JPLEphemeridesLoader::DEFAULT_DE_SUPPORTED_NAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(JPLEphemeridesLoader), "DEFAULT_INPOP_SUPPORTED_NAMES", make_descriptor(j2p(*JPLEphemeridesLoader::DEFAULT_INPOP_SUPPORTED_NAMES)));
      }

      static PyObject *t_JPLEphemeridesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, JPLEphemeridesLoader::initializeClass, 1)))
          return NULL;
        return t_JPLEphemeridesLoader::wrap_Object(JPLEphemeridesLoader(((t_JPLEphemeridesLoader *) arg)->object.this$));
      }
      static PyObject *t_JPLEphemeridesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, JPLEphemeridesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_JPLEphemeridesLoader_init_(t_JPLEphemeridesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a1((jobject) NULL);
            PyTypeObject **p1;
            JPLEphemeridesLoader object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, &a0, &a1, &p1, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_))
            {
              INT_CALL(object = JPLEphemeridesLoader(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
            ::org::orekit::time::TimeScales a3((jobject) NULL);
            ::org::orekit::frames::Frame a4((jobject) NULL);
            JPLEphemeridesLoader object((jobject) NULL);

            if (!parseArgs(args, "sKkkk", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &p1, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_, &a2, &a3, &a4))
            {
              INT_CALL(object = JPLEphemeridesLoader(a0, a1, a2, a3, a4));
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

      static PyObject *t_JPLEphemeridesLoader_getLoadedAstronomicalUnit(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLoadedAstronomicalUnit());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedConstant(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        JArray< ::java::lang::String > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[s", &a0))
        {
          OBJ_CALL(result = self->object.getLoadedConstant(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLoadedConstant", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLoadedEarthMoonMassRatio());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_getLoadedGravitationalCoefficient(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::bodies::JPLEphemeridesLoader$EphemerisType::initializeClass, &a0, &p0, ::org::orekit::bodies::t_JPLEphemeridesLoader$EphemerisType::parameters_))
        {
          OBJ_CALL(result = self->object.getLoadedGravitationalCoefficient(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLoadedGravitationalCoefficient", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_getMaxChunksDuration(t_JPLEphemeridesLoader *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxChunksDuration());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_JPLEphemeridesLoader_loadCelestialBody(t_JPLEphemeridesLoader *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.loadCelestialBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "loadCelestialBody", arg);
        return NULL;
      }

      static PyObject *t_JPLEphemeridesLoader_get__loadedAstronomicalUnit(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLoadedAstronomicalUnit());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_JPLEphemeridesLoader_get__loadedEarthMoonMassRatio(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLoadedEarthMoonMassRatio());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_JPLEphemeridesLoader_get__maxChunksDuration(t_JPLEphemeridesLoader *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxChunksDuration());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonAtmosphere.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonAtmosphere::class$ = NULL;
          jmethodID *PythonAtmosphere::mids$ = NULL;
          bool PythonAtmosphere::live$ = false;

          jclass PythonAtmosphere::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonAtmosphere");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getDensity_57dd506d2d9ba196] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_818999d9e7960fd1] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getVelocity_12776b6e8e044274] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getVelocity_4b2e058d0b26ef39] = env->getMethodID(cls, "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAtmosphere::PythonAtmosphere() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonAtmosphere::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAtmosphere::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAtmosphere::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          static PyObject *t_PythonAtmosphere_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAtmosphere_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAtmosphere_init_(t_PythonAtmosphere *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAtmosphere_finalize(t_PythonAtmosphere *self);
          static PyObject *t_PythonAtmosphere_pythonExtension(t_PythonAtmosphere *self, PyObject *args);
          static jobject JNICALL t_PythonAtmosphere_getDensity0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jdouble JNICALL t_PythonAtmosphere_getDensity1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonAtmosphere_getFrame2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAtmosphere_getVelocity3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static jobject JNICALL t_PythonAtmosphere_getVelocity4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonAtmosphere_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAtmosphere_get__self(t_PythonAtmosphere *self, void *data);
          static PyGetSetDef t_PythonAtmosphere__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAtmosphere, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAtmosphere__methods_[] = {
            DECLARE_METHOD(t_PythonAtmosphere, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAtmosphere, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAtmosphere, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAtmosphere, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAtmosphere)[] = {
            { Py_tp_methods, t_PythonAtmosphere__methods_ },
            { Py_tp_init, (void *) t_PythonAtmosphere_init_ },
            { Py_tp_getset, t_PythonAtmosphere__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAtmosphere)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonAtmosphere, t_PythonAtmosphere, PythonAtmosphere);

          void t_PythonAtmosphere::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAtmosphere), &PY_TYPE_DEF(PythonAtmosphere), module, "PythonAtmosphere", 1);
          }

          void t_PythonAtmosphere::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "class_", make_descriptor(PythonAtmosphere::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "wrapfn_", make_descriptor(t_PythonAtmosphere::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAtmosphere), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAtmosphere::initializeClass);
            JNINativeMethod methods[] = {
              { "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAtmosphere_getDensity0 },
              { "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D", (void *) t_PythonAtmosphere_getDensity1 },
              { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonAtmosphere_getFrame2 },
              { "getVelocity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAtmosphere_getVelocity3 },
              { "getVelocity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAtmosphere_getVelocity4 },
              { "pythonDecRef", "()V", (void *) t_PythonAtmosphere_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonAtmosphere_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAtmosphere::initializeClass, 1)))
              return NULL;
            return t_PythonAtmosphere::wrap_Object(PythonAtmosphere(((t_PythonAtmosphere *) arg)->object.this$));
          }
          static PyObject *t_PythonAtmosphere_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAtmosphere::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAtmosphere_init_(t_PythonAtmosphere *self, PyObject *args, PyObject *kwds)
          {
            PythonAtmosphere object((jobject) NULL);

            INT_CALL(object = PythonAtmosphere());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAtmosphere_finalize(t_PythonAtmosphere *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAtmosphere_pythonExtension(t_PythonAtmosphere *self, PyObject *args)
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

          static jobject JNICALL t_PythonAtmosphere_getDensity0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getDensity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getDensity", result);
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

          static jdouble JNICALL t_PythonAtmosphere_getDensity1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getDensity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getDensity", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAtmosphere_getFrame2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_9e26256fb0d384a2]);
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

          static jobject JNICALL t_PythonAtmosphere_getVelocity3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getVelocity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getVelocity", result);
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

          static jobject JNICALL t_PythonAtmosphere_getVelocity4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
            PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
            PyObject *result = PyObject_CallMethod(obj, "getVelocity", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getVelocity", result);
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

          static void JNICALL t_PythonAtmosphere_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAtmosphere::mids$[PythonAtmosphere::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAtmosphere_get__self(t_PythonAtmosphere *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonIntervalEventTrigger::class$ = NULL;
          jmethodID *PythonIntervalEventTrigger::mids$ = NULL;
          bool PythonIntervalEventTrigger::live$ = false;

          jclass PythonIntervalEventTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f9a3e736b2361f6c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_convertIntervalDetector_590bb38060674b63] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIntervalEventTrigger::PythonIntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_f9a3e736b2361f6c, a0.this$)) {}

          void PythonIntervalEventTrigger::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonIntervalEventTrigger::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonIntervalEventTrigger::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonIntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntervalEventTrigger_of_(t_PythonIntervalEventTrigger *self, PyObject *args);
          static int t_PythonIntervalEventTrigger_init_(t_PythonIntervalEventTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIntervalEventTrigger_finalize(t_PythonIntervalEventTrigger *self);
          static PyObject *t_PythonIntervalEventTrigger_pythonExtension(t_PythonIntervalEventTrigger *self, PyObject *args);
          static jobject JNICALL t_PythonIntervalEventTrigger_convertIntervalDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonIntervalEventTrigger_getParametersDrivers1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonIntervalEventTrigger_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIntervalEventTrigger_get__self(t_PythonIntervalEventTrigger *self, void *data);
          static PyObject *t_PythonIntervalEventTrigger_get__parameters_(t_PythonIntervalEventTrigger *self, void *data);
          static PyGetSetDef t_PythonIntervalEventTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIntervalEventTrigger, self),
            DECLARE_GET_FIELD(t_PythonIntervalEventTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIntervalEventTrigger__methods_[] = {
            DECLARE_METHOD(t_PythonIntervalEventTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIntervalEventTrigger)[] = {
            { Py_tp_methods, t_PythonIntervalEventTrigger__methods_ },
            { Py_tp_init, (void *) t_PythonIntervalEventTrigger_init_ },
            { Py_tp_getset, t_PythonIntervalEventTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIntervalEventTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger),
            NULL
          };

          DEFINE_TYPE(PythonIntervalEventTrigger, t_PythonIntervalEventTrigger, PythonIntervalEventTrigger);
          PyObject *t_PythonIntervalEventTrigger::wrap_Object(const PythonIntervalEventTrigger& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonIntervalEventTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonIntervalEventTrigger *self = (t_PythonIntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonIntervalEventTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonIntervalEventTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonIntervalEventTrigger *self = (t_PythonIntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonIntervalEventTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIntervalEventTrigger), &PY_TYPE_DEF(PythonIntervalEventTrigger), module, "PythonIntervalEventTrigger", 1);
          }

          void t_PythonIntervalEventTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "class_", make_descriptor(PythonIntervalEventTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "wrapfn_", make_descriptor(t_PythonIntervalEventTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIntervalEventTrigger::initializeClass);
            JNINativeMethod methods[] = {
              { "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonIntervalEventTrigger_convertIntervalDetector0 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonIntervalEventTrigger_getParametersDrivers1 },
              { "pythonDecRef", "()V", (void *) t_PythonIntervalEventTrigger_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonIntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIntervalEventTrigger::initializeClass, 1)))
              return NULL;
            return t_PythonIntervalEventTrigger::wrap_Object(PythonIntervalEventTrigger(((t_PythonIntervalEventTrigger *) arg)->object.this$));
          }
          static PyObject *t_PythonIntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIntervalEventTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonIntervalEventTrigger_of_(t_PythonIntervalEventTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonIntervalEventTrigger_init_(t_PythonIntervalEventTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            PythonIntervalEventTrigger object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = PythonIntervalEventTrigger(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonIntervalEventTrigger_finalize(t_PythonIntervalEventTrigger *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIntervalEventTrigger_pythonExtension(t_PythonIntervalEventTrigger *self, PyObject *args)
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

          static jobject JNICALL t_PythonIntervalEventTrigger_convertIntervalDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertIntervalDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertIntervalDetector", result);
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

          static jobject JNICALL t_PythonIntervalEventTrigger_getParametersDrivers1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_9e26256fb0d384a2]);
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

          static void JNICALL t_PythonIntervalEventTrigger_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIntervalEventTrigger_get__self(t_PythonIntervalEventTrigger *self, void *data)
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
          static PyObject *t_PythonIntervalEventTrigger_get__parameters_(t_PythonIntervalEventTrigger *self, void *data)
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
#include "org/orekit/errors/OrekitMessages.h"
#include "java/util/Locale.h"
#include "org/orekit/errors/OrekitMessages.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitMessages::class$ = NULL;
      jmethodID *OrekitMessages::mids$ = NULL;
      bool OrekitMessages::live$ = false;
      OrekitMessages *OrekitMessages::ADDITIONAL_STATE_NAME_ALREADY_IN_USE = NULL;
      OrekitMessages *OrekitMessages::ALMOST_CRITICALLY_INCLINED_ORBIT = NULL;
      OrekitMessages *OrekitMessages::ALMOST_EQUATORIAL_ORBIT = NULL;
      OrekitMessages *OrekitMessages::ALTITUDE_BELOW_ALLOWED_THRESHOLD = NULL;
      OrekitMessages *OrekitMessages::ANGLE_TYPE_NOT_SUPPORTED = NULL;
      OrekitMessages *OrekitMessages::ATTEMPT_TO_GENERATE_MALFORMED_FILE = NULL;
      OrekitMessages *OrekitMessages::ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND = NULL;
      OrekitMessages *OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF = NULL;
      OrekitMessages *OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT = NULL;
      OrekitMessages *OrekitMessages::CANNOT_COMPUTE_LAGRANGIAN = NULL;
      OrekitMessages *OrekitMessages::CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES = NULL;
      OrekitMessages *OrekitMessages::CANNOT_FIND_SATELLITE_IN_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_BOTH_TAU_AND_GAMMA = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_GNSS_DATA = NULL;
      OrekitMessages *OrekitMessages::CANNOT_PARSE_SOURCETABLE = NULL;
      OrekitMessages *OrekitMessages::CANNOT_START_PROPAGATION_FROM_INFINITY = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_INVALID_LENGTH_TIME_FIELD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_INVALID_PREAMBLE_FIELD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DATE_MISSING_AGENCY_EPOCH = NULL;
      OrekitMessages *OrekitMessages::CCSDS_DIFFERENT_LVLH_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCOMPATIBLE_KEYS_BOTH_USED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCOMPLETE_DATA = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INCONSISTENT_TIME_SYSTEMS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INVALID_FRAME = NULL;
      OrekitMessages *OrekitMessages::CCSDS_INVALID_ROTATION_SEQUENCE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MANEUVER_MISSING_TIME = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MISSING_KEYWORD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_MISSING_SENSOR_INDEX = NULL;
      OrekitMessages *OrekitMessages::CCSDS_SENSOR_INDEX_ALREADY_USED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TDM_KEYWORD_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED = NULL;
      OrekitMessages *OrekitMessages::CCSDS_TIME_SYSTEM_NOT_READ_YET = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNEXPECTED_KEYWORD = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_ATTITUDE_TYPE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_CONVENTIONS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_GM = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNKNOWN_SPACECRAFT_MASS = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE = NULL;
      OrekitMessages *OrekitMessages::CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL = NULL;
      OrekitMessages *OrekitMessages::CLOCK_FILE_UNSUPPORTED_VERSION = NULL;
      OrekitMessages *OrekitMessages::CONNECTION_ERROR = NULL;
      OrekitMessages *OrekitMessages::CORRUPTED_FILE = NULL;
      OrekitMessages *OrekitMessages::CPF_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::CRD_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::DATA_ROOT_DIRECTORY_DOES_NOT_EXIST = NULL;
      OrekitMessages *OrekitMessages::DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::DIFFERENT_STATE_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::DIFFERENT_TIME_OF_CLOSEST_APPROACH = NULL;
      OrekitMessages *OrekitMessages::DIMENSION_INCONSISTENT_WITH_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD = NULL;
      OrekitMessages *OrekitMessages::DSST_NEWCOMB_OPERATORS_COMPUTATION = NULL;
      OrekitMessages *OrekitMessages::DSST_SPR_SHADOW_INCONSISTENT = NULL;
      OrekitMessages *OrekitMessages::DSST_VMNS_COEFFICIENT_ERROR_MS = NULL;
      OrekitMessages *OrekitMessages::DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::END_OF_ENCODED_MESSAGE = NULL;
      OrekitMessages *OrekitMessages::EVENT_DATE_TOO_CLOSE = NULL;
      OrekitMessages *OrekitMessages::EXCEPTIONAL_DATA_CONTEXT = NULL;
      OrekitMessages *OrekitMessages::FAILED_AUTHENTICATION = NULL;
      OrekitMessages *OrekitMessages::FIND_ROOT = NULL;
      OrekitMessages *OrekitMessages::FRAMES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::FRAME_ALREADY_ATTACHED = NULL;
      OrekitMessages *OrekitMessages::FRAME_ANCESTOR_OF_BOTH_FRAMES = NULL;
      OrekitMessages *OrekitMessages::FRAME_ANCESTOR_OF_NEITHER_FRAME = NULL;
      OrekitMessages *OrekitMessages::FRAME_NOT_ATTACHED = NULL;
      OrekitMessages *OrekitMessages::FRAME_NO_NTH_ANCESTOR = NULL;
      OrekitMessages *OrekitMessages::FUNCTION_NOT_IMPLEMENTED = NULL;
      OrekitMessages *OrekitMessages::GNSS_PARITY_ERROR = NULL;
      OrekitMessages *OrekitMessages::GRAVITY_FIELD_NORMALIZATION_UNDERFLOW = NULL;
      OrekitMessages *OrekitMessages::HEADER_ALREADY_WRITTEN = NULL;
      OrekitMessages *OrekitMessages::HEADER_NOT_WRITTEN = NULL;
      OrekitMessages *OrekitMessages::HYPERBOLIC_ORBIT_NOT_HANDLED_AS = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_FRAMES = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS = NULL;
      OrekitMessages *OrekitMessages::INCOMPATIBLE_UNITS = NULL;
      OrekitMessages *OrekitMessages::INCOMPLETE_HEADER = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_DATES_IN_IERS_FILE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_EARTH_MOON_RATIO_IN_FILES = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_ELEMENTS = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_SATS = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SAMPLING_DATE = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::INCONSISTENT_SELECTION = NULL;
      OrekitMessages *OrekitMessages::INERTIAL_FORCE_MODEL_MISSING = NULL;
      OrekitMessages *OrekitMessages::INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION = NULL;
      OrekitMessages *OrekitMessages::INTERNAL_ERROR = NULL;
      OrekitMessages *OrekitMessages::INVALID_GNSS_DATA = NULL;
      OrekitMessages *OrekitMessages::INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS = NULL;
      OrekitMessages *OrekitMessages::INVALID_PARAMETER_RANGE = NULL;
      OrekitMessages *OrekitMessages::INVALID_RANGE_INDICATOR_IN_CRD_FILE = NULL;
      OrekitMessages *OrekitMessages::INVALID_SATELLITE_ID = NULL;
      OrekitMessages *OrekitMessages::INVALID_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::INVALID_TYPE_FOR_FUNCTION = NULL;
      OrekitMessages *OrekitMessages::IRREGULAR_OR_INCOMPLETE_GRID = NULL;
      OrekitMessages *OrekitMessages::ITRF_VERSIONS_PREFIX_ONLY = NULL;
      OrekitMessages *OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY = NULL;
      OrekitMessages *OrekitMessages::MISMATCHED_FREQUENCIES = NULL;
      OrekitMessages *OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES = NULL;
      OrekitMessages *OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP = NULL;
      OrekitMessages *OrekitMessages::MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::MISSING_HEADER = NULL;
      OrekitMessages *OrekitMessages::MISSING_SECOND_TLE_LINE = NULL;
      OrekitMessages *OrekitMessages::MISSING_SERIE_J_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::MISSING_STATION_DATA_FOR_EPOCH = NULL;
      OrekitMessages *OrekitMessages::MISSING_VELOCITY = NULL;
      OrekitMessages *OrekitMessages::MODIP_GRID_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::MOUNPOINT_ALREADY_CONNECTED = NULL;
      OrekitMessages *OrekitMessages::MULTIPLE_INTERPOLATOR_USED = NULL;
      OrekitMessages *OrekitMessages::MULTIPLE_SHOOTING_UNDERCONSTRAINED = NULL;
      OrekitMessages *OrekitMessages::NEITHER_DIRECTORY_NOR_ZIP_OR_JAR = NULL;
      OrekitMessages *OrekitMessages::NEQUICK_F2_FM3_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICALLY_SORTED_ENTRIES = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS = NULL;
      OrekitMessages *OrekitMessages::NON_CHRONOLOGICAL_DATES_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NON_COPLANAR_POINTS = NULL;
      OrekitMessages *OrekitMessages::NON_DIFFERENT_DATES_FOR_OBSERVATIONS = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_DATE = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_DAY_NUMBER_IN_YEAR = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_GEOMAGNETIC_MODEL = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_HMS_TIME = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_MONTH = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_TIME = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_WEEK_DATE = NULL;
      OrekitMessages *OrekitMessages::NON_EXISTENT_YEAR_MONTH_DAY = NULL;
      OrekitMessages *OrekitMessages::NON_PSEUDO_INERTIAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES = NULL;
      OrekitMessages *OrekitMessages::NON_RESETABLE_STATE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_DIRECTORY = NULL;
      OrekitMessages *OrekitMessages::NOT_A_JPL_EPHEMERIDES_BINARY_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_IERS_DATA_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_SEM_ALMANAC_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_A_SUPPORTED_YUMA_ALMANAC_FILE = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_ATTITUDE_PROVIDERS = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_CACHED_NEIGHBORS = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_DATA = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_GNSS_FOR_DOP = NULL;
      OrekitMessages *OrekitMessages::NOT_ENOUGH_PROPAGATORS = NULL;
      OrekitMessages *OrekitMessages::NOT_POSITIVE_SPACECRAFT_MASS = NULL;
      OrekitMessages *OrekitMessages::NOT_STRICTLY_POSITIVE = NULL;
      OrekitMessages *OrekitMessages::NOT_TLE_LINES = NULL;
      OrekitMessages *OrekitMessages::NOT_VALID_INTERNATIONAL_DESIGNATOR = NULL;
      OrekitMessages *OrekitMessages::NO_CACHED_ENTRIES = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_GENERATED = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_DATA_LOADED_FOR_CELESTIAL_BODY = NULL;
      OrekitMessages *OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_EPOCH_IN_IONEX_HEADER = NULL;
      OrekitMessages *OrekitMessages::NO_GRAVITY_FIELD_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_IERS_UTC_TAI_HISTORY_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_INTERPOLATOR_FOR_STATE_DEFINITION = NULL;
      OrekitMessages *OrekitMessages::NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND = NULL;
      OrekitMessages *OrekitMessages::NO_KLOBUCHAR_ALPHA_BETA_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER = NULL;
      OrekitMessages *OrekitMessages::NO_OCEAN_TIDE_DATA_LOADED = NULL;
      OrekitMessages *OrekitMessages::NO_PROPAGATOR_CONFIGURED = NULL;
      OrekitMessages *OrekitMessages::NO_REFERENCE_DATE_FOR_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::NO_SEM_ALMANAC_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NO_SOLAR_ACTIVITY_AT_DATE = NULL;
      OrekitMessages *OrekitMessages::NO_SUCH_ITRF_FRAME = NULL;
      OrekitMessages *OrekitMessages::NO_TEC_DATA_IN_FILES_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_DATA_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE = NULL;
      OrekitMessages *OrekitMessages::NO_TLE_FOR_OBJECT = NULL;
      OrekitMessages *OrekitMessages::NO_UNSCENTED_TRANSFORM_CONFIGURED = NULL;
      OrekitMessages *OrekitMessages::NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::NO_YUMA_ALMANAC_AVAILABLE = NULL;
      OrekitMessages *OrekitMessages::NULL_ARGUMENT = NULL;
      OrekitMessages *OrekitMessages::NULL_PARENT_FOR_FRAME = NULL;
      OrekitMessages *OrekitMessages::OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS = NULL;
      OrekitMessages *OrekitMessages::OCEAN_TIDE_LOAD_DEFORMATION_LIMITS = NULL;
      OrekitMessages *OrekitMessages::ORBITS_MUS_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::ORBIT_AND_ATTITUDE_DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE = NULL;
      OrekitMessages *OrekitMessages::ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE = NULL;
      OrekitMessages *OrekitMessages::ORBIT_TYPE_NOT_ALLOWED = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_BODY_EPHEMERIDES_DATE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_DATE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_DERIVATION_ORDER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER_DETAIL = NULL;
      OrekitMessages *OrekitMessages::OUT_OF_RANGE_TIME_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_NOT_SET = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET = NULL;
      OrekitMessages *OrekitMessages::PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES = NULL;
      OrekitMessages *OrekitMessages::POINT_INSIDE_ELLIPSOID = NULL;
      OrekitMessages *OrekitMessages::POLAR_TRAJECTORY = NULL;
      OrekitMessages *OrekitMessages::POSITIVE_FLOW_RATE = NULL;
      OrekitMessages *OrekitMessages::SATELLITE_COLLIDED_WITH_TARGET = NULL;
      OrekitMessages *OrekitMessages::SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::SINGULAR_JACOBIAN_FOR_ORBIT_TYPE = NULL;
      OrekitMessages *OrekitMessages::SOURCETABLE_PARSE_ERROR = NULL;
      OrekitMessages *OrekitMessages::SP3_INCOMPATIBLE_FILE_METADATA = NULL;
      OrekitMessages *OrekitMessages::SP3_INCOMPATIBLE_SATELLITE_MEDATADA = NULL;
      OrekitMessages *OrekitMessages::SP3_INVALID_HEADER_ENTRY = NULL;
      OrekitMessages *OrekitMessages::SP3_NUMBER_OF_EPOCH_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::SP3_TOO_MANY_SATELLITES_FOR_VERSION = NULL;
      OrekitMessages *OrekitMessages::SP3_UNSUPPORTED_VERSION = NULL;
      OrekitMessages *OrekitMessages::STATE_AND_COVARIANCE_DATES_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH = NULL;
      OrekitMessages *OrekitMessages::STATE_JACOBIAN_NOT_6X6 = NULL;
      OrekitMessages *OrekitMessages::STATE_JACOBIAN_NOT_INITIALIZED = NULL;
      OrekitMessages *OrekitMessages::STATION_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::STEC_INTEGRATION_DID_NOT_CONVERGE = NULL;
      OrekitMessages *OrekitMessages::STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::STK_UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::STK_UNMAPPED_COORDINATE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::STREAM_REQUIRES_NMEA_FIX = NULL;
      OrekitMessages *OrekitMessages::TLE_CHECKSUM_ERROR = NULL;
      OrekitMessages *OrekitMessages::TLE_INVALID_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_DATA_TYPE = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL = NULL;
      OrekitMessages *OrekitMessages::TOO_LARGE_ORDER_FOR_GRAVITY_FIELD = NULL;
      OrekitMessages *OrekitMessages::TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH = NULL;
      OrekitMessages *OrekitMessages::TOO_SMALL_SCALE_FOR_PARAMETER = NULL;
      OrekitMessages *OrekitMessages::TRAJECTORY_INSIDE_BRILLOUIN_SPHERE = NULL;
      OrekitMessages *OrekitMessages::TRAJECTORY_NOT_CROSSING_XZPLANE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_COMPUTE_TLE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_FIND_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_FIND_RESOURCE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_AFTER = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_BEFORE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_PARSE_ELEMENT_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_PARSE_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNABLE_TO_READ_JPL_HEADER = NULL;
      OrekitMessages *OrekitMessages::UNDEFINED_ABSOLUTE_PVCOORDINATES = NULL;
      OrekitMessages *OrekitMessages::UNDEFINED_ORBIT = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_CONTENT_TYPE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_DATA_AFTER_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_DATA_AT_LINE_IN_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_END_OF_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_END_OF_FILE_AFTER_LINE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_FORMAT_FOR_ILRS_FILE = NULL;
      OrekitMessages *OrekitMessages::UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH = NULL;
      OrekitMessages *OrekitMessages::UNINITIALIZED_VALUE_FOR_KEY = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_ADDITIONAL_STATE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_AUTHENTICATION_METHOD = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_CARRIER_PHASE_CODE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_CLOCK_DATA_TYPE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_DATA_FORMAT = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_ENCODED_MESSAGE_NUMBER = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_HOST = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_MONTH = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_NAVIGATION_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_RINEX_FREQUENCY = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_SATELLITE_ANTENNA_CODE = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_SATELLITE_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_TIME_SYSTEM = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_UNIT = NULL;
      OrekitMessages *OrekitMessages::UNKNOWN_UTC_ID = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FILE_FORMAT = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FILE_FORMAT_VERSION = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_FREQUENCY_FOR_ANTENNA = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_LOCAL_ORBITAL_FRAME = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_PARAMETER_NAME = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_TIME_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::UNSUPPORTED_TRANSFORM = NULL;
      OrekitMessages *OrekitMessages::VALUE_NOT_FOUND = NULL;
      OrekitMessages *OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE = NULL;
      OrekitMessages *OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED = NULL;
      OrekitMessages *OrekitMessages::WRONG_COLUMNS_NUMBER = NULL;
      OrekitMessages *OrekitMessages::WRONG_DEGREE_OR_ORDER = NULL;
      OrekitMessages *OrekitMessages::WRONG_EOP_INTERPOLATION_DEGREE = NULL;
      OrekitMessages *OrekitMessages::WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION = NULL;
      OrekitMessages *OrekitMessages::WRONG_NB_COMPONENTS = NULL;
      OrekitMessages *OrekitMessages::WRONG_ORBIT_PARAMETERS_TYPE = NULL;
      OrekitMessages *OrekitMessages::WRONG_PARSING_TYPE = NULL;

      jclass OrekitMessages::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitMessages");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_4b51060c6b7ea981] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_3cffd47377eca18a] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_a03c9bb7372453b6] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/errors/OrekitMessages;");
          mids$[mid_values_558c1f138f9d0ab9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/errors/OrekitMessages;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADDITIONAL_STATE_NAME_ALREADY_IN_USE = new OrekitMessages(env->getStaticObjectField(cls, "ADDITIONAL_STATE_NAME_ALREADY_IN_USE", "Lorg/orekit/errors/OrekitMessages;"));
          ALMOST_CRITICALLY_INCLINED_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "ALMOST_CRITICALLY_INCLINED_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          ALMOST_EQUATORIAL_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "ALMOST_EQUATORIAL_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          ALTITUDE_BELOW_ALLOWED_THRESHOLD = new OrekitMessages(env->getStaticObjectField(cls, "ALTITUDE_BELOW_ALLOWED_THRESHOLD", "Lorg/orekit/errors/OrekitMessages;"));
          ANGLE_TYPE_NOT_SUPPORTED = new OrekitMessages(env->getStaticObjectField(cls, "ANGLE_TYPE_NOT_SUPPORTED", "Lorg/orekit/errors/OrekitMessages;"));
          ATTEMPT_TO_GENERATE_MALFORMED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "ATTEMPT_TO_GENERATE_MALFORMED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND = new OrekitMessages(env->getStaticObjectField(cls, "ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_COMPUTE_LAGRANGIAN = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_COMPUTE_LAGRANGIAN", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_FIND_SATELLITE_IN_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_FIND_SATELLITE_IN_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_BOTH_TAU_AND_GAMMA = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_BOTH_TAU_AND_GAMMA", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_GNSS_DATA = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_GNSS_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_PARSE_SOURCETABLE = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_PARSE_SOURCETABLE", "Lorg/orekit/errors/OrekitMessages;"));
          CANNOT_START_PROPAGATION_FROM_INFINITY = new OrekitMessages(env->getStaticObjectField(cls, "CANNOT_START_PROPAGATION_FROM_INFINITY", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_INVALID_LENGTH_TIME_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_INVALID_LENGTH_TIME_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_INVALID_PREAMBLE_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_INVALID_PREAMBLE_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DATE_MISSING_AGENCY_EPOCH = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DATE_MISSING_AGENCY_EPOCH", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_DIFFERENT_LVLH_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_DIFFERENT_LVLH_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCOMPATIBLE_KEYS_BOTH_USED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCOMPATIBLE_KEYS_BOTH_USED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCOMPLETE_DATA = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCOMPLETE_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INCONSISTENT_TIME_SYSTEMS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INCONSISTENT_TIME_SYSTEMS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INVALID_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INVALID_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_INVALID_ROTATION_SEQUENCE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_INVALID_ROTATION_SEQUENCE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MANEUVER_MISSING_TIME = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MANEUVER_MISSING_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MISSING_KEYWORD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MISSING_KEYWORD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_MISSING_SENSOR_INDEX = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_MISSING_SENSOR_INDEX", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_SENSOR_INDEX_ALREADY_USED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_SENSOR_INDEX_ALREADY_USED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TDM_KEYWORD_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TDM_KEYWORD_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_TIME_SYSTEM_NOT_READ_YET = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_TIME_SYSTEM_NOT_READ_YET", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNEXPECTED_KEYWORD = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNEXPECTED_KEYWORD", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_ATTITUDE_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_ATTITUDE_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_CONVENTIONS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_CONVENTIONS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_GM = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_GM", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNKNOWN_SPACECRAFT_MASS = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNKNOWN_SPACECRAFT_MASS", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL = new OrekitMessages(env->getStaticObjectField(cls, "CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL", "Lorg/orekit/errors/OrekitMessages;"));
          CLOCK_FILE_UNSUPPORTED_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "CLOCK_FILE_UNSUPPORTED_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          CONNECTION_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "CONNECTION_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          CORRUPTED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CORRUPTED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          CPF_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CPF_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          CRD_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "CRD_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          DATA_ROOT_DIRECTORY_DOES_NOT_EXIST = new OrekitMessages(env->getStaticObjectField(cls, "DATA_ROOT_DIRECTORY_DOES_NOT_EXIST", "Lorg/orekit/errors/OrekitMessages;"));
          DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          DIFFERENT_STATE_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "DIFFERENT_STATE_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          DIFFERENT_TIME_OF_CLOSEST_APPROACH = new OrekitMessages(env->getStaticObjectField(cls, "DIFFERENT_TIME_OF_CLOSEST_APPROACH", "Lorg/orekit/errors/OrekitMessages;"));
          DIMENSION_INCONSISTENT_WITH_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "DIMENSION_INCONSISTENT_WITH_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD = new OrekitMessages(env->getStaticObjectField(cls, "DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_NEWCOMB_OPERATORS_COMPUTATION = new OrekitMessages(env->getStaticObjectField(cls, "DSST_NEWCOMB_OPERATORS_COMPUTATION", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_SPR_SHADOW_INCONSISTENT = new OrekitMessages(env->getStaticObjectField(cls, "DSST_SPR_SHADOW_INCONSISTENT", "Lorg/orekit/errors/OrekitMessages;"));
          DSST_VMNS_COEFFICIENT_ERROR_MS = new OrekitMessages(env->getStaticObjectField(cls, "DSST_VMNS_COEFFICIENT_ERROR_MS", "Lorg/orekit/errors/OrekitMessages;"));
          DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          END_OF_ENCODED_MESSAGE = new OrekitMessages(env->getStaticObjectField(cls, "END_OF_ENCODED_MESSAGE", "Lorg/orekit/errors/OrekitMessages;"));
          EVENT_DATE_TOO_CLOSE = new OrekitMessages(env->getStaticObjectField(cls, "EVENT_DATE_TOO_CLOSE", "Lorg/orekit/errors/OrekitMessages;"));
          EXCEPTIONAL_DATA_CONTEXT = new OrekitMessages(env->getStaticObjectField(cls, "EXCEPTIONAL_DATA_CONTEXT", "Lorg/orekit/errors/OrekitMessages;"));
          FAILED_AUTHENTICATION = new OrekitMessages(env->getStaticObjectField(cls, "FAILED_AUTHENTICATION", "Lorg/orekit/errors/OrekitMessages;"));
          FIND_ROOT = new OrekitMessages(env->getStaticObjectField(cls, "FIND_ROOT", "Lorg/orekit/errors/OrekitMessages;"));
          FRAMES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "FRAMES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ALREADY_ATTACHED = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ALREADY_ATTACHED", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ANCESTOR_OF_BOTH_FRAMES = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ANCESTOR_OF_BOTH_FRAMES", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_ANCESTOR_OF_NEITHER_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_ANCESTOR_OF_NEITHER_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_NOT_ATTACHED = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_NOT_ATTACHED", "Lorg/orekit/errors/OrekitMessages;"));
          FRAME_NO_NTH_ANCESTOR = new OrekitMessages(env->getStaticObjectField(cls, "FRAME_NO_NTH_ANCESTOR", "Lorg/orekit/errors/OrekitMessages;"));
          FUNCTION_NOT_IMPLEMENTED = new OrekitMessages(env->getStaticObjectField(cls, "FUNCTION_NOT_IMPLEMENTED", "Lorg/orekit/errors/OrekitMessages;"));
          GNSS_PARITY_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "GNSS_PARITY_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          GRAVITY_FIELD_NORMALIZATION_UNDERFLOW = new OrekitMessages(env->getStaticObjectField(cls, "GRAVITY_FIELD_NORMALIZATION_UNDERFLOW", "Lorg/orekit/errors/OrekitMessages;"));
          HEADER_ALREADY_WRITTEN = new OrekitMessages(env->getStaticObjectField(cls, "HEADER_ALREADY_WRITTEN", "Lorg/orekit/errors/OrekitMessages;"));
          HEADER_NOT_WRITTEN = new OrekitMessages(env->getStaticObjectField(cls, "HEADER_NOT_WRITTEN", "Lorg/orekit/errors/OrekitMessages;"));
          HYPERBOLIC_ORBIT_NOT_HANDLED_AS = new OrekitMessages(env->getStaticObjectField(cls, "HYPERBOLIC_ORBIT_NOT_HANDLED_AS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_FRAMES = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_FRAMES", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPATIBLE_UNITS = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPATIBLE_UNITS", "Lorg/orekit/errors/OrekitMessages;"));
          INCOMPLETE_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "INCOMPLETE_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_DATES_IN_IERS_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_DATES_IN_IERS_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_EARTH_MOON_RATIO_IN_FILES = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_EARTH_MOON_RATIO_IN_FILES", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_ELEMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_ELEMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_SATS = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_SATS", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SAMPLING_DATE = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SAMPLING_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          INCONSISTENT_SELECTION = new OrekitMessages(env->getStaticObjectField(cls, "INCONSISTENT_SELECTION", "Lorg/orekit/errors/OrekitMessages;"));
          INERTIAL_FORCE_MODEL_MISSING = new OrekitMessages(env->getStaticObjectField(cls, "INERTIAL_FORCE_MODEL_MISSING", "Lorg/orekit/errors/OrekitMessages;"));
          INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION = new OrekitMessages(env->getStaticObjectField(cls, "INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION", "Lorg/orekit/errors/OrekitMessages;"));
          INTERNAL_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "INTERNAL_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_GNSS_DATA = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_GNSS_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_PARAMETER_RANGE = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_PARAMETER_RANGE", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_RANGE_INDICATOR_IN_CRD_FILE = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_RANGE_INDICATOR_IN_CRD_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_SATELLITE_ID = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_SATELLITE_ID", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          INVALID_TYPE_FOR_FUNCTION = new OrekitMessages(env->getStaticObjectField(cls, "INVALID_TYPE_FOR_FUNCTION", "Lorg/orekit/errors/OrekitMessages;"));
          IRREGULAR_OR_INCOMPLETE_GRID = new OrekitMessages(env->getStaticObjectField(cls, "IRREGULAR_OR_INCOMPLETE_GRID", "Lorg/orekit/errors/OrekitMessages;"));
          ITRF_VERSIONS_PREFIX_ONLY = new OrekitMessages(env->getStaticObjectField(cls, "ITRF_VERSIONS_PREFIX_ONLY", "Lorg/orekit/errors/OrekitMessages;"));
          KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          KLOBUCHAR_ALPHA_BETA_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "KLOBUCHAR_ALPHA_BETA_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY = new OrekitMessages(env->getStaticObjectField(cls, "METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY", "Lorg/orekit/errors/OrekitMessages;"));
          MISMATCHED_FREQUENCIES = new OrekitMessages(env->getStaticObjectField(cls, "MISMATCHED_FREQUENCIES", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_SECOND_TLE_LINE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_SECOND_TLE_LINE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_SERIE_J_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_SERIE_J_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_STATION_DATA_FOR_EPOCH = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_STATION_DATA_FOR_EPOCH", "Lorg/orekit/errors/OrekitMessages;"));
          MISSING_VELOCITY = new OrekitMessages(env->getStaticObjectField(cls, "MISSING_VELOCITY", "Lorg/orekit/errors/OrekitMessages;"));
          MODIP_GRID_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "MODIP_GRID_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          MOUNPOINT_ALREADY_CONNECTED = new OrekitMessages(env->getStaticObjectField(cls, "MOUNPOINT_ALREADY_CONNECTED", "Lorg/orekit/errors/OrekitMessages;"));
          MULTIPLE_INTERPOLATOR_USED = new OrekitMessages(env->getStaticObjectField(cls, "MULTIPLE_INTERPOLATOR_USED", "Lorg/orekit/errors/OrekitMessages;"));
          MULTIPLE_SHOOTING_UNDERCONSTRAINED = new OrekitMessages(env->getStaticObjectField(cls, "MULTIPLE_SHOOTING_UNDERCONSTRAINED", "Lorg/orekit/errors/OrekitMessages;"));
          NEITHER_DIRECTORY_NOR_ZIP_OR_JAR = new OrekitMessages(env->getStaticObjectField(cls, "NEITHER_DIRECTORY_NOR_ZIP_OR_JAR", "Lorg/orekit/errors/OrekitMessages;"));
          NEQUICK_F2_FM3_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NEQUICK_F2_FM3_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICALLY_SORTED_ENTRIES = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICALLY_SORTED_ENTRIES", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_CHRONOLOGICAL_DATES_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NON_CHRONOLOGICAL_DATES_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_COPLANAR_POINTS = new OrekitMessages(env->getStaticObjectField(cls, "NON_COPLANAR_POINTS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_DIFFERENT_DATES_FOR_OBSERVATIONS = new OrekitMessages(env->getStaticObjectField(cls, "NON_DIFFERENT_DATES_FOR_OBSERVATIONS", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_DAY_NUMBER_IN_YEAR = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_DAY_NUMBER_IN_YEAR", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_GEOMAGNETIC_MODEL = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_GEOMAGNETIC_MODEL", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_HMS_TIME = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_HMS_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_MONTH = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_MONTH", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_TIME = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_TIME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_WEEK_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_WEEK_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NON_EXISTENT_YEAR_MONTH_DAY = new OrekitMessages(env->getStaticObjectField(cls, "NON_EXISTENT_YEAR_MONTH_DAY", "Lorg/orekit/errors/OrekitMessages;"));
          NON_PSEUDO_INERTIAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NON_PSEUDO_INERTIAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES = new OrekitMessages(env->getStaticObjectField(cls, "NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES", "Lorg/orekit/errors/OrekitMessages;"));
          NON_RESETABLE_STATE = new OrekitMessages(env->getStaticObjectField(cls, "NON_RESETABLE_STATE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_DIRECTORY = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_DIRECTORY", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_JPL_EPHEMERIDES_BINARY_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_JPL_EPHEMERIDES_BINARY_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_IERS_DATA_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_IERS_DATA_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_SEM_ALMANAC_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_SEM_ALMANAC_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_A_SUPPORTED_YUMA_ALMANAC_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_A_SUPPORTED_YUMA_ALMANAC_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_ATTITUDE_PROVIDERS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_ATTITUDE_PROVIDERS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_CACHED_NEIGHBORS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_CACHED_NEIGHBORS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_DATA = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_GNSS_FOR_DOP = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_GNSS_FOR_DOP", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_ENOUGH_PROPAGATORS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_ENOUGH_PROPAGATORS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_POSITIVE_SPACECRAFT_MASS = new OrekitMessages(env->getStaticObjectField(cls, "NOT_POSITIVE_SPACECRAFT_MASS", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_STRICTLY_POSITIVE = new OrekitMessages(env->getStaticObjectField(cls, "NOT_STRICTLY_POSITIVE", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_TLE_LINES = new OrekitMessages(env->getStaticObjectField(cls, "NOT_TLE_LINES", "Lorg/orekit/errors/OrekitMessages;"));
          NOT_VALID_INTERNATIONAL_DESIGNATOR = new OrekitMessages(env->getStaticObjectField(cls, "NOT_VALID_INTERNATIONAL_DESIGNATOR", "Lorg/orekit/errors/OrekitMessages;"));
          NO_CACHED_ENTRIES = new OrekitMessages(env->getStaticObjectField(cls, "NO_CACHED_ENTRIES", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_GENERATED = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_GENERATED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_DATA_LOADED_FOR_CELESTIAL_BODY = new OrekitMessages(env->getStaticObjectField(cls, "NO_DATA_LOADED_FOR_CELESTIAL_BODY", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EARTH_ORIENTATION_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "NO_EARTH_ORIENTATION_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EARTH_ORIENTATION_PARAMETERS_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_EARTH_ORIENTATION_PARAMETERS_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_EPOCH_IN_IONEX_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "NO_EPOCH_IN_IONEX_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_GRAVITY_FIELD_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_GRAVITY_FIELD_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_IERS_UTC_TAI_HISTORY_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_IERS_UTC_TAI_HISTORY_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_INTERPOLATOR_FOR_STATE_DEFINITION = new OrekitMessages(env->getStaticObjectField(cls, "NO_INTERPOLATOR_FOR_STATE_DEFINITION", "Lorg/orekit/errors/OrekitMessages;"));
          NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          NO_KLOBUCHAR_ALPHA_BETA_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_KLOBUCHAR_ALPHA_BETA_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_OCEAN_TIDE_DATA_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "NO_OCEAN_TIDE_DATA_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_PROPAGATOR_CONFIGURED = new OrekitMessages(env->getStaticObjectField(cls, "NO_PROPAGATOR_CONFIGURED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_REFERENCE_DATE_FOR_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "NO_REFERENCE_DATE_FOR_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SEM_ALMANAC_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_SEM_ALMANAC_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SOLAR_ACTIVITY_AT_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NO_SOLAR_ACTIVITY_AT_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_SUCH_ITRF_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NO_SUCH_ITRF_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TEC_DATA_IN_FILES_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TEC_DATA_IN_FILES_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_DATA_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_DATA_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_TLE_FOR_OBJECT = new OrekitMessages(env->getStaticObjectField(cls, "NO_TLE_FOR_OBJECT", "Lorg/orekit/errors/OrekitMessages;"));
          NO_UNSCENTED_TRANSFORM_CONFIGURED = new OrekitMessages(env->getStaticObjectField(cls, "NO_UNSCENTED_TRANSFORM_CONFIGURED", "Lorg/orekit/errors/OrekitMessages;"));
          NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          NO_YUMA_ALMANAC_AVAILABLE = new OrekitMessages(env->getStaticObjectField(cls, "NO_YUMA_ALMANAC_AVAILABLE", "Lorg/orekit/errors/OrekitMessages;"));
          NULL_ARGUMENT = new OrekitMessages(env->getStaticObjectField(cls, "NULL_ARGUMENT", "Lorg/orekit/errors/OrekitMessages;"));
          NULL_PARENT_FOR_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "NULL_PARENT_FOR_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS = new OrekitMessages(env->getStaticObjectField(cls, "OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS", "Lorg/orekit/errors/OrekitMessages;"));
          OCEAN_TIDE_LOAD_DEFORMATION_LIMITS = new OrekitMessages(env->getStaticObjectField(cls, "OCEAN_TIDE_LOAD_DEFORMATION_LIMITS", "Lorg/orekit/errors/OrekitMessages;"));
          ORBITS_MUS_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "ORBITS_MUS_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_AND_ATTITUDE_DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_AND_ATTITUDE_DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          ORBIT_TYPE_NOT_ALLOWED = new OrekitMessages(env->getStaticObjectField(cls, "ORBIT_TYPE_NOT_ALLOWED", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_BODY_EPHEMERIDES_DATE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_BODY_EPHEMERIDES_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_DATE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_DERIVATION_ORDER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_DERIVATION_ORDER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_SECONDS_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_SECONDS_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_SECONDS_NUMBER_DETAIL = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_SECONDS_NUMBER_DETAIL", "Lorg/orekit/errors/OrekitMessages;"));
          OUT_OF_RANGE_TIME_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "OUT_OF_RANGE_TIME_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_NOT_SET = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_NOT_SET", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET", "Lorg/orekit/errors/OrekitMessages;"));
          PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES = new OrekitMessages(env->getStaticObjectField(cls, "PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES", "Lorg/orekit/errors/OrekitMessages;"));
          POINT_INSIDE_ELLIPSOID = new OrekitMessages(env->getStaticObjectField(cls, "POINT_INSIDE_ELLIPSOID", "Lorg/orekit/errors/OrekitMessages;"));
          POLAR_TRAJECTORY = new OrekitMessages(env->getStaticObjectField(cls, "POLAR_TRAJECTORY", "Lorg/orekit/errors/OrekitMessages;"));
          POSITIVE_FLOW_RATE = new OrekitMessages(env->getStaticObjectField(cls, "POSITIVE_FLOW_RATE", "Lorg/orekit/errors/OrekitMessages;"));
          SATELLITE_COLLIDED_WITH_TARGET = new OrekitMessages(env->getStaticObjectField(cls, "SATELLITE_COLLIDED_WITH_TARGET", "Lorg/orekit/errors/OrekitMessages;"));
          SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          SINGULAR_JACOBIAN_FOR_ORBIT_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "SINGULAR_JACOBIAN_FOR_ORBIT_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          SOURCETABLE_PARSE_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "SOURCETABLE_PARSE_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INCOMPATIBLE_FILE_METADATA = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INCOMPATIBLE_FILE_METADATA", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INCOMPATIBLE_SATELLITE_MEDATADA = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INCOMPATIBLE_SATELLITE_MEDATADA", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_INVALID_HEADER_ENTRY = new OrekitMessages(env->getStaticObjectField(cls, "SP3_INVALID_HEADER_ENTRY", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_NUMBER_OF_EPOCH_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "SP3_NUMBER_OF_EPOCH_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_TOO_MANY_SATELLITES_FOR_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "SP3_TOO_MANY_SATELLITES_FOR_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          SP3_UNSUPPORTED_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "SP3_UNSUPPORTED_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_AND_COVARIANCE_DATES_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "STATE_AND_COVARIANCE_DATES_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH = new OrekitMessages(env->getStaticObjectField(cls, "STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_JACOBIAN_NOT_6X6 = new OrekitMessages(env->getStaticObjectField(cls, "STATE_JACOBIAN_NOT_6X6", "Lorg/orekit/errors/OrekitMessages;"));
          STATE_JACOBIAN_NOT_INITIALIZED = new OrekitMessages(env->getStaticObjectField(cls, "STATE_JACOBIAN_NOT_INITIALIZED", "Lorg/orekit/errors/OrekitMessages;"));
          STATION_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "STATION_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          STEC_INTEGRATION_DID_NOT_CONVERGE = new OrekitMessages(env->getStaticObjectField(cls, "STEC_INTEGRATION_DID_NOT_CONVERGE", "Lorg/orekit/errors/OrekitMessages;"));
          STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          STK_UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "STK_UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          STK_UNMAPPED_COORDINATE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "STK_UNMAPPED_COORDINATE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          STREAM_REQUIRES_NMEA_FIX = new OrekitMessages(env->getStaticObjectField(cls, "STREAM_REQUIRES_NMEA_FIX", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_CHECKSUM_ERROR = new OrekitMessages(env->getStaticObjectField(cls, "TLE_CHECKSUM_ERROR", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_INVALID_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "TLE_INVALID_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT = new OrekitMessages(env->getStaticObjectField(cls, "TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_DATA_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_DATA_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_LARGE_ORDER_FOR_GRAVITY_FIELD = new OrekitMessages(env->getStaticObjectField(cls, "TOO_LARGE_ORDER_FOR_GRAVITY_FIELD", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH = new OrekitMessages(env->getStaticObjectField(cls, "TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH", "Lorg/orekit/errors/OrekitMessages;"));
          TOO_SMALL_SCALE_FOR_PARAMETER = new OrekitMessages(env->getStaticObjectField(cls, "TOO_SMALL_SCALE_FOR_PARAMETER", "Lorg/orekit/errors/OrekitMessages;"));
          TRAJECTORY_INSIDE_BRILLOUIN_SPHERE = new OrekitMessages(env->getStaticObjectField(cls, "TRAJECTORY_INSIDE_BRILLOUIN_SPHERE", "Lorg/orekit/errors/OrekitMessages;"));
          TRAJECTORY_NOT_CROSSING_XZPLANE = new OrekitMessages(env->getStaticObjectField(cls, "TRAJECTORY_NOT_CROSSING_XZPLANE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_COMPUTE_TLE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_COMPUTE_TLE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_FIND_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_FIND_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_FIND_RESOURCE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_FIND_RESOURCE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_GENERATE_NEW_DATA_AFTER = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_GENERATE_NEW_DATA_AFTER", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_GENERATE_NEW_DATA_BEFORE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_GENERATE_NEW_DATA_BEFORE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_PARSE_ELEMENT_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_PARSE_ELEMENT_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_PARSE_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_PARSE_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNABLE_TO_READ_JPL_HEADER = new OrekitMessages(env->getStaticObjectField(cls, "UNABLE_TO_READ_JPL_HEADER", "Lorg/orekit/errors/OrekitMessages;"));
          UNDEFINED_ABSOLUTE_PVCOORDINATES = new OrekitMessages(env->getStaticObjectField(cls, "UNDEFINED_ABSOLUTE_PVCOORDINATES", "Lorg/orekit/errors/OrekitMessages;"));
          UNDEFINED_ORBIT = new OrekitMessages(env->getStaticObjectField(cls, "UNDEFINED_ORBIT", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_CONTENT_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_CONTENT_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_DATA_AFTER_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_DATA_AFTER_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_DATA_AT_LINE_IN_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_DATA_AT_LINE_IN_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_END_OF_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_END_OF_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_END_OF_FILE_AFTER_LINE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_END_OF_FILE_AFTER_LINE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_FORMAT_FOR_ILRS_FILE = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_FORMAT_FOR_ILRS_FILE", "Lorg/orekit/errors/OrekitMessages;"));
          UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH = new OrekitMessages(env->getStaticObjectField(cls, "UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH", "Lorg/orekit/errors/OrekitMessages;"));
          UNINITIALIZED_VALUE_FOR_KEY = new OrekitMessages(env->getStaticObjectField(cls, "UNINITIALIZED_VALUE_FOR_KEY", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_ADDITIONAL_STATE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_ADDITIONAL_STATE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_AUTHENTICATION_METHOD = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_AUTHENTICATION_METHOD", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_CARRIER_PHASE_CODE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_CARRIER_PHASE_CODE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_CLOCK_DATA_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_CLOCK_DATA_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_DATA_FORMAT = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_DATA_FORMAT", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_ENCODED_MESSAGE_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_ENCODED_MESSAGE_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_HOST = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_HOST", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_MONTH = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_MONTH", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_NAVIGATION_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_NAVIGATION_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_RINEX_FREQUENCY = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_RINEX_FREQUENCY", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_SATELLITE_ANTENNA_CODE = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_SATELLITE_ANTENNA_CODE", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_SATELLITE_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_SATELLITE_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_TIME_SYSTEM = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_TIME_SYSTEM", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_UNIT = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_UNIT", "Lorg/orekit/errors/OrekitMessages;"));
          UNKNOWN_UTC_ID = new OrekitMessages(env->getStaticObjectField(cls, "UNKNOWN_UTC_ID", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FILE_FORMAT = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FILE_FORMAT", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FILE_FORMAT_VERSION = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FILE_FORMAT_VERSION", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_FREQUENCY_FOR_ANTENNA = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_FREQUENCY_FOR_ANTENNA", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_LOCAL_ORBITAL_FRAME = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_LOCAL_ORBITAL_FRAME", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_PARAMETER_NAME = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_PARAMETER_NAME", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_TIME_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_TIME_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          UNSUPPORTED_TRANSFORM = new OrekitMessages(env->getStaticObjectField(cls, "UNSUPPORTED_TRANSFORM", "Lorg/orekit/errors/OrekitMessages;"));
          VALUE_NOT_FOUND = new OrekitMessages(env->getStaticObjectField(cls, "VALUE_NOT_FOUND", "Lorg/orekit/errors/OrekitMessages;"));
          VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE = new OrekitMessages(env->getStaticObjectField(cls, "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE", "Lorg/orekit/errors/OrekitMessages;"));
          VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED = new OrekitMessages(env->getStaticObjectField(cls, "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_COLUMNS_NUMBER = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_COLUMNS_NUMBER", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_DEGREE_OR_ORDER = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_DEGREE_OR_ORDER", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_EOP_INTERPOLATION_DEGREE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_EOP_INTERPOLATION_DEGREE", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_NB_COMPONENTS = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_NB_COMPONENTS", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_ORBIT_PARAMETERS_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_ORBIT_PARAMETERS_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          WRONG_PARSING_TYPE = new OrekitMessages(env->getStaticObjectField(cls, "WRONG_PARSING_TYPE", "Lorg/orekit/errors/OrekitMessages;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String OrekitMessages::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_4b51060c6b7ea981], a0.this$));
      }

      ::java::lang::String OrekitMessages::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_3cffd47377eca18a]));
      }

      OrekitMessages OrekitMessages::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return OrekitMessages(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a03c9bb7372453b6], a0.this$));
      }

      JArray< OrekitMessages > OrekitMessages::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< OrekitMessages >(env->callStaticObjectMethod(cls, mids$[mid_values_558c1f138f9d0ab9]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/errors/OrekitMessages$UTF8Control.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitMessages_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitMessages_of_(t_OrekitMessages *self, PyObject *args);
      static PyObject *t_OrekitMessages_getLocalizedString(t_OrekitMessages *self, PyObject *arg);
      static PyObject *t_OrekitMessages_getSourceString(t_OrekitMessages *self);
      static PyObject *t_OrekitMessages_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_OrekitMessages_values(PyTypeObject *type);
      static PyObject *t_OrekitMessages_get__sourceString(t_OrekitMessages *self, void *data);
      static PyObject *t_OrekitMessages_get__parameters_(t_OrekitMessages *self, void *data);
      static PyGetSetDef t_OrekitMessages__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitMessages, sourceString),
        DECLARE_GET_FIELD(t_OrekitMessages, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitMessages__methods_[] = {
        DECLARE_METHOD(t_OrekitMessages, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, of_, METH_VARARGS),
        DECLARE_METHOD(t_OrekitMessages, getLocalizedString, METH_O),
        DECLARE_METHOD(t_OrekitMessages, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_OrekitMessages, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_OrekitMessages, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitMessages)[] = {
        { Py_tp_methods, t_OrekitMessages__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OrekitMessages__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitMessages)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(OrekitMessages, t_OrekitMessages, OrekitMessages);
      PyObject *t_OrekitMessages::wrap_Object(const OrekitMessages& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages *self = (t_OrekitMessages *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OrekitMessages::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OrekitMessages::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OrekitMessages *self = (t_OrekitMessages *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OrekitMessages::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitMessages), &PY_TYPE_DEF(OrekitMessages), module, "OrekitMessages", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UTF8Control", make_descriptor(&PY_TYPE_DEF(OrekitMessages$UTF8Control)));
      }

      void t_OrekitMessages::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "class_", make_descriptor(OrekitMessages::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "wrapfn_", make_descriptor(t_OrekitMessages::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "boxfn_", make_descriptor(boxObject));
        env->getClass(OrekitMessages::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ADDITIONAL_STATE_NAME_ALREADY_IN_USE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ADDITIONAL_STATE_NAME_ALREADY_IN_USE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALMOST_CRITICALLY_INCLINED_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALMOST_CRITICALLY_INCLINED_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALMOST_EQUATORIAL_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALMOST_EQUATORIAL_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ALTITUDE_BELOW_ALLOWED_THRESHOLD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ALTITUDE_BELOW_ALLOWED_THRESHOLD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ANGLE_TYPE_NOT_SUPPORTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ANGLE_TYPE_NOT_SUPPORTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ATTEMPT_TO_GENERATE_MALFORMED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ATTEMPT_TO_GENERATE_MALFORMED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ATTITUDE_POINTING_LAW_DOES_NOT_POINT_TO_GROUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_LOF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_CHANGE_COVARIANCE_TYPE_IF_DEFINED_IN_NON_INERTIAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_COMPUTE_AIMING_AT_SINGULAR_POINT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_COMPUTE_LAGRANGIAN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_COMPUTE_LAGRANGIAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_ESTIMATE_PRECESSION_WITHOUT_PROPER_DERIVATIVES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_FIND_SATELLITE_IN_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_FIND_SATELLITE_IN_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_BOTH_TAU_AND_GAMMA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_BOTH_TAU_AND_GAMMA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_GNSS_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_GNSS_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_PARSE_SOURCETABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_PARSE_SOURCETABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CANNOT_START_PROPAGATION_FROM_INFINITY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CANNOT_START_PROPAGATION_FROM_INFINITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_INVALID_LENGTH_TIME_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_INVALID_LENGTH_TIME_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_INVALID_PREAMBLE_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_INVALID_PREAMBLE_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DATE_MISSING_AGENCY_EPOCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DATE_MISSING_AGENCY_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_DIFFERENT_LVLH_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_DIFFERENT_LVLH_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCOMPATIBLE_KEYS_BOTH_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCOMPATIBLE_KEYS_BOTH_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCOMPLETE_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCOMPLETE_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCONSISTENT_NUMBER_OF_ATTITUDE_STATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INCONSISTENT_TIME_SYSTEMS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INCONSISTENT_TIME_SYSTEMS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INVALID_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INVALID_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_INVALID_ROTATION_SEQUENCE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_INVALID_ROTATION_SEQUENCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_KEYWORD_NOT_ALLOWED_IN_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MANEUVER_MISSING_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MANEUVER_MISSING_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MANEUVER_UNITS_WRONG_NB_COMPONENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MISSING_KEYWORD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MISSING_KEYWORD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_MISSING_SENSOR_INDEX", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_MISSING_SENSOR_INDEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_SENSOR_INDEX_ALREADY_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_SENSOR_INDEX_ALREADY_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TDM_KEYWORD_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TDM_KEYWORD_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TDM_MISSING_RANGE_UNITS_CONVERTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TIME_SYSTEM_NOT_IMPLEMENTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_TIME_SYSTEM_NOT_READ_YET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_TIME_SYSTEM_NOT_READ_YET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNEXPECTED_KEYWORD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNEXPECTED_KEYWORD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_ATTITUDE_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_ATTITUDE_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_CONVENTIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_CONVENTIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_GM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_GM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNKNOWN_SPACECRAFT_MASS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNKNOWN_SPACECRAFT_MASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNSUPPORTED_ELEMENT_SET_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CCSDS_UNSUPPORTED_RETROGRADE_EQUINOCTIAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CLOCK_FILE_UNSUPPORTED_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CLOCK_FILE_UNSUPPORTED_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CONNECTION_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CONNECTION_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CORRUPTED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CORRUPTED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CPF_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CPF_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "CRD_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::CRD_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DATA_ROOT_DIRECTORY_DOES_NOT_EXIST", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DATA_ROOT_DIRECTORY_DOES_NOT_EXIST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIFFERENT_STATE_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIFFERENT_STATE_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIFFERENT_TIME_OF_CLOSEST_APPROACH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIFFERENT_TIME_OF_CLOSEST_APPROACH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DIMENSION_INCONSISTENT_WITH_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DIMENSION_INCONSISTENT_WITH_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_ECC_NO_NUMERICAL_AVERAGING_METHOD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_NEWCOMB_OPERATORS_COMPUTATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_NEWCOMB_OPERATORS_COMPUTATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_SPR_SHADOW_INCONSISTENT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_SPR_SHADOW_INCONSISTENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DSST_VMNS_COEFFICIENT_ERROR_MS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DSST_VMNS_COEFFICIENT_ERROR_MS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::DUPLICATED_GRAVITY_FIELD_COEFFICIENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "END_OF_ENCODED_MESSAGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::END_OF_ENCODED_MESSAGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "EVENT_DATE_TOO_CLOSE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::EVENT_DATE_TOO_CLOSE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "EXCEPTIONAL_DATA_CONTEXT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::EXCEPTIONAL_DATA_CONTEXT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FAILED_AUTHENTICATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FAILED_AUTHENTICATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FIND_ROOT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FIND_ROOT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAMES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAMES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ALREADY_ATTACHED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ALREADY_ATTACHED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ANCESTOR_OF_BOTH_FRAMES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ANCESTOR_OF_BOTH_FRAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_ANCESTOR_OF_NEITHER_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_ANCESTOR_OF_NEITHER_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_NOT_ATTACHED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_NOT_ATTACHED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FRAME_NO_NTH_ANCESTOR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FRAME_NO_NTH_ANCESTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "FUNCTION_NOT_IMPLEMENTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::FUNCTION_NOT_IMPLEMENTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "GNSS_PARITY_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::GNSS_PARITY_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "GRAVITY_FIELD_NORMALIZATION_UNDERFLOW", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::GRAVITY_FIELD_NORMALIZATION_UNDERFLOW)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HEADER_ALREADY_WRITTEN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HEADER_ALREADY_WRITTEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HEADER_NOT_WRITTEN", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HEADER_NOT_WRITTEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "HYPERBOLIC_ORBIT_NOT_HANDLED_AS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::HYPERBOLIC_ORBIT_NOT_HANDLED_AS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_FRAMES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_FRAMES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_FREQUENCIES_FOR_COMBINATION_OF_MEASUREMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPATIBLE_UNITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPATIBLE_UNITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCOMPLETE_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCOMPLETE_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_ASTRONOMICAL_UNIT_IN_FILES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_DATES_IN_IERS_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_DATES_IN_IERS_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_EARTH_MOON_RATIO_IN_FILES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_EARTH_MOON_RATIO_IN_FILES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_ELEMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_ELEMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_SATS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_SATS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_NUMBER_OF_TEC_MAPS_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SAMPLING_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SAMPLING_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INCONSISTENT_SELECTION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INCONSISTENT_SELECTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INERTIAL_FORCE_MODEL_MISSING", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INERTIAL_FORCE_MODEL_MISSING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INITIAL_MATRIX_AND_PARAMETERS_NUMBER_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INITIAL_STATE_NOT_SPECIFIED_FOR_ORBIT_PROPAGATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INTERNAL_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INTERNAL_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_GNSS_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_GNSS_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_MEASUREMENT_TYPES_FOR_COMBINATION_OF_MEASUREMENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_PARAMETER_RANGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_PARAMETER_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_RANGE_INDICATOR_IN_CRD_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_RANGE_INDICATOR_IN_CRD_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_SATELLITE_ID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_SATELLITE_ID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "INVALID_TYPE_FOR_FUNCTION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::INVALID_TYPE_FOR_FUNCTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "IRREGULAR_OR_INCOMPLETE_GRID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::IRREGULAR_OR_INCOMPLETE_GRID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ITRF_VERSIONS_PREFIX_ONLY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ITRF_VERSIONS_PREFIX_ONLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_AVAILABLE_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "KLOBUCHAR_ALPHA_BETA_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::KLOBUCHAR_ALPHA_BETA_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::METHOD_NOT_AVAILABLE_WITHOUT_CENTRAL_BODY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISMATCHED_FREQUENCIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISMATCHED_FREQUENCIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_EARTH_ORIENTATION_PARAMETERS_BETWEEN_DATES_GAP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_GRAVITY_FIELD_COEFFICIENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_SECOND_TLE_LINE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_SECOND_TLE_LINE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_SERIE_J_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_SERIE_J_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_STATION_DATA_FOR_EPOCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_STATION_DATA_FOR_EPOCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MISSING_VELOCITY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MISSING_VELOCITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MODIP_GRID_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MODIP_GRID_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MOUNPOINT_ALREADY_CONNECTED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MOUNPOINT_ALREADY_CONNECTED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MULTIPLE_INTERPOLATOR_USED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MULTIPLE_INTERPOLATOR_USED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "MULTIPLE_SHOOTING_UNDERCONSTRAINED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::MULTIPLE_SHOOTING_UNDERCONSTRAINED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NEITHER_DIRECTORY_NOR_ZIP_OR_JAR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NEITHER_DIRECTORY_NOR_ZIP_OR_JAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NEQUICK_F2_FM3_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NEQUICK_F2_FM3_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICALLY_SORTED_ENTRIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICALLY_SORTED_ENTRIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICAL_DATES_FOR_OBSERVATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_CHRONOLOGICAL_DATES_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_CHRONOLOGICAL_DATES_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_COPLANAR_POINTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_COPLANAR_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_DIFFERENT_DATES_FOR_OBSERVATIONS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_DIFFERENT_DATES_FOR_OBSERVATIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_DAY_NUMBER_IN_YEAR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_DAY_NUMBER_IN_YEAR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_GEOMAGNETIC_MODEL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_GEOMAGNETIC_MODEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_HMS_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_HMS_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_MONTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_MONTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_TIME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_TIME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_WEEK_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_WEEK_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_EXISTENT_YEAR_MONTH_DAY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_EXISTENT_YEAR_MONTH_DAY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_PSEUDO_INERTIAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_PSEUDO_INERTIAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_PSEUDO_INERTIAL_FRAME_NOT_SUITABLE_AS_REFERENCE_FOR_INERTIAL_FORCES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NON_RESETABLE_STATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NON_RESETABLE_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_DIRECTORY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_DIRECTORY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_JPL_EPHEMERIDES_BINARY_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_JPL_EPHEMERIDES_BINARY_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_MARSHALL_SOLAR_ACTIVITY_FUTURE_ESTIMATION_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_HATANAKA_COMPRESSED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_IERS_DATA_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_IERS_DATA_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_SEM_ALMANAC_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_SEM_ALMANAC_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_UNIX_COMPRESSED_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_A_SUPPORTED_YUMA_ALMANAC_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_A_SUPPORTED_YUMA_ALMANAC_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_ATTITUDE_PROVIDERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_ATTITUDE_PROVIDERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_CACHED_NEIGHBORS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_CACHED_NEIGHBORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_DATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_DATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_GNSS_FOR_DOP", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_GNSS_FOR_DOP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_ENOUGH_PROPAGATORS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_ENOUGH_PROPAGATORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_POSITIVE_SPACECRAFT_MASS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_POSITIVE_SPACECRAFT_MASS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_STRICTLY_POSITIVE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_STRICTLY_POSITIVE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_TLE_LINES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_TLE_LINES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NOT_VALID_INTERNATIONAL_DESIGNATOR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NOT_VALID_INTERNATIONAL_DESIGNATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_CACHED_ENTRIES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_CACHED_ENTRIES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_GENERATED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_GENERATED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_DATA_LOADED_FOR_CELESTIAL_BODY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_DATA_LOADED_FOR_CELESTIAL_BODY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EARTH_ORIENTATION_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EARTH_ORIENTATION_PARAMETERS_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EARTH_ORIENTATION_PARAMETERS_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_ENTRIES_IN_IERS_UTC_TAI_HISTORY_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_EPOCH_IN_IONEX_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_EPOCH_IN_IONEX_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_GRAVITY_FIELD_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_GRAVITY_FIELD_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_IERS_UTC_TAI_HISTORY_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_IERS_UTC_TAI_HISTORY_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_INTERPOLATOR_FOR_STATE_DEFINITION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_INTERPOLATOR_FOR_STATE_DEFINITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_JPL_EPHEMERIDES_BINARY_FILES_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_KLOBUCHAR_ALPHA_BETA_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_KLOBUCHAR_ALPHA_BETA_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_LATITUDE_LONGITUDE_BONDARIES_IN_IONEX_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_OCEAN_TIDE_DATA_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_OCEAN_TIDE_DATA_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_PROPAGATOR_CONFIGURED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_PROPAGATOR_CONFIGURED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_REFERENCE_DATE_FOR_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_REFERENCE_DATE_FOR_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SEM_ALMANAC_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SEM_ALMANAC_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SOLAR_ACTIVITY_AT_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SOLAR_ACTIVITY_AT_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_SUCH_ITRF_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_SUCH_ITRF_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TEC_DATA_IN_FILES_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TEC_DATA_IN_FILES_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_DATA_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_DATA_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_FOR_LAUNCH_YEAR_NUMBER_PIECE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_TLE_FOR_OBJECT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_TLE_FOR_OBJECT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_UNSCENTED_TRANSFORM_CONFIGURED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_UNSCENTED_TRANSFORM_CONFIGURED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_VIENNA_ACOEF_OR_ZENITH_DELAY_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NO_YUMA_ALMANAC_AVAILABLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NO_YUMA_ALMANAC_AVAILABLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NULL_ARGUMENT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NULL_ARGUMENT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "NULL_PARENT_FOR_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::NULL_PARENT_FOR_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OCEAN_TIDE_DATA_DEGREE_ORDER_LIMITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OCEAN_TIDE_LOAD_DEFORMATION_LIMITS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OCEAN_TIDE_LOAD_DEFORMATION_LIMITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBITS_MUS_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBITS_MUS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_AND_ATTITUDE_DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_AND_ATTITUDE_DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_ANOMALY_OUT_OF_HYPERBOLIC_RANGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_A_E_MISMATCH_WITH_CONIC_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "ORBIT_TYPE_NOT_ALLOWED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::ORBIT_TYPE_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_BODY_EPHEMERIDES_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_BODY_EPHEMERIDES_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_DERIVATION_ORDER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_DERIVATION_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_AFTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_EPHEMERIDES_DATE_BEFORE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_SECONDS_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_SECONDS_NUMBER_DETAIL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_SECONDS_NUMBER_DETAIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "OUT_OF_RANGE_TIME_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::OUT_OF_RANGE_TIME_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_NOT_SET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_NOT_SET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_PERIODS_HAS_ALREADY_BEEN_SET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::PARAMETER_WITH_SEVERAL_ESTIMATED_VALUES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POINT_INSIDE_ELLIPSOID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POINT_INSIDE_ELLIPSOID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POLAR_TRAJECTORY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POLAR_TRAJECTORY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "POSITIVE_FLOW_RATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::POSITIVE_FLOW_RATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SATELLITE_COLLIDED_WITH_TARGET", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SATELLITE_COLLIDED_WITH_TARGET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SEVERAL_REFERENCE_DATES_IN_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SINGULAR_JACOBIAN_FOR_ORBIT_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SINGULAR_JACOBIAN_FOR_ORBIT_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SOURCETABLE_PARSE_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SOURCETABLE_PARSE_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INCOMPATIBLE_FILE_METADATA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INCOMPATIBLE_FILE_METADATA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INCOMPATIBLE_SATELLITE_MEDATADA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INCOMPATIBLE_SATELLITE_MEDATADA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_INVALID_HEADER_ENTRY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_INVALID_HEADER_ENTRY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_NUMBER_OF_EPOCH_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_NUMBER_OF_EPOCH_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_TOO_MANY_SATELLITES_FOR_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_TOO_MANY_SATELLITES_FOR_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "SP3_UNSUPPORTED_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::SP3_UNSUPPORTED_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_AND_COVARIANCE_DATES_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_AND_COVARIANCE_DATES_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_AND_PARAMETERS_JACOBIANS_ROWS_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_JACOBIAN_NOT_6X6", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_JACOBIAN_NOT_6X6)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATE_JACOBIAN_NOT_INITIALIZED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATE_JACOBIAN_NOT_INITIALIZED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STATION_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STATION_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STEC_INTEGRATION_DID_NOT_CONVERGE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STEC_INTEGRATION_DID_NOT_CONVERGE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_INVALID_OR_UNSUPPORTED_COORDINATE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STK_UNMAPPED_COORDINATE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STK_UNMAPPED_COORDINATE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "STREAM_REQUIRES_NMEA_FIX", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::STREAM_REQUIRES_NMEA_FIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_CHECKSUM_ERROR", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_CHECKSUM_ERROR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_INVALID_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_INVALID_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TLE_LINES_DO_NOT_REFER_TO_SAME_OBJECT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_DATA_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_DATA_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_DEGREE_FOR_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_ECCENTRICITY_FOR_PROPAGATION_MODEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_LARGE_ORDER_FOR_GRAVITY_FIELD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_LARGE_ORDER_FOR_GRAVITY_FIELD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_SHORT_TRANSITION_TIME_FOR_ATTITUDES_SWITCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TOO_SMALL_SCALE_FOR_PARAMETER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TOO_SMALL_SCALE_FOR_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TRAJECTORY_INSIDE_BRILLOUIN_SPHERE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TRAJECTORY_INSIDE_BRILLOUIN_SPHERE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "TRAJECTORY_NOT_CROSSING_XZPLANE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::TRAJECTORY_NOT_CROSSING_XZPLANE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_BROUWER_LYDDANE_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_DSST_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_ECKSTEIN_HECHLER_MEAN_PARAMETERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_HYPERBOLIC_ECCENTRIC_ANOMALY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_COMPUTE_TLE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_COMPUTE_TLE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_FIND_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_FIND_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_FIND_RESOURCE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_FIND_RESOURCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_GENERATE_NEW_DATA_AFTER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_AFTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_GENERATE_NEW_DATA_BEFORE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_GENERATE_NEW_DATA_BEFORE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_PARSE_ELEMENT_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_PARSE_ELEMENT_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_PARSE_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_PARSE_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNABLE_TO_READ_JPL_HEADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNABLE_TO_READ_JPL_HEADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNDEFINED_ABSOLUTE_PVCOORDINATES", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNDEFINED_ABSOLUTE_PVCOORDINATES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNDEFINED_ORBIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNDEFINED_ORBIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_CONTENT_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_CONTENT_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_DATA_AFTER_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_DATA_AFTER_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_DATA_AT_LINE_IN_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_DATA_AT_LINE_IN_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_END_OF_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_END_OF_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_END_OF_FILE_AFTER_LINE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_END_OF_FILE_AFTER_LINE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_FILE_FORMAT_ERROR_FOR_LOADER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_FORMAT_FOR_ILRS_FILE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_FORMAT_FOR_ILRS_FILE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNEXPECTED_TWO_ELEVATION_VALUES_FOR_ONE_AZIMUTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNINITIALIZED_VALUE_FOR_KEY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNINITIALIZED_VALUE_FOR_KEY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_ADDITIONAL_STATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_ADDITIONAL_STATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_AUTHENTICATION_METHOD", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_AUTHENTICATION_METHOD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_CARRIER_PHASE_CODE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_CARRIER_PHASE_CODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_CLOCK_DATA_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_CLOCK_DATA_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_DATA_FORMAT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_DATA_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_ENCODED_MESSAGE_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_ENCODED_MESSAGE_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_HOST", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_HOST)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_MONTH", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_MONTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_NAVIGATION_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_NAVIGATION_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_RINEX_FREQUENCY", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_RINEX_FREQUENCY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_SATELLITE_ANTENNA_CODE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_SATELLITE_ANTENNA_CODE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_SATELLITE_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_SATELLITE_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_TIME_SYSTEM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_TIME_SYSTEM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_UNIT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_UNIT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNKNOWN_UTC_ID", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNKNOWN_UTC_ID)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FILE_FORMAT", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FILE_FORMAT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FILE_FORMAT_VERSION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FILE_FORMAT_VERSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_FREQUENCY_FOR_ANTENNA", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_FREQUENCY_FOR_ANTENNA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_LOCAL_ORBITAL_FRAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_LOCAL_ORBITAL_FRAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_PARAMETER_NAME", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_PARAMETER_NAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_TIME_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_TIME_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "UNSUPPORTED_TRANSFORM", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::UNSUPPORTED_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VALUE_NOT_FOUND", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VALUE_NOT_FOUND)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_AVAILABLE_FOR_DATE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::VIENNA_ACOEF_OR_ZENITH_DELAY_NOT_LOADED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_COLUMNS_NUMBER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_COLUMNS_NUMBER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_DEGREE_OR_ORDER", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_DEGREE_OR_ORDER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_EOP_INTERPOLATION_DEGREE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_EOP_INTERPOLATION_DEGREE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_INTERPOLATOR_DEFINED_FOR_STATE_INTERPOLATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_NB_COMPONENTS", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_NB_COMPONENTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_ORBIT_PARAMETERS_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_ORBIT_PARAMETERS_TYPE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitMessages), "WRONG_PARSING_TYPE", make_descriptor(t_OrekitMessages::wrap_Object(*OrekitMessages::WRONG_PARSING_TYPE)));
      }

      static PyObject *t_OrekitMessages_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitMessages::initializeClass, 1)))
          return NULL;
        return t_OrekitMessages::wrap_Object(OrekitMessages(((t_OrekitMessages *) arg)->object.this$));
      }
      static PyObject *t_OrekitMessages_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitMessages::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OrekitMessages_of_(t_OrekitMessages *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OrekitMessages_getLocalizedString(t_OrekitMessages *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_OrekitMessages_getSourceString(t_OrekitMessages *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_OrekitMessages_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        OrekitMessages result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::errors::OrekitMessages::valueOf(a0));
          return t_OrekitMessages::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_OrekitMessages_values(PyTypeObject *type)
      {
        JArray< OrekitMessages > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::errors::OrekitMessages::values());
        return JArray<jobject>(result.this$).wrap(t_OrekitMessages::wrap_jobject);
      }
      static PyObject *t_OrekitMessages_get__parameters_(t_OrekitMessages *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OrekitMessages_get__sourceString(t_OrekitMessages *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealVectorChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealVectorChangingVisitor::class$ = NULL;
      jmethodID *RealVectorChangingVisitor::mids$ = NULL;
      bool RealVectorChangingVisitor::live$ = false;

      jclass RealVectorChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealVectorChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_557b8123390d8d0c] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_3796b665437eba81] = env->getMethodID(cls, "start", "(III)V");
          mids$[mid_visit_77f9e227e4cf04b4] = env->getMethodID(cls, "visit", "(ID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealVectorChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_557b8123390d8d0c]);
      }

      void RealVectorChangingVisitor::start(jint a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_start_3796b665437eba81], a0, a1, a2);
      }

      jdouble RealVectorChangingVisitor::visit(jint a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_77f9e227e4cf04b4], a0, a1);
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
      static PyObject *t_RealVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealVectorChangingVisitor_end(t_RealVectorChangingVisitor *self);
      static PyObject *t_RealVectorChangingVisitor_start(t_RealVectorChangingVisitor *self, PyObject *args);
      static PyObject *t_RealVectorChangingVisitor_visit(t_RealVectorChangingVisitor *self, PyObject *args);

      static PyMethodDef t_RealVectorChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealVectorChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealVectorChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealVectorChangingVisitor)[] = {
        { Py_tp_methods, t_RealVectorChangingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealVectorChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealVectorChangingVisitor, t_RealVectorChangingVisitor, RealVectorChangingVisitor);

      void t_RealVectorChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealVectorChangingVisitor), &PY_TYPE_DEF(RealVectorChangingVisitor), module, "RealVectorChangingVisitor", 0);
      }

      void t_RealVectorChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "class_", make_descriptor(RealVectorChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "wrapfn_", make_descriptor(t_RealVectorChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealVectorChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealVectorChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealVectorChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealVectorChangingVisitor::wrap_Object(RealVectorChangingVisitor(((t_RealVectorChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealVectorChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealVectorChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealVectorChangingVisitor_end(t_RealVectorChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealVectorChangingVisitor_start(t_RealVectorChangingVisitor *self, PyObject *args)
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

      static PyObject *t_RealVectorChangingVisitor_visit(t_RealVectorChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(result = self->object.visit(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DateConsumer::class$ = NULL;
            jmethodID *ParseToken$DateConsumer::mids$ = NULL;
            bool ParseToken$DateConsumer::live$ = false;

            jclass ParseToken$DateConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_20affcbd28542333] = env->getMethodID(cls, "accept", "(Lorg/orekit/time/AbsoluteDate;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DateConsumer::accept(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_20affcbd28542333], a0.this$);
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
            static PyObject *t_ParseToken$DateConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DateConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DateConsumer_accept(t_ParseToken$DateConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DateConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DateConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DateConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DateConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DateConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DateConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DateConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DateConsumer, t_ParseToken$DateConsumer, ParseToken$DateConsumer);

            void t_ParseToken$DateConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DateConsumer), &PY_TYPE_DEF(ParseToken$DateConsumer), module, "ParseToken$DateConsumer", 0);
            }

            void t_ParseToken$DateConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "class_", make_descriptor(ParseToken$DateConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "wrapfn_", make_descriptor(t_ParseToken$DateConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DateConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DateConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DateConsumer::wrap_Object(ParseToken$DateConsumer(((t_ParseToken$DateConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DateConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DateConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DateConsumer_accept(t_ParseToken$DateConsumer *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
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
#include "org/orekit/attitudes/LofOffsetPointing.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *LofOffsetPointing::class$ = NULL;
      jmethodID *LofOffsetPointing::mids$ = NULL;
      bool LofOffsetPointing::live$ = false;

      jclass LofOffsetPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/LofOffsetPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_894041d766a78972] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/BodyShape;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_85bb0a19efdadc1d] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_5c74bfcf2d42825a] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTargetPV_ee00ab612436435b] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_9e0119a6fef31431] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LofOffsetPointing::LofOffsetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::BodyShape & a1, const ::org::orekit::attitudes::AttitudeProvider & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_894041d766a78972, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      ::org::orekit::attitudes::FieldAttitude LofOffsetPointing::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude LofOffsetPointing::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LofOffsetPointing::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_85bb0a19efdadc1d], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LofOffsetPointing::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_5c74bfcf2d42825a], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates LofOffsetPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ee00ab612436435b], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates LofOffsetPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_9e0119a6fef31431], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_LofOffsetPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LofOffsetPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LofOffsetPointing_init_(t_LofOffsetPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LofOffsetPointing_getAttitude(t_LofOffsetPointing *self, PyObject *args);
      static PyObject *t_LofOffsetPointing_getAttitudeRotation(t_LofOffsetPointing *self, PyObject *args);
      static PyObject *t_LofOffsetPointing_getTargetPV(t_LofOffsetPointing *self, PyObject *args);

      static PyMethodDef t_LofOffsetPointing__methods_[] = {
        DECLARE_METHOD(t_LofOffsetPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffsetPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LofOffsetPointing, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_LofOffsetPointing, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_LofOffsetPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LofOffsetPointing)[] = {
        { Py_tp_methods, t_LofOffsetPointing__methods_ },
        { Py_tp_init, (void *) t_LofOffsetPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LofOffsetPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(LofOffsetPointing, t_LofOffsetPointing, LofOffsetPointing);

      void t_LofOffsetPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(LofOffsetPointing), &PY_TYPE_DEF(LofOffsetPointing), module, "LofOffsetPointing", 0);
      }

      void t_LofOffsetPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "class_", make_descriptor(LofOffsetPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "wrapfn_", make_descriptor(t_LofOffsetPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LofOffsetPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LofOffsetPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LofOffsetPointing::initializeClass, 1)))
          return NULL;
        return t_LofOffsetPointing::wrap_Object(LofOffsetPointing(((t_LofOffsetPointing *) arg)->object.this$));
      }
      static PyObject *t_LofOffsetPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LofOffsetPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LofOffsetPointing_init_(t_LofOffsetPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::BodyShape a1((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
        LofOffsetPointing object((jobject) NULL);

        if (!parseArgs(args, "kkkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = LofOffsetPointing(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LofOffsetPointing_getAttitude(t_LofOffsetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(LofOffsetPointing), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_LofOffsetPointing_getAttitudeRotation(t_LofOffsetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(LofOffsetPointing), (PyObject *) self, "getAttitudeRotation", args, 2);
      }

      static PyObject *t_LofOffsetPointing_getTargetPV(t_LofOffsetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations.h"
#include "org/orekit/propagation/integration/FieldStateMapper.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/orekit/propagation/PropagationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonFieldAbstractIntegratedPropagator::class$ = NULL;
        jmethodID *PythonFieldAbstractIntegratedPropagator::mids$ = NULL;
        bool PythonFieldAbstractIntegratedPropagator::live$ = false;

        jclass PythonFieldAbstractIntegratedPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonFieldAbstractIntegratedPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d00ce4881929b1dd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_createMapper_ad7c2ac9dfe2008b] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getMainStateEquations_c822d3b1a2fa150a] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAbstractIntegratedPropagator::PythonFieldAbstractIntegratedPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_d00ce4881929b1dd, a0.this$, a1.this$, a2.this$)) {}

        void PythonFieldAbstractIntegratedPropagator::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonFieldAbstractIntegratedPropagator::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonFieldAbstractIntegratedPropagator::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_of_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args);
        static int t_PythonFieldAbstractIntegratedPropagator_init_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_finalize(t_PythonFieldAbstractIntegratedPropagator *self);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_pythonExtension(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args);
        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5);
        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__self(t_PythonFieldAbstractIntegratedPropagator *self, void *data);
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__parameters_(t_PythonFieldAbstractIntegratedPropagator *self, void *data);
        static PyGetSetDef t_PythonFieldAbstractIntegratedPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAbstractIntegratedPropagator, self),
          DECLARE_GET_FIELD(t_PythonFieldAbstractIntegratedPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAbstractIntegratedPropagator__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAbstractIntegratedPropagator, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAbstractIntegratedPropagator)[] = {
          { Py_tp_methods, t_PythonFieldAbstractIntegratedPropagator__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAbstractIntegratedPropagator_init_ },
          { Py_tp_getset, t_PythonFieldAbstractIntegratedPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAbstractIntegratedPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(PythonFieldAbstractIntegratedPropagator, t_PythonFieldAbstractIntegratedPropagator, PythonFieldAbstractIntegratedPropagator);
        PyObject *t_PythonFieldAbstractIntegratedPropagator::wrap_Object(const PythonFieldAbstractIntegratedPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractIntegratedPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractIntegratedPropagator *self = (t_PythonFieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAbstractIntegratedPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAbstractIntegratedPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAbstractIntegratedPropagator *self = (t_PythonFieldAbstractIntegratedPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAbstractIntegratedPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAbstractIntegratedPropagator), &PY_TYPE_DEF(PythonFieldAbstractIntegratedPropagator), module, "PythonFieldAbstractIntegratedPropagator", 1);
        }

        void t_PythonFieldAbstractIntegratedPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "class_", make_descriptor(PythonFieldAbstractIntegratedPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "wrapfn_", make_descriptor(t_PythonFieldAbstractIntegratedPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAbstractIntegratedPropagator), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAbstractIntegratedPropagator::initializeClass);
          JNINativeMethod methods[] = {
            { "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;", (void *) t_PythonFieldAbstractIntegratedPropagator_createMapper0 },
            { "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;", (void *) t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAbstractIntegratedPropagator::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAbstractIntegratedPropagator::wrap_Object(PythonFieldAbstractIntegratedPropagator(((t_PythonFieldAbstractIntegratedPropagator *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAbstractIntegratedPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_of_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAbstractIntegratedPropagator_init_(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::PropagationType a2((jobject) NULL);
          PyTypeObject **p2;
          PythonFieldAbstractIntegratedPropagator object((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
          {
            INT_CALL(object = PythonFieldAbstractIntegratedPropagator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_finalize(t_PythonFieldAbstractIntegratedPropagator *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_pythonExtension(t_PythonFieldAbstractIntegratedPropagator *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_createMapper0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jobject a5)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldStateMapper value((jobject) NULL);
          PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
          PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
          PyObject *o2 = ::org::orekit::orbits::t_OrbitType::wrap_Object(::org::orekit::orbits::OrbitType(a2));
          PyObject *o3 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a3));
          PyObject *o4 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a4));
          PyObject *o5 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a5));
          PyObject *result = PyObject_CallMethod(obj, "createMapper", "OOOOOO", o0, o1, o2, o3, o4, o5);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          Py_DECREF(o4);
          Py_DECREF(o5);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldStateMapper::initializeClass, &value))
          {
            throwTypeError("createMapper", result);
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

        static jobject JNICALL t_PythonFieldAbstractIntegratedPropagator_getMainStateEquations1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::ode::t_FieldODEIntegrator::wrap_Object(::org::hipparchus::ode::FieldODEIntegrator(a0));
          PyObject *result = PyObject_CallMethod(obj, "getMainStateEquations", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator$MainStateEquations::initializeClass, &value))
          {
            throwTypeError("getMainStateEquations", result);
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

        static void JNICALL t_PythonFieldAbstractIntegratedPropagator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAbstractIntegratedPropagator::mids$[PythonFieldAbstractIntegratedPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__self(t_PythonFieldAbstractIntegratedPropagator *self, void *data)
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
        static PyObject *t_PythonFieldAbstractIntegratedPropagator_get__parameters_(t_PythonFieldAbstractIntegratedPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/io/Serializable.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeShiftable.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *Orbit::class$ = NULL;
      jmethodID *Orbit::mids$ = NULL;
      bool Orbit::live$ = false;

      jclass Orbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/Orbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addKeplerContribution_9dda16418cc4ed80] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_557b8123390d8d0c] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_557b8123390d8d0c] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_557b8123390d8d0c] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_557b8123390d8d0c] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_557b8123390d8d0c] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_557b8123390d8d0c] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_557b8123390d8d0c] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_557b8123390d8d0c] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getJacobianWrtCartesian_aa7929b83a23041a] = env->getMethodID(cls, "getJacobianWrtCartesian", "(Lorg/orekit/orbits/PositionAngleType;[[D)V");
          mids$[mid_getJacobianWrtParameters_aa7929b83a23041a] = env->getMethodID(cls, "getJacobianWrtParameters", "(Lorg/orekit/orbits/PositionAngleType;[[D)V");
          mids$[mid_getKeplerianMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getKeplerianMeanMotion", "()D");
          mids$[mid_getKeplerianPeriod_557b8123390d8d0c] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
          mids$[mid_getLE_557b8123390d8d0c] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_557b8123390d8d0c] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_557b8123390d8d0c] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_557b8123390d8d0c] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_557b8123390d8d0c] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_557b8123390d8d0c] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getMeanAnomalyDotWrtA_557b8123390d8d0c] = env->getMethodID(cls, "getMeanAnomalyDotWrtA", "()D");
          mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
          mids$[mid_getPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_8cf7b972bef1e4d8] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPosition_f88961cca75a2c0a] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_8386213426308de8] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_89b302893bdbe1f1] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_isElliptical_89b302893bdbe1f1] = env->getMethodID(cls, "isElliptical", "()Z");
          mids$[mid_shiftedBy_47d1046ffc445a6a] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;");
          mids$[mid_initPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_f88961cca75a2c0a] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");
          mids$[mid_hasNonKeplerianAcceleration_e5f60d6bef0a7056] = env->getStaticMethodID(cls, "hasNonKeplerianAcceleration", "(Lorg/orekit/utils/PVCoordinates;D)Z");
          mids$[mid_fillHalfRow_35a858a1cd56e7a6] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_82e1f2418fed1b12] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_7855c71cae34f146] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_bece720cf4bc073f] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_f04896460335f754] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");
          mids$[mid_fillHalfRow_206aff45ea364c5d] = env->getStaticMethodID(cls, "fillHalfRow", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[DI)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void Orbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_9dda16418cc4ed80], a0.this$, a1, a2.this$);
      }

      jdouble Orbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_557b8123390d8d0c]);
      }

      jdouble Orbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_557b8123390d8d0c]);
      }

      ::org::orekit::time::AbsoluteDate Orbit::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jdouble Orbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_557b8123390d8d0c]);
      }

      jdouble Orbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_557b8123390d8d0c]);
      }

      jdouble Orbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_557b8123390d8d0c]);
      }

      jdouble Orbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_557b8123390d8d0c]);
      }

      jdouble Orbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_557b8123390d8d0c]);
      }

      jdouble Orbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_557b8123390d8d0c]);
      }

      ::org::orekit::frames::Frame Orbit::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      jdouble Orbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_557b8123390d8d0c]);
      }

      jdouble Orbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_557b8123390d8d0c]);
      }

      jdouble Orbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_557b8123390d8d0c]);
      }

      jdouble Orbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_557b8123390d8d0c]);
      }

      jdouble Orbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_557b8123390d8d0c]);
      }

      jdouble Orbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_557b8123390d8d0c]);
      }

      void Orbit::getJacobianWrtCartesian(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtCartesian_aa7929b83a23041a], a0.this$, a1.this$);
      }

      void Orbit::getJacobianWrtParameters(const ::org::orekit::orbits::PositionAngleType & a0, const JArray< JArray< jdouble > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobianWrtParameters_aa7929b83a23041a], a0.this$, a1.this$);
      }

      jdouble Orbit::getKeplerianMeanMotion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianMeanMotion_557b8123390d8d0c]);
      }

      jdouble Orbit::getKeplerianPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_557b8123390d8d0c]);
      }

      jdouble Orbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_557b8123390d8d0c]);
      }

      jdouble Orbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_557b8123390d8d0c]);
      }

      jdouble Orbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_557b8123390d8d0c]);
      }

      jdouble Orbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_557b8123390d8d0c]);
      }

      jdouble Orbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_557b8123390d8d0c]);
      }

      jdouble Orbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_557b8123390d8d0c]);
      }

      jdouble Orbit::getMeanAnomalyDotWrtA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMeanAnomalyDotWrtA_557b8123390d8d0c]);
      }

      jdouble Orbit::getMu() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_daf15abc21907508]));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_8cf7b972bef1e4d8], a0.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates Orbit::getPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_17742a9a6655bdb1], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Orbit::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_f88961cca75a2c0a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Orbit::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8386213426308de8], a0.this$));
      }

      ::org::orekit::orbits::OrbitType Orbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_2cea2a2cb3e02091]));
      }

      jboolean Orbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_89b302893bdbe1f1]);
      }

      jboolean Orbit::isElliptical() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isElliptical_89b302893bdbe1f1]);
      }

      Orbit Orbit::shiftedBy(jdouble a0) const
      {
        return Orbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_47d1046ffc445a6a], a0));
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
      static PyObject *t_Orbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Orbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Orbit_addKeplerContribution(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getA(t_Orbit *self);
      static PyObject *t_Orbit_getADot(t_Orbit *self);
      static PyObject *t_Orbit_getDate(t_Orbit *self);
      static PyObject *t_Orbit_getE(t_Orbit *self);
      static PyObject *t_Orbit_getEDot(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEx(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialExDot(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEy(t_Orbit *self);
      static PyObject *t_Orbit_getEquinoctialEyDot(t_Orbit *self);
      static PyObject *t_Orbit_getFrame(t_Orbit *self);
      static PyObject *t_Orbit_getHx(t_Orbit *self);
      static PyObject *t_Orbit_getHxDot(t_Orbit *self);
      static PyObject *t_Orbit_getHy(t_Orbit *self);
      static PyObject *t_Orbit_getHyDot(t_Orbit *self);
      static PyObject *t_Orbit_getI(t_Orbit *self);
      static PyObject *t_Orbit_getIDot(t_Orbit *self);
      static PyObject *t_Orbit_getJacobianWrtCartesian(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getJacobianWrtParameters(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getKeplerianMeanMotion(t_Orbit *self);
      static PyObject *t_Orbit_getKeplerianPeriod(t_Orbit *self);
      static PyObject *t_Orbit_getLE(t_Orbit *self);
      static PyObject *t_Orbit_getLEDot(t_Orbit *self);
      static PyObject *t_Orbit_getLM(t_Orbit *self);
      static PyObject *t_Orbit_getLMDot(t_Orbit *self);
      static PyObject *t_Orbit_getLv(t_Orbit *self);
      static PyObject *t_Orbit_getLvDot(t_Orbit *self);
      static PyObject *t_Orbit_getMeanAnomalyDotWrtA(t_Orbit *self);
      static PyObject *t_Orbit_getMu(t_Orbit *self);
      static PyObject *t_Orbit_getPVCoordinates(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getPosition(t_Orbit *self, PyObject *args);
      static PyObject *t_Orbit_getType(t_Orbit *self);
      static PyObject *t_Orbit_hasDerivatives(t_Orbit *self);
      static PyObject *t_Orbit_isElliptical(t_Orbit *self);
      static PyObject *t_Orbit_shiftedBy(t_Orbit *self, PyObject *arg);
      static PyObject *t_Orbit_get__a(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__aDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__date(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__e(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__eDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__elliptical(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEx(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialExDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEy(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__equinoctialEyDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__frame(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hx(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hxDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hy(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__hyDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__i(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__iDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__keplerianMeanMotion(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__keplerianPeriod(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lE(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lEDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lM(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lMDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lv(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__lvDot(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__meanAnomalyDotWrtA(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__mu(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__pVCoordinates(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__position(t_Orbit *self, void *data);
      static PyObject *t_Orbit_get__type(t_Orbit *self, void *data);
      static PyGetSetDef t_Orbit__fields_[] = {
        DECLARE_GET_FIELD(t_Orbit, a),
        DECLARE_GET_FIELD(t_Orbit, aDot),
        DECLARE_GET_FIELD(t_Orbit, date),
        DECLARE_GET_FIELD(t_Orbit, e),
        DECLARE_GET_FIELD(t_Orbit, eDot),
        DECLARE_GET_FIELD(t_Orbit, elliptical),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEx),
        DECLARE_GET_FIELD(t_Orbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEy),
        DECLARE_GET_FIELD(t_Orbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_Orbit, frame),
        DECLARE_GET_FIELD(t_Orbit, hx),
        DECLARE_GET_FIELD(t_Orbit, hxDot),
        DECLARE_GET_FIELD(t_Orbit, hy),
        DECLARE_GET_FIELD(t_Orbit, hyDot),
        DECLARE_GET_FIELD(t_Orbit, i),
        DECLARE_GET_FIELD(t_Orbit, iDot),
        DECLARE_GET_FIELD(t_Orbit, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_Orbit, keplerianPeriod),
        DECLARE_GET_FIELD(t_Orbit, lE),
        DECLARE_GET_FIELD(t_Orbit, lEDot),
        DECLARE_GET_FIELD(t_Orbit, lM),
        DECLARE_GET_FIELD(t_Orbit, lMDot),
        DECLARE_GET_FIELD(t_Orbit, lv),
        DECLARE_GET_FIELD(t_Orbit, lvDot),
        DECLARE_GET_FIELD(t_Orbit, meanAnomalyDotWrtA),
        DECLARE_GET_FIELD(t_Orbit, mu),
        DECLARE_GET_FIELD(t_Orbit, pVCoordinates),
        DECLARE_GET_FIELD(t_Orbit, position),
        DECLARE_GET_FIELD(t_Orbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Orbit__methods_[] = {
        DECLARE_METHOD(t_Orbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Orbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Orbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getA, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getADot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getDate, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getE, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialExDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getEquinoctialEyDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHx, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHxDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHy, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getHyDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getI, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getIDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getJacobianWrtCartesian, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getJacobianWrtParameters, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLE, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLEDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLM, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLMDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLv, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getLvDot, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getMeanAnomalyDotWrtA, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getMu, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_Orbit, getType, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, hasDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, isElliptical, METH_NOARGS),
        DECLARE_METHOD(t_Orbit, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Orbit)[] = {
        { Py_tp_methods, t_Orbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Orbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Orbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Orbit, t_Orbit, Orbit);

      void t_Orbit::install(PyObject *module)
      {
        installType(&PY_TYPE(Orbit), &PY_TYPE_DEF(Orbit), module, "Orbit", 0);
      }

      void t_Orbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "class_", make_descriptor(Orbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "wrapfn_", make_descriptor(t_Orbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Orbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Orbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Orbit::initializeClass, 1)))
          return NULL;
        return t_Orbit::wrap_Object(Orbit(((t_Orbit *) arg)->object.this$));
      }
      static PyObject *t_Orbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Orbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Orbit_addKeplerContribution(t_Orbit *self, PyObject *args)
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

        PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", args);
        return NULL;
      }

      static PyObject *t_Orbit_getA(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getADot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getADot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getDate(t_Orbit *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_Orbit_getE(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEx(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialExDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEy(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getEquinoctialEyDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getFrame(t_Orbit *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_Orbit_getHx(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHxDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHxDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHy(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getHyDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getHyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getI(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getI());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getIDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getIDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getJacobianWrtCartesian(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobianWrtCartesian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtCartesian", args);
        return NULL;
      }

      static PyObject *t_Orbit_getJacobianWrtParameters(t_Orbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< jdouble > > a1((jobject) NULL);

        if (!parseArgs(args, "K[[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1))
        {
          OBJ_CALL(self->object.getJacobianWrtParameters(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobianWrtParameters", args);
        return NULL;
      }

      static PyObject *t_Orbit_getKeplerianMeanMotion(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getKeplerianPeriod(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLE(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLEDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLM(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLMDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLMDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLv(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLv());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getLvDot(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLvDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getMeanAnomalyDotWrtA(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMeanAnomalyDotWrtA());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getMu(t_Orbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMu());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Orbit_getPVCoordinates(t_Orbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_Orbit_getPosition(t_Orbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_Orbit_getType(t_Orbit *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_Orbit_hasDerivatives(t_Orbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasDerivatives());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Orbit_isElliptical(t_Orbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isElliptical());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Orbit_shiftedBy(t_Orbit *self, PyObject *arg)
      {
        jdouble a0;
        Orbit result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_Orbit::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_Orbit_get__a(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__aDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__date(t_Orbit *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__e(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__eDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__elliptical(t_Orbit *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isElliptical());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Orbit_get__equinoctialEx(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialExDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialEy(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__equinoctialEyDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__frame(t_Orbit *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__hx(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hxDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hy(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__hyDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__i(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__iDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__keplerianMeanMotion(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__keplerianPeriod(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lE(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lEDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lM(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lMDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lv(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__lvDot(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__meanAnomalyDotWrtA(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMeanAnomalyDotWrtA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__mu(t_Orbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMu());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Orbit_get__pVCoordinates(t_Orbit *self, void *data)
      {
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__position(t_Orbit *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_Orbit_get__type(t_Orbit *self, void *data)
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
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalGradientConverter::class$ = NULL;
        jmethodID *AbstractAnalyticalGradientConverter::mids$ = NULL;
        bool AbstractAnalyticalGradientConverter::live$ = false;

        jclass AbstractAnalyticalGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getPropagator_733af95624ce3e55] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator;");
            mids$[mid_getState_381b3e011cde018d] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator AbstractAnalyticalGradientConverter::getPropagator(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::analysis::differentiation::Gradient > & a1) const
        {
          return ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_733af95624ce3e55], a0.this$, a1.this$));
        }

        ::org::orekit::propagation::FieldSpacecraftState AbstractAnalyticalGradientConverter::getState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_381b3e011cde018d]));
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
        static PyObject *t_AbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalGradientConverter_getPropagator(t_AbstractAnalyticalGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalGradientConverter_getState(t_AbstractAnalyticalGradientConverter *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalGradientConverter_get__state(t_AbstractAnalyticalGradientConverter *self, void *data);
        static PyGetSetDef t_AbstractAnalyticalGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalGradientConverter, state),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalGradientConverter__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalGradientConverter, getState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalGradientConverter)[] = {
          { Py_tp_methods, t_AbstractAnalyticalGradientConverter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalGradientConverter, t_AbstractAnalyticalGradientConverter, AbstractAnalyticalGradientConverter);

        void t_AbstractAnalyticalGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalGradientConverter), &PY_TYPE_DEF(AbstractAnalyticalGradientConverter), module, "AbstractAnalyticalGradientConverter", 0);
        }

        void t_AbstractAnalyticalGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "class_", make_descriptor(AbstractAnalyticalGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "wrapfn_", make_descriptor(t_AbstractAnalyticalGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalGradientConverter::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalGradientConverter::wrap_Object(AbstractAnalyticalGradientConverter(((t_AbstractAnalyticalGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_getPropagator(t_AbstractAnalyticalGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::analysis::differentiation::Gradient > a1((jobject) NULL);
          ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator result((jobject) NULL);

          if (!parseArgs(args, "K[k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPropagator(a0, a1));
            return ::org::orekit::propagation::analytical::t_FieldAbstractAnalyticalPropagator::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_getState(t_AbstractAnalyticalGradientConverter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalGradientConverter), (PyObject *) self, "getState", args, 2);
        }

        static PyObject *t_AbstractAnalyticalGradientConverter_get__state(t_AbstractAnalyticalGradientConverter *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractSingleFrequencyCombination::class$ = NULL;
          jmethodID *AbstractSingleFrequencyCombination::mids$ = NULL;
          bool AbstractSingleFrequencyCombination::live$ = false;

          jclass AbstractSingleFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractSingleFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_82c5de1a9cc4c5da] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_combine_54b5aea6b6555487] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationData;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getCombinedValue_2268d18be49a6087] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet AbstractSingleFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_82c5de1a9cc4c5da], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationData AbstractSingleFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationData(env->callObjectMethod(this$, mids$[mid_combine_54b5aea6b6555487], a0.this$, a1.this$));
          }

          ::java::lang::String AbstractSingleFrequencyCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
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
          static PyObject *t_AbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractSingleFrequencyCombination_combine(t_AbstractSingleFrequencyCombination *self, PyObject *args);
          static PyObject *t_AbstractSingleFrequencyCombination_getName(t_AbstractSingleFrequencyCombination *self);
          static PyObject *t_AbstractSingleFrequencyCombination_get__name(t_AbstractSingleFrequencyCombination *self, void *data);
          static PyGetSetDef t_AbstractSingleFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractSingleFrequencyCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractSingleFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, combine, METH_VARARGS),
            DECLARE_METHOD(t_AbstractSingleFrequencyCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractSingleFrequencyCombination)[] = {
            { Py_tp_methods, t_AbstractSingleFrequencyCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractSingleFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractSingleFrequencyCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractSingleFrequencyCombination, t_AbstractSingleFrequencyCombination, AbstractSingleFrequencyCombination);

          void t_AbstractSingleFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractSingleFrequencyCombination), &PY_TYPE_DEF(AbstractSingleFrequencyCombination), module, "AbstractSingleFrequencyCombination", 0);
          }

          void t_AbstractSingleFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "class_", make_descriptor(AbstractSingleFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "wrapfn_", make_descriptor(t_AbstractSingleFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSingleFrequencyCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractSingleFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractSingleFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_AbstractSingleFrequencyCombination::wrap_Object(AbstractSingleFrequencyCombination(((t_AbstractSingleFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_AbstractSingleFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractSingleFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractSingleFrequencyCombination_combine(t_AbstractSingleFrequencyCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.combine(a0));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
                ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationData result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.combine(a0, a1));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationData::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "combine", args);
            return NULL;
          }

          static PyObject *t_AbstractSingleFrequencyCombination_getName(t_AbstractSingleFrequencyCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractSingleFrequencyCombination_get__name(t_AbstractSingleFrequencyCombination *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/text/NumberFormat.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldVector3D::class$ = NULL;
          jmethodID *FieldVector3D::mids$ = NULL;
          bool FieldVector3D::live$ = false;

          jclass FieldVector3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldVector3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5d9c9afaca2e497c] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_4ea57b8955861cbb] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_bc0c6bda4a59e038] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_4142f6924f1f81fb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_52bcf1c5b3478cb0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_b38c15e176684020] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_0f27b0249abd6c51] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_bca4ff95970563f9] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_6f0634e3ee51bb3e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_7b969e4da6cc4136] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_8edd1eff6f15a7c2] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_d90e2ced59b917c6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_2c9e38b3c432a2c9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_7274e5e957723949] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_89931b09a784eeb2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_f7558bf7dd953508] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_add_588ed0f09550adb9] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_3d90e30d4cb13513] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_01f8748861408877] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_9f1e70a913d9854e] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_6ad46ee21af765b8] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_5cca2623551fee28] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_angle_fb1db732a84425d6] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_e6c9453d30211335] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_b464f829e6652655] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_blendArithmeticallyWith_9516ec66c1860ea9] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_588ed0f09550adb9] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_3d90e30d4cb13513] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_b3579c1d2113481e] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_e57ac48e00d242d1] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_78da4381685dcd75] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_distance_b2798c156647508e] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_a22927126b45d148] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_fb1db732a84425d6] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_e6c9453d30211335] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_b464f829e6652655] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_b2798c156647508e] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_a22927126b45d148] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_fb1db732a84425d6] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_e6c9453d30211335] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_b464f829e6652655] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_b2798c156647508e] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_a22927126b45d148] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_fb1db732a84425d6] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_e6c9453d30211335] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_b464f829e6652655] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_b2798c156647508e] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_a22927126b45d148] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_fb1db732a84425d6] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_e6c9453d30211335] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_b464f829e6652655] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_b2798c156647508e] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_a22927126b45d148] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_fb1db732a84425d6] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_b464f829e6652655] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_e6c9453d30211335] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_613c8f46c659f636] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDelta_613c8f46c659f636] = env->getMethodID(cls, "getDelta", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMinusI_3a465a0c08d1dbdf] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getMinusJ_3a465a0c08d1dbdf] = env->getStaticMethodID(cls, "getMinusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getMinusK_3a465a0c08d1dbdf] = env->getStaticMethodID(cls, "getMinusK", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNaN_3a465a0c08d1dbdf] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNegativeInfinity_3a465a0c08d1dbdf] = env->getStaticMethodID(cls, "getNegativeInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNorm_613c8f46c659f636] = env->getMethodID(cls, "getNorm", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNorm1_613c8f46c659f636] = env->getMethodID(cls, "getNorm1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormInf_613c8f46c659f636] = env->getMethodID(cls, "getNormInf", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormSq_613c8f46c659f636] = env->getMethodID(cls, "getNormSq", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getPlusI_3a465a0c08d1dbdf] = env->getStaticMethodID(cls, "getPlusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPlusJ_3a465a0c08d1dbdf] = env->getStaticMethodID(cls, "getPlusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPlusK_3a465a0c08d1dbdf] = env->getStaticMethodID(cls, "getPlusK", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPositiveInfinity_3a465a0c08d1dbdf] = env->getStaticMethodID(cls, "getPositiveInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getX_613c8f46c659f636] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getY_613c8f46c659f636] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZ_613c8f46c659f636] = env->getMethodID(cls, "getZ", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZero_3a465a0c08d1dbdf] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_2d64addf4c3391d9] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_normalize_2d64addf4c3391d9] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_orthogonal_2d64addf4c3391d9] = env->getMethodID(cls, "orthogonal", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_scalarMultiply_9465a023313b1d29] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_scalarMultiply_68e9ce281b70d410] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_588ed0f09550adb9] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_3d90e30d4cb13513] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_01f8748861408877] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_6ad46ee21af765b8] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_9f1e70a913d9854e] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_5cca2623551fee28] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_toArray_41762fd4377ff26e] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_8d9667e91d8ffa97] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");
              mids$[mid_toVector3D_f88961cca75a2c0a] = env->getMethodID(cls, "toVector3D", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldVector3D::FieldVector3D(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d9c9afaca2e497c, a0.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ea57b8955861cbb, a0, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc0c6bda4a59e038, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4142f6924f1f81fb, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_52bcf1c5b3478cb0, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b38c15e176684020, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f27b0249abd6c51, a0.this$, a1.this$, a2.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bca4ff95970563f9, a0, a1.this$, a2, a3.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6f0634e3ee51bb3e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b969e4da6cc4136, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3, jdouble a4, const FieldVector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8edd1eff6f15a7c2, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d90e2ced59b917c6, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c9e38b3c432a2c9, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3, jdouble a4, const FieldVector3D & a5, jdouble a6, const FieldVector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7274e5e957723949, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector3D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldVector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89931b09a784eeb2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f7558bf7dd953508, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector3D FieldVector3D::add(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_588ed0f09550adb9], a0.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_3d90e30d4cb13513], a0.this$));
          }

          FieldVector3D FieldVector3D::add(jdouble a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_01f8748861408877], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_9f1e70a913d9854e], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::add(jdouble a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_6ad46ee21af765b8], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_5cca2623551fee28], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_fb1db732a84425d6], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_e6c9453d30211335], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_b464f829e6652655], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::blendArithmeticallyWith(const FieldVector3D & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_9516ec66c1860ea9], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_588ed0f09550adb9], a0.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_3d90e30d4cb13513], a0.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_b3579c1d2113481e], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_e57ac48e00d242d1], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_78da4381685dcd75], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_b2798c156647508e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_a22927126b45d148], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_fb1db732a84425d6], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_e6c9453d30211335], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_b464f829e6652655], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_b2798c156647508e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_a22927126b45d148], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_fb1db732a84425d6], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_e6c9453d30211335], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_b464f829e6652655], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_b2798c156647508e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_a22927126b45d148], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_fb1db732a84425d6], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_e6c9453d30211335], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_b464f829e6652655], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_b2798c156647508e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_a22927126b45d148], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_fb1db732a84425d6], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_e6c9453d30211335], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_b464f829e6652655], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_b2798c156647508e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_a22927126b45d148], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_fb1db732a84425d6], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_b464f829e6652655], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_e6c9453d30211335], a0.this$, a1.this$));
          }

          jboolean FieldVector3D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getAlpha() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getDelta() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDelta_613c8f46c659f636]));
          }

          FieldVector3D FieldVector3D::getMinusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_3a465a0c08d1dbdf], a0.this$));
          }

          FieldVector3D FieldVector3D::getMinusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusJ_3a465a0c08d1dbdf], a0.this$));
          }

          FieldVector3D FieldVector3D::getMinusK(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusK_3a465a0c08d1dbdf], a0.this$));
          }

          FieldVector3D FieldVector3D::getNaN(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getNaN_3a465a0c08d1dbdf], a0.this$));
          }

          FieldVector3D FieldVector3D::getNegativeInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getNegativeInfinity_3a465a0c08d1dbdf], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNorm() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNorm1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm1_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNormInf() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormInf_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNormSq() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormSq_613c8f46c659f636]));
          }

          FieldVector3D FieldVector3D::getPlusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusI_3a465a0c08d1dbdf], a0.this$));
          }

          FieldVector3D FieldVector3D::getPlusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusJ_3a465a0c08d1dbdf], a0.this$));
          }

          FieldVector3D FieldVector3D::getPlusK(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusK_3a465a0c08d1dbdf], a0.this$));
          }

          FieldVector3D FieldVector3D::getPositiveInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPositiveInfinity_3a465a0c08d1dbdf], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getX() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getY() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getY_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getZ() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getZ_613c8f46c659f636]));
          }

          FieldVector3D FieldVector3D::getZero(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getZero_3a465a0c08d1dbdf], a0.this$));
          }

          jint FieldVector3D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
          }

          jboolean FieldVector3D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
          }

          jboolean FieldVector3D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
          }

          FieldVector3D FieldVector3D::negate() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_negate_2d64addf4c3391d9]));
          }

          FieldVector3D FieldVector3D::normalize() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_normalize_2d64addf4c3391d9]));
          }

          FieldVector3D FieldVector3D::orthogonal() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_orthogonal_2d64addf4c3391d9]));
          }

          FieldVector3D FieldVector3D::scalarMultiply(jdouble a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_9465a023313b1d29], a0));
          }

          FieldVector3D FieldVector3D::scalarMultiply(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_68e9ce281b70d410], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_588ed0f09550adb9], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_3d90e30d4cb13513], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(jdouble a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_01f8748861408877], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(jdouble a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_6ad46ee21af765b8], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_9f1e70a913d9854e], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_5cca2623551fee28], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldVector3D::toArray() const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_41762fd4377ff26e]));
          }

          ::java::lang::String FieldVector3D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
          }

          ::java::lang::String FieldVector3D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_8d9667e91d8ffa97], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D FieldVector3D::toVector3D() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toVector3D_f88961cca75a2c0a]));
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
          static PyObject *t_FieldVector3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_of_(t_FieldVector3D *self, PyObject *args);
          static int t_FieldVector3D_init_(t_FieldVector3D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldVector3D_add(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_blendArithmeticallyWith(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_crossProduct(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_crossProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distance(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distance1(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distanceInf(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distanceSq(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_dotProduct(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_dotProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_equals(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_getAlpha(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getDelta(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getMinusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getMinusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getMinusK(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNaN(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNegativeInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNorm(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNorm1(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNormInf(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNormSq(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getPlusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPlusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPlusK(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPositiveInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getX(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getY(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getZ(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getZero(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_hashCode(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_isInfinite(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_isNaN(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_negate(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_normalize(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_orthogonal(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_scalarMultiply(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_subtract(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_toArray(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_toString(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_toVector3D(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_get__alpha(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__delta(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__infinite(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__naN(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__norm(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__norm1(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__normInf(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__normSq(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__x(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__y(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__z(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__parameters_(t_FieldVector3D *self, void *data);
          static PyGetSetDef t_FieldVector3D__fields_[] = {
            DECLARE_GET_FIELD(t_FieldVector3D, alpha),
            DECLARE_GET_FIELD(t_FieldVector3D, delta),
            DECLARE_GET_FIELD(t_FieldVector3D, infinite),
            DECLARE_GET_FIELD(t_FieldVector3D, naN),
            DECLARE_GET_FIELD(t_FieldVector3D, norm),
            DECLARE_GET_FIELD(t_FieldVector3D, norm1),
            DECLARE_GET_FIELD(t_FieldVector3D, normInf),
            DECLARE_GET_FIELD(t_FieldVector3D, normSq),
            DECLARE_GET_FIELD(t_FieldVector3D, x),
            DECLARE_GET_FIELD(t_FieldVector3D, y),
            DECLARE_GET_FIELD(t_FieldVector3D, z),
            DECLARE_GET_FIELD(t_FieldVector3D, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldVector3D__methods_[] = {
            DECLARE_METHOD(t_FieldVector3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, add, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, blendArithmeticallyWith, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, crossProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distance1, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distanceInf, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distanceSq, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, dotProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, dotProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getDelta, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getMinusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getMinusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getMinusK, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNaN, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNegativeInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getPlusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPlusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPlusK, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPositiveInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getX, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getY, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getZ, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getZero, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, negate, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, normalize, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, orthogonal, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, scalarMultiply, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, toVector3D, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldVector3D)[] = {
            { Py_tp_methods, t_FieldVector3D__methods_ },
            { Py_tp_init, (void *) t_FieldVector3D_init_ },
            { Py_tp_getset, t_FieldVector3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldVector3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldVector3D, t_FieldVector3D, FieldVector3D);
          PyObject *t_FieldVector3D::wrap_Object(const FieldVector3D& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector3D::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector3D *self = (t_FieldVector3D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldVector3D::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector3D::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector3D *self = (t_FieldVector3D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldVector3D::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldVector3D), &PY_TYPE_DEF(FieldVector3D), module, "FieldVector3D", 0);
          }

          void t_FieldVector3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "class_", make_descriptor(FieldVector3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "wrapfn_", make_descriptor(t_FieldVector3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldVector3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldVector3D::initializeClass, 1)))
              return NULL;
            return t_FieldVector3D::wrap_Object(FieldVector3D(((t_FieldVector3D *) arg)->object.this$));
          }
          static PyObject *t_FieldVector3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldVector3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldVector3D_of_(t_FieldVector3D *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldVector3D_init_(t_FieldVector3D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_, &a4, &a5, &p5, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                FieldVector3D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_, &a4, &a5, &p5, t_FieldVector3D::parameters_, &a6, &a7, &p7, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                FieldVector3D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector3D::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_FieldVector3D_add(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_angle(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_blendArithmeticallyWith(t_FieldVector3D *self, PyObject *args)
          {
            FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK", FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
              return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_crossProduct(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_crossProduct_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "crossProduct_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance1(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance1_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceInf(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceSq(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_dotProduct(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_dotProduct_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "dotProduct_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_equals(t_FieldVector3D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldVector3D_getAlpha(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getDelta(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getDelta());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getMinusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusI(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getMinusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusJ(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getMinusK(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusK(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusK", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNaN(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getNaN(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNaN", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNegativeInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getNegativeInfinity(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNegativeInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNorm(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNorm1(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNormInf(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormInf());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNormSq(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormSq());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getPlusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusI(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPlusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusJ(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPlusK(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusK(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusK", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPositiveInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPositiveInfinity(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPositiveInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getX(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getX());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getY(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getY());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getZ(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getZ());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getZero(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getZero(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getZero", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_hashCode(t_FieldVector3D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldVector3D_isInfinite(t_FieldVector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector3D_isNaN(t_FieldVector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector3D_negate(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_normalize(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.normalize());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_orthogonal(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.orthogonal());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_scalarMultiply(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_subtract(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_toArray(t_FieldVector3D *self)
          {
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          static PyObject *t_FieldVector3D_toString(t_FieldVector3D *self, PyObject *args)
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

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldVector3D_toVector3D(t_FieldVector3D *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.toVector3D());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          static PyObject *t_FieldVector3D_get__parameters_(t_FieldVector3D *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldVector3D_get__alpha(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__delta(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getDelta());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__infinite(t_FieldVector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector3D_get__naN(t_FieldVector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector3D_get__norm(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__norm1(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__normInf(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormInf());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__normSq(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormSq());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__x(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getX());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__y(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getY());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__z(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getZ());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/TilesCache.h"
#include "org/orekit/rugged/raster/TileFactory.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *TilesCache::class$ = NULL;
        jmethodID *TilesCache::mids$ = NULL;
        bool TilesCache::live$ = false;

        jclass TilesCache::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/TilesCache");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a53081228fe4d259] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileFactory;Lorg/orekit/rugged/raster/TileUpdater;I)V");
            mids$[mid_getTile_6238b85368cd8424] = env->getMethodID(cls, "getTile", "(DD)Lorg/orekit/rugged/raster/Tile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TilesCache::TilesCache(const ::org::orekit::rugged::raster::TileFactory & a0, const ::org::orekit::rugged::raster::TileUpdater & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a53081228fe4d259, a0.this$, a1.this$, a2)) {}

        ::org::orekit::rugged::raster::Tile TilesCache::getTile(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile(env->callObjectMethod(this$, mids$[mid_getTile_6238b85368cd8424], a0, a1));
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
      namespace raster {
        static PyObject *t_TilesCache_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TilesCache_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TilesCache_of_(t_TilesCache *self, PyObject *args);
        static int t_TilesCache_init_(t_TilesCache *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TilesCache_getTile(t_TilesCache *self, PyObject *args);
        static PyObject *t_TilesCache_get__parameters_(t_TilesCache *self, void *data);
        static PyGetSetDef t_TilesCache__fields_[] = {
          DECLARE_GET_FIELD(t_TilesCache, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TilesCache__methods_[] = {
          DECLARE_METHOD(t_TilesCache, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TilesCache, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TilesCache, of_, METH_VARARGS),
          DECLARE_METHOD(t_TilesCache, getTile, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TilesCache)[] = {
          { Py_tp_methods, t_TilesCache__methods_ },
          { Py_tp_init, (void *) t_TilesCache_init_ },
          { Py_tp_getset, t_TilesCache__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TilesCache)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TilesCache, t_TilesCache, TilesCache);
        PyObject *t_TilesCache::wrap_Object(const TilesCache& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TilesCache::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TilesCache *self = (t_TilesCache *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TilesCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TilesCache::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TilesCache *self = (t_TilesCache *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TilesCache::install(PyObject *module)
        {
          installType(&PY_TYPE(TilesCache), &PY_TYPE_DEF(TilesCache), module, "TilesCache", 0);
        }

        void t_TilesCache::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "class_", make_descriptor(TilesCache::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "wrapfn_", make_descriptor(t_TilesCache::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TilesCache), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TilesCache_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TilesCache::initializeClass, 1)))
            return NULL;
          return t_TilesCache::wrap_Object(TilesCache(((t_TilesCache *) arg)->object.this$));
        }
        static PyObject *t_TilesCache_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TilesCache::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TilesCache_of_(t_TilesCache *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TilesCache_init_(t_TilesCache *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::rugged::raster::TileFactory a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::raster::TileUpdater a1((jobject) NULL);
          jint a2;
          TilesCache object((jobject) NULL);

          if (!parseArgs(args, "KkI", ::org::orekit::rugged::raster::TileFactory::initializeClass, ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &p0, ::org::orekit::rugged::raster::t_TileFactory::parameters_, &a1, &a2))
          {
            INT_CALL(object = TilesCache(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TilesCache_getTile(t_TilesCache *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getTile(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::rugged::raster::t_Tile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getTile", args);
          return NULL;
        }
        static PyObject *t_TilesCache_get__parameters_(t_TilesCache *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/HashSet.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Cloneable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *HashSet::class$ = NULL;
    jmethodID *HashSet::mids$ = NULL;
    bool HashSet::live$ = false;

    jclass HashSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/HashSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_3abde0be9b9c9773] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_init$_7c1037ab599ac362] = env->getMethodID(cls, "<init>", "(IF)V");
        mids$[mid_add_221e8e85cb385209] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_e661fe3ba2fafb22] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_contains_221e8e85cb385209] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_isEmpty_89b302893bdbe1f1] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_834a3801c426326d] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_remove_221e8e85cb385209] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_size_412668abc8d889e9] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_0a89e3b18808f850] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    HashSet::HashSet() : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    HashSet::HashSet(jint a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

    HashSet::HashSet(const ::java::util::Collection & a0) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_3abde0be9b9c9773, a0.this$)) {}

    HashSet::HashSet(jint a0, jfloat a1) : ::java::util::AbstractSet(env->newObject(initializeClass, &mids$, mid_init$_7c1037ab599ac362, a0, a1)) {}

    jboolean HashSet::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_221e8e85cb385209], a0.this$);
    }

    void HashSet::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
    }

    ::java::lang::Object HashSet::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_e661fe3ba2fafb22]));
    }

    jboolean HashSet::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_221e8e85cb385209], a0.this$);
    }

    jboolean HashSet::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_89b302893bdbe1f1]);
    }

    ::java::util::Iterator HashSet::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_834a3801c426326d]));
    }

    jboolean HashSet::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_221e8e85cb385209], a0.this$);
    }

    jint HashSet::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_412668abc8d889e9]);
    }

    ::java::util::Spliterator HashSet::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_0a89e3b18808f850]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_HashSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_HashSet_of_(t_HashSet *self, PyObject *args);
    static int t_HashSet_init_(t_HashSet *self, PyObject *args, PyObject *kwds);
    static PyObject *t_HashSet_add(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_clear(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_clone(t_HashSet *self);
    static PyObject *t_HashSet_contains(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_isEmpty(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_iterator(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_remove(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_size(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_spliterator(t_HashSet *self, PyObject *args);
    static PyObject *t_HashSet_get__empty(t_HashSet *self, void *data);
    static PyObject *t_HashSet_get__parameters_(t_HashSet *self, void *data);
    static PyGetSetDef t_HashSet__fields_[] = {
      DECLARE_GET_FIELD(t_HashSet, empty),
      DECLARE_GET_FIELD(t_HashSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_HashSet__methods_[] = {
      DECLARE_METHOD(t_HashSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_HashSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, add, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, clear, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, clone, METH_NOARGS),
      DECLARE_METHOD(t_HashSet, contains, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, iterator, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, remove, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, size, METH_VARARGS),
      DECLARE_METHOD(t_HashSet, spliterator, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(HashSet)[] = {
      { Py_tp_methods, t_HashSet__methods_ },
      { Py_tp_init, (void *) t_HashSet_init_ },
      { Py_tp_getset, t_HashSet__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_HashSet *)) get_generic_iterator< t_HashSet >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(HashSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractSet),
      NULL
    };

    DEFINE_TYPE(HashSet, t_HashSet, HashSet);
    PyObject *t_HashSet::wrap_Object(const HashSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_HashSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashSet *self = (t_HashSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_HashSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_HashSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_HashSet *self = (t_HashSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_HashSet::install(PyObject *module)
    {
      installType(&PY_TYPE(HashSet), &PY_TYPE_DEF(HashSet), module, "HashSet", 0);
    }

    void t_HashSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "class_", make_descriptor(HashSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "wrapfn_", make_descriptor(t_HashSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(HashSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_HashSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, HashSet::initializeClass, 1)))
        return NULL;
      return t_HashSet::wrap_Object(HashSet(((t_HashSet *) arg)->object.this$));
    }
    static PyObject *t_HashSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, HashSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_HashSet_of_(t_HashSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_HashSet_init_(t_HashSet *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          HashSet object((jobject) NULL);

          INT_CALL(object = HashSet());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = HashSet(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = HashSet(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          jint a0;
          jfloat a1;
          HashSet object((jobject) NULL);

          if (!parseArgs(args, "IF", &a0, &a1))
          {
            INT_CALL(object = HashSet(a0, a1));
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

    static PyObject *t_HashSet_add(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_HashSet_clear(t_HashSet *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_HashSet_clone(t_HashSet *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_HashSet_contains(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_HashSet_isEmpty(t_HashSet *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_HashSet_iterator(t_HashSet *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_HashSet_remove(t_HashSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_HashSet_size(t_HashSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_HashSet_spliterator(t_HashSet *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(HashSet), (PyObject *) self, "spliterator", args, 2);
    }
    static PyObject *t_HashSet_get__parameters_(t_HashSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_HashSet_get__empty(t_HashSet *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *ReferenceEllipsoid::class$ = NULL;
        jmethodID *ReferenceEllipsoid::mids$ = NULL;
        bool ReferenceEllipsoid::live$ = false;

        jclass ReferenceEllipsoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/ReferenceEllipsoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_dc7300a4d004d885] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;DD)V");
            mids$[mid_getC2n0_69cfb132c661aca4] = env->getMethodID(cls, "getC2n0", "(I)D");
            mids$[mid_getEllipsoid_576f0b44e8384336] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getGM_557b8123390d8d0c] = env->getMethodID(cls, "getGM", "()D");
            mids$[mid_getGrs80_039ba5d4c7fe1b86] = env->getStaticMethodID(cls, "getGrs80", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers2003_039ba5d4c7fe1b86] = env->getStaticMethodID(cls, "getIers2003", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers2010_039ba5d4c7fe1b86] = env->getStaticMethodID(cls, "getIers2010", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIers96_039ba5d4c7fe1b86] = env->getStaticMethodID(cls, "getIers96", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getNormalGravity_7e960cd6eee376d8] = env->getMethodID(cls, "getNormalGravity", "(D)D");
            mids$[mid_getPolarRadius_557b8123390d8d0c] = env->getMethodID(cls, "getPolarRadius", "()D");
            mids$[mid_getSpin_557b8123390d8d0c] = env->getMethodID(cls, "getSpin", "()D");
            mids$[mid_getWgs84_039ba5d4c7fe1b86] = env->getStaticMethodID(cls, "getWgs84", "(Lorg/orekit/frames/Frame;)Lorg/orekit/models/earth/ReferenceEllipsoid;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ReferenceEllipsoid::ReferenceEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2, jdouble a3, jdouble a4) : ::org::orekit::bodies::OneAxisEllipsoid(env->newObject(initializeClass, &mids$, mid_init$_dc7300a4d004d885, a0, a1, a2.this$, a3, a4)) {}

        jdouble ReferenceEllipsoid::getC2n0(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getC2n0_69cfb132c661aca4], a0);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getEllipsoid() const
        {
          return ReferenceEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_576f0b44e8384336]));
        }

        jdouble ReferenceEllipsoid::getGM() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGM_557b8123390d8d0c]);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getGrs80(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getGrs80_039ba5d4c7fe1b86], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers2003(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers2003_039ba5d4c7fe1b86], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers2010(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers2010_039ba5d4c7fe1b86], a0.this$));
        }

        ReferenceEllipsoid ReferenceEllipsoid::getIers96(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getIers96_039ba5d4c7fe1b86], a0.this$));
        }

        jdouble ReferenceEllipsoid::getNormalGravity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNormalGravity_7e960cd6eee376d8], a0);
        }

        jdouble ReferenceEllipsoid::getPolarRadius() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPolarRadius_557b8123390d8d0c]);
        }

        jdouble ReferenceEllipsoid::getSpin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSpin_557b8123390d8d0c]);
        }

        ReferenceEllipsoid ReferenceEllipsoid::getWgs84(const ::org::orekit::frames::Frame & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ReferenceEllipsoid(env->callStaticObjectMethod(cls, mids$[mid_getWgs84_039ba5d4c7fe1b86], a0.this$));
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
        static PyObject *t_ReferenceEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ReferenceEllipsoid_init_(t_ReferenceEllipsoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ReferenceEllipsoid_getC2n0(t_ReferenceEllipsoid *self, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getEllipsoid(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getGM(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getGrs80(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers2003(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers2010(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getIers96(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getNormalGravity(t_ReferenceEllipsoid *self, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_getPolarRadius(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getSpin(t_ReferenceEllipsoid *self);
        static PyObject *t_ReferenceEllipsoid_getWgs84(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ReferenceEllipsoid_get__ellipsoid(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__gM(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__polarRadius(t_ReferenceEllipsoid *self, void *data);
        static PyObject *t_ReferenceEllipsoid_get__spin(t_ReferenceEllipsoid *self, void *data);
        static PyGetSetDef t_ReferenceEllipsoid__fields_[] = {
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, ellipsoid),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, gM),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, polarRadius),
          DECLARE_GET_FIELD(t_ReferenceEllipsoid, spin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ReferenceEllipsoid__methods_[] = {
          DECLARE_METHOD(t_ReferenceEllipsoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getC2n0, METH_O),
          DECLARE_METHOD(t_ReferenceEllipsoid, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getGM, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getGrs80, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers2003, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers2010, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getIers96, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getNormalGravity, METH_O),
          DECLARE_METHOD(t_ReferenceEllipsoid, getPolarRadius, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getSpin, METH_NOARGS),
          DECLARE_METHOD(t_ReferenceEllipsoid, getWgs84, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ReferenceEllipsoid)[] = {
          { Py_tp_methods, t_ReferenceEllipsoid__methods_ },
          { Py_tp_init, (void *) t_ReferenceEllipsoid_init_ },
          { Py_tp_getset, t_ReferenceEllipsoid__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ReferenceEllipsoid)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::OneAxisEllipsoid),
          NULL
        };

        DEFINE_TYPE(ReferenceEllipsoid, t_ReferenceEllipsoid, ReferenceEllipsoid);

        void t_ReferenceEllipsoid::install(PyObject *module)
        {
          installType(&PY_TYPE(ReferenceEllipsoid), &PY_TYPE_DEF(ReferenceEllipsoid), module, "ReferenceEllipsoid", 0);
        }

        void t_ReferenceEllipsoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "class_", make_descriptor(ReferenceEllipsoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "wrapfn_", make_descriptor(t_ReferenceEllipsoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ReferenceEllipsoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ReferenceEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ReferenceEllipsoid::initializeClass, 1)))
            return NULL;
          return t_ReferenceEllipsoid::wrap_Object(ReferenceEllipsoid(((t_ReferenceEllipsoid *) arg)->object.this$));
        }
        static PyObject *t_ReferenceEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ReferenceEllipsoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ReferenceEllipsoid_init_(t_ReferenceEllipsoid *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          ReferenceEllipsoid object((jobject) NULL);

          if (!parseArgs(args, "DDkDD", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = ReferenceEllipsoid(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ReferenceEllipsoid_getC2n0(t_ReferenceEllipsoid *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getC2n0(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getC2n0", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getEllipsoid(t_ReferenceEllipsoid *self)
        {
          ReferenceEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return t_ReferenceEllipsoid::wrap_Object(result);
        }

        static PyObject *t_ReferenceEllipsoid_getGM(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGM());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getGrs80(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getGrs80(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getGrs80", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers2003(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers2003(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers2003", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers2010(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers2010(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers2010", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getIers96(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getIers96(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getIers96", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getNormalGravity(t_ReferenceEllipsoid *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getNormalGravity(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getNormalGravity", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_getPolarRadius(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPolarRadius());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getSpin(t_ReferenceEllipsoid *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSpin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ReferenceEllipsoid_getWgs84(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ReferenceEllipsoid result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::ReferenceEllipsoid::getWgs84(a0));
            return t_ReferenceEllipsoid::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getWgs84", arg);
          return NULL;
        }

        static PyObject *t_ReferenceEllipsoid_get__ellipsoid(t_ReferenceEllipsoid *self, void *data)
        {
          ReferenceEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return t_ReferenceEllipsoid::wrap_Object(value);
        }

        static PyObject *t_ReferenceEllipsoid_get__gM(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGM());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ReferenceEllipsoid_get__polarRadius(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPolarRadius());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ReferenceEllipsoid_get__spin(t_ReferenceEllipsoid *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSpin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmCommonMetadataKey::class$ = NULL;
            jmethodID *AdmCommonMetadataKey::mids$ = NULL;
            bool AdmCommonMetadataKey::live$ = false;
            AdmCommonMetadataKey *AdmCommonMetadataKey::OBJECT_ID = NULL;

            jclass AdmCommonMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_cfa125da71219f08] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)Z");
                mids$[mid_valueOf_a6f3932ec714108d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;");
                mids$[mid_values_2d9d08cf4067185b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                OBJECT_ID = new AdmCommonMetadataKey(env->getStaticObjectField(cls, "OBJECT_ID", "Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdmCommonMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_cfa125da71219f08], a0.this$, a1.this$, a2.this$);
            }

            AdmCommonMetadataKey AdmCommonMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdmCommonMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_a6f3932ec714108d], a0.this$));
            }

            JArray< AdmCommonMetadataKey > AdmCommonMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdmCommonMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_2d9d08cf4067185b]));
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
            static PyObject *t_AdmCommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataKey_of_(t_AdmCommonMetadataKey *self, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_process(t_AdmCommonMetadataKey *self, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdmCommonMetadataKey_get__parameters_(t_AdmCommonMetadataKey *self, void *data);
            static PyGetSetDef t_AdmCommonMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdmCommonMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmCommonMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdmCommonMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmCommonMetadataKey)[] = {
              { Py_tp_methods, t_AdmCommonMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmCommonMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmCommonMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdmCommonMetadataKey, t_AdmCommonMetadataKey, AdmCommonMetadataKey);
            PyObject *t_AdmCommonMetadataKey::wrap_Object(const AdmCommonMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmCommonMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmCommonMetadataKey *self = (t_AdmCommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdmCommonMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmCommonMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmCommonMetadataKey *self = (t_AdmCommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdmCommonMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmCommonMetadataKey), &PY_TYPE_DEF(AdmCommonMetadataKey), module, "AdmCommonMetadataKey", 0);
            }

            void t_AdmCommonMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "class_", make_descriptor(AdmCommonMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "wrapfn_", make_descriptor(t_AdmCommonMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdmCommonMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "OBJECT_ID", make_descriptor(t_AdmCommonMetadataKey::wrap_Object(*AdmCommonMetadataKey::OBJECT_ID)));
            }

            static PyObject *t_AdmCommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmCommonMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdmCommonMetadataKey::wrap_Object(AdmCommonMetadataKey(((t_AdmCommonMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdmCommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmCommonMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmCommonMetadataKey_of_(t_AdmCommonMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmCommonMetadataKey_process(t_AdmCommonMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdmCommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdmCommonMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmCommonMetadataKey::valueOf(a0));
                return t_AdmCommonMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdmCommonMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdmCommonMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmCommonMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdmCommonMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdmCommonMetadataKey_get__parameters_(t_AdmCommonMetadataKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
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
                  mids$[mid_process_1c477da6cef24769] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadata;)Z");
                  mids$[mid_valueOf_6a695840cf824688] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;");
                  mids$[mid_values_a041509831385f89] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  MEAN_ELEMENT_THEORY = new OmmMetadataKey(env->getStaticObjectField(cls, "MEAN_ELEMENT_THEORY", "Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OmmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_1c477da6cef24769], a0.this$, a1.this$, a2.this$);
              }

              OmmMetadataKey OmmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OmmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6a695840cf824688], a0.this$));
              }

              JArray< OmmMetadataKey > OmmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OmmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_a041509831385f89]));
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
#include "org/orekit/forces/PythonForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *PythonForceModel::class$ = NULL;
      jmethodID *PythonForceModel::mids$ = NULL;
      bool PythonForceModel::live$ = false;

      jclass PythonForceModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/PythonForceModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_addContribution_0f28031d74393af0] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
          mids$[mid_addContribution_9ecc165cc3358de0] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
          mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getParameterDriver_068d3bba04590913] = env->getMethodID(cls, "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;");
          mids$[mid_getParameters_a53a7513ecedada2] = env->getMethodID(cls, "getParameters", "()[D");
          mids$[mid_getParameters_4ab353685404cfce] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_isSupported_fd2162b8a05a22fe] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonForceModel::PythonForceModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonForceModel::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonForceModel::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonForceModel::pythonExtension(jlong a0) const
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
    namespace forces {
      static PyObject *t_PythonForceModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonForceModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonForceModel_init_(t_PythonForceModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonForceModel_finalize(t_PythonForceModel *self);
      static PyObject *t_PythonForceModel_pythonExtension(t_PythonForceModel *self, PyObject *args);
      static jobject JNICALL t_PythonForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonForceModel_addContribution2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonForceModel_addContribution3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonForceModel_dependsOnPositionOnly4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonForceModel_getParameterDriver5(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonForceModel_getParameters6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonForceModel_getParameters7(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonForceModel_getParametersDrivers8(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonForceModel_init9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonForceModel_isSupported10(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonForceModel_pythonDecRef11(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonForceModel_get__self(t_PythonForceModel *self, void *data);
      static PyGetSetDef t_PythonForceModel__fields_[] = {
        DECLARE_GET_FIELD(t_PythonForceModel, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonForceModel__methods_[] = {
        DECLARE_METHOD(t_PythonForceModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonForceModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonForceModel, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonForceModel, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonForceModel)[] = {
        { Py_tp_methods, t_PythonForceModel__methods_ },
        { Py_tp_init, (void *) t_PythonForceModel_init_ },
        { Py_tp_getset, t_PythonForceModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonForceModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonForceModel, t_PythonForceModel, PythonForceModel);

      void t_PythonForceModel::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonForceModel), &PY_TYPE_DEF(PythonForceModel), module, "PythonForceModel", 1);
      }

      void t_PythonForceModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "class_", make_descriptor(PythonForceModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "wrapfn_", make_descriptor(t_PythonForceModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonForceModel::initializeClass);
        JNINativeMethod methods[] = {
          { "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonForceModel_acceleration0 },
          { "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonForceModel_acceleration1 },
          { "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V", (void *) t_PythonForceModel_addContribution2 },
          { "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V", (void *) t_PythonForceModel_addContribution3 },
          { "dependsOnPositionOnly", "()Z", (void *) t_PythonForceModel_dependsOnPositionOnly4 },
          { "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;", (void *) t_PythonForceModel_getParameterDriver5 },
          { "getParameters", "()[D", (void *) t_PythonForceModel_getParameters6 },
          { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonForceModel_getParameters7 },
          { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonForceModel_getParametersDrivers8 },
          { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonForceModel_init9 },
          { "isSupported", "(Ljava/lang/String;)Z", (void *) t_PythonForceModel_isSupported10 },
          { "pythonDecRef", "()V", (void *) t_PythonForceModel_pythonDecRef11 },
        };
        env->registerNatives(cls, methods, 12);
      }

      static PyObject *t_PythonForceModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonForceModel::initializeClass, 1)))
          return NULL;
        return t_PythonForceModel::wrap_Object(PythonForceModel(((t_PythonForceModel *) arg)->object.this$));
      }
      static PyObject *t_PythonForceModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonForceModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonForceModel_init_(t_PythonForceModel *self, PyObject *args, PyObject *kwds)
      {
        PythonForceModel object((jobject) NULL);

        INT_CALL(object = PythonForceModel());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonForceModel_finalize(t_PythonForceModel *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonForceModel_pythonExtension(t_PythonForceModel *self, PyObject *args)
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

      static jobject JNICALL t_PythonForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("acceleration", result);
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

      static jobject JNICALL t_PythonForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = JArray<jdouble>(a1).wrap();
        PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("acceleration", result);
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

      static void JNICALL t_PythonForceModel_addContribution2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::wrap_Object(::org::orekit::propagation::numerical::FieldTimeDerivativesEquations(a1));
        PyObject *result = PyObject_CallMethod(obj, "addContribution", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonForceModel_addContribution3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::propagation::numerical::t_TimeDerivativesEquations::wrap_Object(::org::orekit::propagation::numerical::TimeDerivativesEquations(a1));
        PyObject *result = PyObject_CallMethod(obj, "addContribution", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jboolean JNICALL t_PythonForceModel_dependsOnPositionOnly4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *result = PyObject_CallMethod(obj, "dependsOnPositionOnly", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("dependsOnPositionOnly", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonForceModel_getParameterDriver5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::ParameterDriver value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getParameterDriver", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &value))
        {
          throwTypeError("getParameterDriver", result);
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

      static jobject JNICALL t_PythonForceModel_getParameters6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getParameters", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("getParameters", result);
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

      static jobject JNICALL t_PythonForceModel_getParameters7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *result = PyObject_CallMethod(obj, "getParameters", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getParameters", result);
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

      static jobject JNICALL t_PythonForceModel_getParametersDrivers8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
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

      static void JNICALL t_PythonForceModel_init9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
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

      static jboolean JNICALL t_PythonForceModel_isSupported10(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isSupported", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isSupported", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static void JNICALL t_PythonForceModel_pythonDecRef11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonForceModel_get__self(t_PythonForceModel *self, void *data)
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
