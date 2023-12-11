#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/LutherFieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/orbits/OrbitType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *LutherFieldIntegratorBuilder::class$ = NULL;
        jmethodID *LutherFieldIntegratorBuilder::mids$ = NULL;
        bool LutherFieldIntegratorBuilder::live$ = false;

        jclass LutherFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/LutherFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1ee4bed350fde589] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_3a1ee7ebe4f0e344] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherFieldIntegratorBuilder::LutherFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        LutherFieldIntegratorBuilder::LutherFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ee4bed350fde589, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator LutherFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_3a1ee7ebe4f0e344], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_LutherFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegratorBuilder_of_(t_LutherFieldIntegratorBuilder *self, PyObject *args);
        static int t_LutherFieldIntegratorBuilder_init_(t_LutherFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherFieldIntegratorBuilder_buildIntegrator(t_LutherFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_LutherFieldIntegratorBuilder_get__parameters_(t_LutherFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_LutherFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_LutherFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_LutherFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_LutherFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_LutherFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(LutherFieldIntegratorBuilder, t_LutherFieldIntegratorBuilder, LutherFieldIntegratorBuilder);
        PyObject *t_LutherFieldIntegratorBuilder::wrap_Object(const LutherFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegratorBuilder *self = (t_LutherFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LutherFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegratorBuilder *self = (t_LutherFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LutherFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherFieldIntegratorBuilder), &PY_TYPE_DEF(LutherFieldIntegratorBuilder), module, "LutherFieldIntegratorBuilder", 0);
        }

        void t_LutherFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "class_", make_descriptor(LutherFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_LutherFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_LutherFieldIntegratorBuilder::wrap_Object(LutherFieldIntegratorBuilder(((t_LutherFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_LutherFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LutherFieldIntegratorBuilder_of_(t_LutherFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LutherFieldIntegratorBuilder_init_(t_LutherFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              LutherFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = LutherFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              LutherFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = LutherFieldIntegratorBuilder(a0));
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

        static PyObject *t_LutherFieldIntegratorBuilder_buildIntegrator(t_LutherFieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(LutherFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_LutherFieldIntegratorBuilder_get__parameters_(t_LutherFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldPoleCorrection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldPoleCorrection::class$ = NULL;
      jmethodID *FieldPoleCorrection::mids$ = NULL;
      bool FieldPoleCorrection::live$ = false;

      jclass FieldPoleCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldPoleCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b38c15e176684020] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getXp_613c8f46c659f636] = env->getMethodID(cls, "getXp", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getYp_613c8f46c659f636] = env->getMethodID(cls, "getYp", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldPoleCorrection::FieldPoleCorrection(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b38c15e176684020, a0.this$, a1.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldPoleCorrection::getXp() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getXp_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldPoleCorrection::getYp() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getYp_613c8f46c659f636]));
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
      static PyObject *t_FieldPoleCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPoleCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldPoleCorrection_of_(t_FieldPoleCorrection *self, PyObject *args);
      static int t_FieldPoleCorrection_init_(t_FieldPoleCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldPoleCorrection_getXp(t_FieldPoleCorrection *self);
      static PyObject *t_FieldPoleCorrection_getYp(t_FieldPoleCorrection *self);
      static PyObject *t_FieldPoleCorrection_get__xp(t_FieldPoleCorrection *self, void *data);
      static PyObject *t_FieldPoleCorrection_get__yp(t_FieldPoleCorrection *self, void *data);
      static PyObject *t_FieldPoleCorrection_get__parameters_(t_FieldPoleCorrection *self, void *data);
      static PyGetSetDef t_FieldPoleCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_FieldPoleCorrection, xp),
        DECLARE_GET_FIELD(t_FieldPoleCorrection, yp),
        DECLARE_GET_FIELD(t_FieldPoleCorrection, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldPoleCorrection__methods_[] = {
        DECLARE_METHOD(t_FieldPoleCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPoleCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldPoleCorrection, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldPoleCorrection, getXp, METH_NOARGS),
        DECLARE_METHOD(t_FieldPoleCorrection, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldPoleCorrection)[] = {
        { Py_tp_methods, t_FieldPoleCorrection__methods_ },
        { Py_tp_init, (void *) t_FieldPoleCorrection_init_ },
        { Py_tp_getset, t_FieldPoleCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldPoleCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldPoleCorrection, t_FieldPoleCorrection, FieldPoleCorrection);
      PyObject *t_FieldPoleCorrection::wrap_Object(const FieldPoleCorrection& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPoleCorrection::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPoleCorrection *self = (t_FieldPoleCorrection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldPoleCorrection::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldPoleCorrection::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldPoleCorrection *self = (t_FieldPoleCorrection *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldPoleCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldPoleCorrection), &PY_TYPE_DEF(FieldPoleCorrection), module, "FieldPoleCorrection", 0);
      }

      void t_FieldPoleCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "class_", make_descriptor(FieldPoleCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "wrapfn_", make_descriptor(t_FieldPoleCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPoleCorrection), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldPoleCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldPoleCorrection::initializeClass, 1)))
          return NULL;
        return t_FieldPoleCorrection::wrap_Object(FieldPoleCorrection(((t_FieldPoleCorrection *) arg)->object.this$));
      }
      static PyObject *t_FieldPoleCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldPoleCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldPoleCorrection_of_(t_FieldPoleCorrection *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldPoleCorrection_init_(t_FieldPoleCorrection *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        FieldPoleCorrection object((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldPoleCorrection(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldPoleCorrection_getXp(t_FieldPoleCorrection *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getXp());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldPoleCorrection_getYp(t_FieldPoleCorrection *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getYp());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldPoleCorrection_get__parameters_(t_FieldPoleCorrection *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldPoleCorrection_get__xp(t_FieldPoleCorrection *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getXp());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldPoleCorrection_get__yp(t_FieldPoleCorrection *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getYp());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *SpacecraftBodyFrame$BaseEquipment::class$ = NULL;
          jmethodID *SpacecraftBodyFrame$BaseEquipment::mids$ = NULL;
          bool SpacecraftBodyFrame$BaseEquipment::live$ = false;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ACC = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ACTUATOR = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::AST = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::CSS = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::DSS = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::ESA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::GYRO = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::GYRO_FRAME = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::IMU_FRAME = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::INSTRUMENT = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::MTA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::RW = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SA = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SC_BODY = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::SENSOR = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::STARTRACKER = NULL;
          SpacecraftBodyFrame$BaseEquipment *SpacecraftBodyFrame$BaseEquipment::TAM = NULL;

          jclass SpacecraftBodyFrame$BaseEquipment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_c8984490c8242543] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");
              mids$[mid_values_e05bad2d79518e43] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              ACC = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ACC", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              ACTUATOR = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ACTUATOR", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              AST = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "AST", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              CSS = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "CSS", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              DSS = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "DSS", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              ESA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "ESA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              GYRO = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "GYRO", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              GYRO_FRAME = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "GYRO_FRAME", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              IMU_FRAME = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "IMU_FRAME", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              INSTRUMENT = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "INSTRUMENT", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              MTA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "MTA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              RW = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "RW", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SA = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SA", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SC_BODY = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SC_BODY", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              SENSOR = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "SENSOR", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              STARTRACKER = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "STARTRACKER", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              TAM = new SpacecraftBodyFrame$BaseEquipment(env->getStaticObjectField(cls, "TAM", "Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame$BaseEquipment;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SpacecraftBodyFrame$BaseEquipment SpacecraftBodyFrame$BaseEquipment::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SpacecraftBodyFrame$BaseEquipment(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c8984490c8242543], a0.this$));
          }

          JArray< SpacecraftBodyFrame$BaseEquipment > SpacecraftBodyFrame$BaseEquipment::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SpacecraftBodyFrame$BaseEquipment >(env->callStaticObjectMethod(cls, mids$[mid_values_e05bad2d79518e43]));
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
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_of_(t_SpacecraftBodyFrame$BaseEquipment *self, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_values(PyTypeObject *type);
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_get__parameters_(t_SpacecraftBodyFrame$BaseEquipment *self, void *data);
          static PyGetSetDef t_SpacecraftBodyFrame$BaseEquipment__fields_[] = {
            DECLARE_GET_FIELD(t_SpacecraftBodyFrame$BaseEquipment, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SpacecraftBodyFrame$BaseEquipment__methods_[] = {
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, of_, METH_VARARGS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SpacecraftBodyFrame$BaseEquipment, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SpacecraftBodyFrame$BaseEquipment)[] = {
            { Py_tp_methods, t_SpacecraftBodyFrame$BaseEquipment__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SpacecraftBodyFrame$BaseEquipment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SpacecraftBodyFrame$BaseEquipment)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SpacecraftBodyFrame$BaseEquipment, t_SpacecraftBodyFrame$BaseEquipment, SpacecraftBodyFrame$BaseEquipment);
          PyObject *t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(const SpacecraftBodyFrame$BaseEquipment& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SpacecraftBodyFrame$BaseEquipment *self = (t_SpacecraftBodyFrame$BaseEquipment *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SpacecraftBodyFrame$BaseEquipment *self = (t_SpacecraftBodyFrame$BaseEquipment *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SpacecraftBodyFrame$BaseEquipment::install(PyObject *module)
          {
            installType(&PY_TYPE(SpacecraftBodyFrame$BaseEquipment), &PY_TYPE_DEF(SpacecraftBodyFrame$BaseEquipment), module, "SpacecraftBodyFrame$BaseEquipment", 0);
          }

          void t_SpacecraftBodyFrame$BaseEquipment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "class_", make_descriptor(SpacecraftBodyFrame$BaseEquipment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "wrapfn_", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "boxfn_", make_descriptor(boxObject));
            env->getClass(SpacecraftBodyFrame$BaseEquipment::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ACC", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ACC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ACTUATOR", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ACTUATOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "AST", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::AST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "CSS", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::CSS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "DSS", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::DSS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "ESA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::ESA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "GYRO", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::GYRO)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "GYRO_FRAME", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::GYRO_FRAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "IMU_FRAME", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::IMU_FRAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "INSTRUMENT", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::INSTRUMENT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "MTA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::MTA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "RW", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::RW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SA", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SC_BODY", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SC_BODY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "SENSOR", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::SENSOR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "STARTRACKER", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::STARTRACKER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftBodyFrame$BaseEquipment), "TAM", make_descriptor(t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(*SpacecraftBodyFrame$BaseEquipment::TAM)));
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SpacecraftBodyFrame$BaseEquipment::initializeClass, 1)))
              return NULL;
            return t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(SpacecraftBodyFrame$BaseEquipment(((t_SpacecraftBodyFrame$BaseEquipment *) arg)->object.this$));
          }
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SpacecraftBodyFrame$BaseEquipment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_of_(t_SpacecraftBodyFrame$BaseEquipment *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SpacecraftBodyFrame$BaseEquipment result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::valueOf(a0));
              return t_SpacecraftBodyFrame$BaseEquipment::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_values(PyTypeObject *type)
          {
            JArray< SpacecraftBodyFrame$BaseEquipment > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame$BaseEquipment::values());
            return JArray<jobject>(result.this$).wrap(t_SpacecraftBodyFrame$BaseEquipment::wrap_jobject);
          }
          static PyObject *t_SpacecraftBodyFrame$BaseEquipment_get__parameters_(t_SpacecraftBodyFrame$BaseEquipment *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBodyDynamicContext::class$ = NULL;
            jmethodID *DSSTThirdBodyDynamicContext::mids$ = NULL;
            bool DSSTThirdBodyDynamicContext::live$ = false;

            jclass DSSTThirdBodyDynamicContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyDynamicContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_fa9c0c4c693f20ff] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/bodies/CelestialBody;[D)V");
                mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
                mids$[mid_getAlpha_557b8123390d8d0c] = env->getMethodID(cls, "getAlpha", "()D");
                mids$[mid_getBB_557b8123390d8d0c] = env->getMethodID(cls, "getBB", "()D");
                mids$[mid_getBBB_557b8123390d8d0c] = env->getMethodID(cls, "getBBB", "()D");
                mids$[mid_getBeta_557b8123390d8d0c] = env->getMethodID(cls, "getBeta", "()D");
                mids$[mid_getBoA_557b8123390d8d0c] = env->getMethodID(cls, "getBoA", "()D");
                mids$[mid_getBoABpo_557b8123390d8d0c] = env->getMethodID(cls, "getBoABpo", "()D");
                mids$[mid_getGamma_557b8123390d8d0c] = env->getMethodID(cls, "getGamma", "()D");
                mids$[mid_getHXXX_557b8123390d8d0c] = env->getMethodID(cls, "getHXXX", "()D");
                mids$[mid_getKXXX_557b8123390d8d0c] = env->getMethodID(cls, "getKXXX", "()D");
                mids$[mid_getM2aoA_557b8123390d8d0c] = env->getMethodID(cls, "getM2aoA", "()D");
                mids$[mid_getMCo2AB_557b8123390d8d0c] = env->getMethodID(cls, "getMCo2AB", "()D");
                mids$[mid_getMeanMotion_557b8123390d8d0c] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMuoR3_557b8123390d8d0c] = env->getMethodID(cls, "getMuoR3", "()D");
                mids$[mid_getOoAB_557b8123390d8d0c] = env->getMethodID(cls, "getOoAB", "()D");
                mids$[mid_getR3_557b8123390d8d0c] = env->getMethodID(cls, "getR3", "()D");
                mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXX_557b8123390d8d0c] = env->getMethodID(cls, "getXX", "()D");
                mids$[mid_getb_557b8123390d8d0c] = env->getMethodID(cls, "getb", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBodyDynamicContext::DSSTThirdBodyDynamicContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::bodies::CelestialBody & a1, const JArray< jdouble > & a2) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_fa9c0c4c693f20ff, a0.this$, a1.this$, a2.this$)) {}

            jdouble DSSTThirdBodyDynamicContext::getA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getAlpha() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBB_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBBB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBBB_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBeta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBeta_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoA_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getBoABpo() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBoABpo_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getGamma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGamma_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getHXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getHXXX_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getKXXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKXXX_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getM2aoA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getM2aoA_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMCo2AB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMCo2AB_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getMuoR3() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuoR3_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getOoAB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOoAB_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getR3() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getR3_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getXX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXX_557b8123390d8d0c]);
            }

            jdouble DSSTThirdBodyDynamicContext::getb() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getb_557b8123390d8d0c]);
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
            static PyObject *t_DSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBodyDynamicContext_init_(t_DSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBodyDynamicContext_getA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getAlpha(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBBB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBeta(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBoA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getBoABpo(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getGamma(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getHXXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getKXXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getM2aoA(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMCo2AB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMeanMotion(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getMuoR3(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getOoAB(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getR3(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getXX(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_getb(t_DSSTThirdBodyDynamicContext *self);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__a(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__alpha(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__b(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__bB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__bBB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__beta(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__boA(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__boABpo(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__gamma(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__hXXX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__kXXX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__m2aoA(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__mCo2AB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__meanMotion(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__muoR3(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__ooAB(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__r3(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__x(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyObject *t_DSSTThirdBodyDynamicContext_get__xX(t_DSSTThirdBodyDynamicContext *self, void *data);
            static PyGetSetDef t_DSSTThirdBodyDynamicContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, a),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, alpha),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, b),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, bB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, bBB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, beta),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, boA),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, boABpo),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, gamma),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, hXXX),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, kXXX),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, m2aoA),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, mCo2AB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, meanMotion),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, muoR3),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, ooAB),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, r3),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, x),
              DECLARE_GET_FIELD(t_DSSTThirdBodyDynamicContext, xX),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBodyDynamicContext__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBBB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getBoABpo, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getHXXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getKXXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getM2aoA, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getMuoR3, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getOoAB, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getR3, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getXX, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyDynamicContext, getb, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBodyDynamicContext)[] = {
              { Py_tp_methods, t_DSSTThirdBodyDynamicContext__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBodyDynamicContext_init_ },
              { Py_tp_getset, t_DSSTThirdBodyDynamicContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBodyDynamicContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBodyDynamicContext, t_DSSTThirdBodyDynamicContext, DSSTThirdBodyDynamicContext);

            void t_DSSTThirdBodyDynamicContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBodyDynamicContext), &PY_TYPE_DEF(DSSTThirdBodyDynamicContext), module, "DSSTThirdBodyDynamicContext", 0);
            }

            void t_DSSTThirdBodyDynamicContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "class_", make_descriptor(DSSTThirdBodyDynamicContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "wrapfn_", make_descriptor(t_DSSTThirdBodyDynamicContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyDynamicContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBodyDynamicContext::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBodyDynamicContext::wrap_Object(DSSTThirdBodyDynamicContext(((t_DSSTThirdBodyDynamicContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBodyDynamicContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBodyDynamicContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBodyDynamicContext_init_(t_DSSTThirdBodyDynamicContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              DSSTThirdBodyDynamicContext object((jobject) NULL);

              if (!parseArgs(args, "kk[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = DSSTThirdBodyDynamicContext(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getAlpha(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBBB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBBB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBeta(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBeta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBoA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getBoABpo(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBoABpo());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getGamma(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGamma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getHXXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getHXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getKXXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKXXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getM2aoA(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getM2aoA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMCo2AB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMeanMotion(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getMuoR3(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuoR3());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getOoAB(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOoAB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getR3(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getR3());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getXX(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_getb(t_DSSTThirdBodyDynamicContext *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getb());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__a(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__alpha(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__b(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getb());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__bB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__bBB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBBB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__beta(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBeta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__boA(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__boABpo(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBoABpo());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__gamma(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGamma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__hXXX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getHXXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__kXXX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKXXX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__m2aoA(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getM2aoA());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__mCo2AB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMCo2AB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__meanMotion(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__muoR3(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuoR3());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__ooAB(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOoAB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__r3(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getR3());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__x(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_DSSTThirdBodyDynamicContext_get__xX(t_DSSTThirdBodyDynamicContext *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXX());
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *NewcombOperators::class$ = NULL;
            jmethodID *NewcombOperators::mids$ = NULL;
            bool NewcombOperators::live$ = false;

            jclass NewcombOperators::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/NewcombOperators");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getValue_2cce301fcf69b1db] = env->getStaticMethodID(cls, "getValue", "(IIII)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble NewcombOperators::getValue(jint a0, jint a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getValue_2cce301fcf69b1db], a0, a1, a2, a3);
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
            static PyObject *t_NewcombOperators_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NewcombOperators_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_NewcombOperators_getValue(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_NewcombOperators__methods_[] = {
              DECLARE_METHOD(t_NewcombOperators, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NewcombOperators, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_NewcombOperators, getValue, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(NewcombOperators)[] = {
              { Py_tp_methods, t_NewcombOperators__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(NewcombOperators)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(NewcombOperators, t_NewcombOperators, NewcombOperators);

            void t_NewcombOperators::install(PyObject *module)
            {
              installType(&PY_TYPE(NewcombOperators), &PY_TYPE_DEF(NewcombOperators), module, "NewcombOperators", 0);
            }

            void t_NewcombOperators::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "class_", make_descriptor(NewcombOperators::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "wrapfn_", make_descriptor(t_NewcombOperators::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(NewcombOperators), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_NewcombOperators_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, NewcombOperators::initializeClass, 1)))
                return NULL;
              return t_NewcombOperators::wrap_Object(NewcombOperators(((t_NewcombOperators *) arg)->object.this$));
            }
            static PyObject *t_NewcombOperators_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, NewcombOperators::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_NewcombOperators_getValue(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jint a3;
              jdouble result;

              if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::NewcombOperators::getValue(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "getValue", args);
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
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/Map.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *ModelObserver::class$ = NULL;
        jmethodID *ModelObserver::mids$ = NULL;
        bool ModelObserver::live$ = false;

        jclass ModelObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/ModelObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_modelCalled_b94f4715223105a5] = env->getMethodID(cls, "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ModelObserver::modelCalled(const JArray< ::org::orekit::orbits::Orbit > & a0, const ::java::util::Map & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_modelCalled_b94f4715223105a5], a0.this$, a1.this$);
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
        static PyObject *t_ModelObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ModelObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ModelObserver_modelCalled(t_ModelObserver *self, PyObject *args);

        static PyMethodDef t_ModelObserver__methods_[] = {
          DECLARE_METHOD(t_ModelObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ModelObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ModelObserver, modelCalled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ModelObserver)[] = {
          { Py_tp_methods, t_ModelObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ModelObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ModelObserver, t_ModelObserver, ModelObserver);

        void t_ModelObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(ModelObserver), &PY_TYPE_DEF(ModelObserver), module, "ModelObserver", 0);
        }

        void t_ModelObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "class_", make_descriptor(ModelObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "wrapfn_", make_descriptor(t_ModelObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ModelObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ModelObserver::initializeClass, 1)))
            return NULL;
          return t_ModelObserver::wrap_Object(ModelObserver(((t_ModelObserver *) arg)->object.this$));
        }
        static PyObject *t_ModelObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ModelObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ModelObserver_modelCalled(t_ModelObserver *self, PyObject *args)
        {
          JArray< ::org::orekit::orbits::Orbit > a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[kK", ::org::orekit::orbits::Orbit::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
          {
            OBJ_CALL(self->object.modelCalled(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "modelCalled", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "org/hipparchus/stat/descriptive/moment/Mean.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/moment/FirstMoment.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *Mean::class$ = NULL;
          jmethodID *Mean::mids$ = NULL;
          bool Mean::live$ = false;

          jclass Mean::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/Mean");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_4588de4772df8531] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/stat/descriptive/moment/FirstMoment;)V");
              mids$[mid_aggregate_d935e5680b15378b] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/moment/Mean;)V");
              mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_21710564dc90c0ac] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/moment/Mean;");
              mids$[mid_evaluate_9eeeb1ae977f525d] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_579f1672894f464a] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_557b8123390d8d0c] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_10f281d777284cea] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Mean::Mean() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          Mean::Mean(const ::org::hipparchus::stat::descriptive::moment::FirstMoment & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_4588de4772df8531, a0.this$)) {}

          void Mean::aggregate(const Mean & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_d935e5680b15378b], a0.this$);
          }

          void Mean::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
          }

          Mean Mean::copy() const
          {
            return Mean(env->callObjectMethod(this$, mids$[mid_copy_21710564dc90c0ac]));
          }

          jdouble Mean::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_9eeeb1ae977f525d], a0.this$, a1, a2);
          }

          jdouble Mean::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_579f1672894f464a], a0.this$, a1.this$, a2, a3);
          }

          jlong Mean::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
          }

          jdouble Mean::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_557b8123390d8d0c]);
          }

          void Mean::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_10f281d777284cea], a0);
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
        namespace moment {
          static PyObject *t_Mean_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Mean_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Mean_init_(t_Mean *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Mean_aggregate(t_Mean *self, PyObject *arg);
          static PyObject *t_Mean_clear(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_copy(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_evaluate(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_getN(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_getResult(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_increment(t_Mean *self, PyObject *args);
          static PyObject *t_Mean_get__n(t_Mean *self, void *data);
          static PyObject *t_Mean_get__result(t_Mean *self, void *data);
          static PyGetSetDef t_Mean__fields_[] = {
            DECLARE_GET_FIELD(t_Mean, n),
            DECLARE_GET_FIELD(t_Mean, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Mean__methods_[] = {
            DECLARE_METHOD(t_Mean, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mean, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Mean, aggregate, METH_O),
            DECLARE_METHOD(t_Mean, clear, METH_VARARGS),
            DECLARE_METHOD(t_Mean, copy, METH_VARARGS),
            DECLARE_METHOD(t_Mean, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Mean, getN, METH_VARARGS),
            DECLARE_METHOD(t_Mean, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Mean, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Mean)[] = {
            { Py_tp_methods, t_Mean__methods_ },
            { Py_tp_init, (void *) t_Mean_init_ },
            { Py_tp_getset, t_Mean__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Mean)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Mean, t_Mean, Mean);

          void t_Mean::install(PyObject *module)
          {
            installType(&PY_TYPE(Mean), &PY_TYPE_DEF(Mean), module, "Mean", 0);
          }

          void t_Mean::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "class_", make_descriptor(Mean::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "wrapfn_", make_descriptor(t_Mean::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Mean), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Mean_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Mean::initializeClass, 1)))
              return NULL;
            return t_Mean::wrap_Object(Mean(((t_Mean *) arg)->object.this$));
          }
          static PyObject *t_Mean_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Mean::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Mean_init_(t_Mean *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Mean object((jobject) NULL);

                INT_CALL(object = Mean());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::hipparchus::stat::descriptive::moment::FirstMoment a0((jobject) NULL);
                Mean object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::stat::descriptive::moment::FirstMoment::initializeClass, &a0))
                {
                  INT_CALL(object = Mean(a0));
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

          static PyObject *t_Mean_aggregate(t_Mean *self, PyObject *arg)
          {
            Mean a0((jobject) NULL);

            if (!parseArg(arg, "k", Mean::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Mean_clear(t_Mean *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Mean_copy(t_Mean *self, PyObject *args)
          {
            Mean result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Mean::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Mean_evaluate(t_Mean *self, PyObject *args)
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

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Mean_getN(t_Mean *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Mean_getResult(t_Mean *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Mean_increment(t_Mean *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Mean), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Mean_get__n(t_Mean *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Mean_get__result(t_Mean *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2DFormat.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Vector2DFormat::class$ = NULL;
          jmethodID *Vector2DFormat::mids$ = NULL;
          bool Vector2DFormat::live$ = false;

          jclass Vector2DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Vector2DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_d53859bd7ba1b247] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_f5c244a0f15376be] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_5f051ed7add2b099] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_6f1f6993f3124ea0] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector2DFormat_63ba1931ecd16b39] = env->getStaticMethodID(cls, "getVector2DFormat", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2DFormat;");
              mids$[mid_getVector2DFormat_13f62a7333808f22] = env->getStaticMethodID(cls, "getVector2DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/twod/Vector2DFormat;");
              mids$[mid_parse_9b6c0e74b066ae3c] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_parse_706dae3d2125df37] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector2DFormat::Vector2DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          Vector2DFormat::Vector2DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_d53859bd7ba1b247, a0.this$)) {}

          Vector2DFormat::Vector2DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_f5c244a0f15376be, a0.this$, a1.this$, a2.this$)) {}

          Vector2DFormat::Vector2DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_5f051ed7add2b099, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::StringBuffer Vector2DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_6f1f6993f3124ea0], a0.this$, a1.this$, a2.this$));
          }

          Vector2DFormat Vector2DFormat::getVector2DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector2DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector2DFormat_63ba1931ecd16b39]));
          }

          Vector2DFormat Vector2DFormat::getVector2DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector2DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector2DFormat_13f62a7333808f22], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Vector2DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_parse_9b6c0e74b066ae3c], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Vector2DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_parse_706dae3d2125df37], a0.this$, a1.this$));
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
        namespace twod {
          static PyObject *t_Vector2DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2DFormat_of_(t_Vector2DFormat *self, PyObject *args);
          static int t_Vector2DFormat_init_(t_Vector2DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector2DFormat_format(t_Vector2DFormat *self, PyObject *args);
          static PyObject *t_Vector2DFormat_getVector2DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2DFormat_parse(t_Vector2DFormat *self, PyObject *args);
          static PyObject *t_Vector2DFormat_get__vector2DFormat(t_Vector2DFormat *self, void *data);
          static PyObject *t_Vector2DFormat_get__parameters_(t_Vector2DFormat *self, void *data);
          static PyGetSetDef t_Vector2DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector2DFormat, vector2DFormat),
            DECLARE_GET_FIELD(t_Vector2DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector2DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector2DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector2DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector2DFormat, getVector2DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector2DFormat)[] = {
            { Py_tp_methods, t_Vector2DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector2DFormat_init_ },
            { Py_tp_getset, t_Vector2DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector2DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector2DFormat, t_Vector2DFormat, Vector2DFormat);
          PyObject *t_Vector2DFormat::wrap_Object(const Vector2DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector2DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector2DFormat *self = (t_Vector2DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector2DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector2DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector2DFormat *self = (t_Vector2DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector2DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector2DFormat), &PY_TYPE_DEF(Vector2DFormat), module, "Vector2DFormat", 0);
          }

          void t_Vector2DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "class_", make_descriptor(Vector2DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "wrapfn_", make_descriptor(t_Vector2DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector2DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector2DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector2DFormat::wrap_Object(Vector2DFormat(((t_Vector2DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector2DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector2DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector2DFormat_of_(t_Vector2DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector2DFormat_init_(t_Vector2DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector2DFormat object((jobject) NULL);

                INT_CALL(object = Vector2DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector2DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "sss", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector2DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::text::NumberFormat a3((jobject) NULL);
                Vector2DFormat object((jobject) NULL);

                if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector2DFormat(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D);
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

          static PyObject *t_Vector2DFormat_format(t_Vector2DFormat *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Vector2DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector2DFormat_getVector2DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector2DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2DFormat::getVector2DFormat());
                return t_Vector2DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector2DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2DFormat::getVector2DFormat(a0));
                  return t_Vector2DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector2DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector2DFormat_parse(t_Vector2DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector2DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector2DFormat_get__parameters_(t_Vector2DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector2DFormat_get__vector2DFormat(t_Vector2DFormat *self, void *data)
          {
            Vector2DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector2DFormat());
            return t_Vector2DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IndexedIntConsumer::class$ = NULL;
            jmethodID *ParseToken$IndexedIntConsumer::mids$ = NULL;
            bool ParseToken$IndexedIntConsumer::live$ = false;

            jclass ParseToken$IndexedIntConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IndexedIntConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_a84c9a223722150c] = env->getMethodID(cls, "accept", "(II)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IndexedIntConsumer::accept(jint a0, jint a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_a84c9a223722150c], a0, a1);
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
            static PyObject *t_ParseToken$IndexedIntConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedIntConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IndexedIntConsumer_accept(t_ParseToken$IndexedIntConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$IndexedIntConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IndexedIntConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IndexedIntConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IndexedIntConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IndexedIntConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IndexedIntConsumer, t_ParseToken$IndexedIntConsumer, ParseToken$IndexedIntConsumer);

            void t_ParseToken$IndexedIntConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IndexedIntConsumer), &PY_TYPE_DEF(ParseToken$IndexedIntConsumer), module, "ParseToken$IndexedIntConsumer", 0);
            }

            void t_ParseToken$IndexedIntConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "class_", make_descriptor(ParseToken$IndexedIntConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "wrapfn_", make_descriptor(t_ParseToken$IndexedIntConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IndexedIntConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IndexedIntConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IndexedIntConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IndexedIntConsumer::wrap_Object(ParseToken$IndexedIntConsumer(((t_ParseToken$IndexedIntConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IndexedIntConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IndexedIntConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IndexedIntConsumer_accept(t_ParseToken$IndexedIntConsumer *self, PyObject *args)
            {
              jint a0;
              jint a1;

              if (!parseArgs(args, "II", &a0, &a1))
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
#include "java/util/Collections.h"
#include "java/util/Iterator.h"
#include "java/util/SortedSet.h"
#include "java/util/ListIterator.h"
#include "java/util/Set.h"
#include "java/util/ArrayList.h"
#include "java/util/SortedMap.h"
#include "java/util/Map.h"
#include "java/util/Enumeration.h"
#include "java/util/Deque.h"
#include "java/util/Queue.h"
#include "java/util/Random.h"
#include "java/util/Comparator.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/NavigableMap.h"
#include "java/util/NavigableSet.h"
#include "java/lang/Boolean.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Collections::class$ = NULL;
    jmethodID *Collections::mids$ = NULL;
    bool Collections::live$ = false;
    ::java::util::List *Collections::EMPTY_LIST = NULL;
    ::java::util::Map *Collections::EMPTY_MAP = NULL;
    ::java::util::Set *Collections::EMPTY_SET = NULL;

    jclass Collections::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Collections");

        mids$ = new jmethodID[max_mid];
        mids$[mid_addAll_312109df22732464] = env->getStaticMethodID(cls, "addAll", "(Ljava/util/Collection;[Ljava/lang/Object;)Z");
        mids$[mid_asLifoQueue_4ba47090cc24bb32] = env->getStaticMethodID(cls, "asLifoQueue", "(Ljava/util/Deque;)Ljava/util/Queue;");
        mids$[mid_binarySearch_4dfdbafbbb74210d] = env->getStaticMethodID(cls, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;)I");
        mids$[mid_binarySearch_cb6bae9610cacdd9] = env->getStaticMethodID(cls, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_checkedCollection_5ffb42d807960e0b] = env->getStaticMethodID(cls, "checkedCollection", "(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;");
        mids$[mid_checkedList_92bb2a928811fff8] = env->getStaticMethodID(cls, "checkedList", "(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;");
        mids$[mid_checkedMap_fde2959a0fd2e0e1] = env->getStaticMethodID(cls, "checkedMap", "(Ljava/util/Map;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/Map;");
        mids$[mid_checkedNavigableMap_9a0ef99c6d93c0e3] = env->getStaticMethodID(cls, "checkedNavigableMap", "(Ljava/util/NavigableMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/NavigableMap;");
        mids$[mid_checkedNavigableSet_94ada725f86c987d] = env->getStaticMethodID(cls, "checkedNavigableSet", "(Ljava/util/NavigableSet;Ljava/lang/Class;)Ljava/util/NavigableSet;");
        mids$[mid_checkedQueue_3b76ab8ee00ad7bf] = env->getStaticMethodID(cls, "checkedQueue", "(Ljava/util/Queue;Ljava/lang/Class;)Ljava/util/Queue;");
        mids$[mid_checkedSet_397595b4201655db] = env->getStaticMethodID(cls, "checkedSet", "(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;");
        mids$[mid_checkedSortedMap_8cfbd09c84ddd815] = env->getStaticMethodID(cls, "checkedSortedMap", "(Ljava/util/SortedMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/SortedMap;");
        mids$[mid_checkedSortedSet_c36769466c4ae227] = env->getStaticMethodID(cls, "checkedSortedSet", "(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;");
        mids$[mid_copy_aaa4588ba4c2491b] = env->getStaticMethodID(cls, "copy", "(Ljava/util/List;Ljava/util/List;)V");
        mids$[mid_disjoint_b4bc5c35e2c22067] = env->getStaticMethodID(cls, "disjoint", "(Ljava/util/Collection;Ljava/util/Collection;)Z");
        mids$[mid_emptyEnumeration_00b99a423cfc29b8] = env->getStaticMethodID(cls, "emptyEnumeration", "()Ljava/util/Enumeration;");
        mids$[mid_emptyIterator_834a3801c426326d] = env->getStaticMethodID(cls, "emptyIterator", "()Ljava/util/Iterator;");
        mids$[mid_emptyList_0d9551367f7ecdef] = env->getStaticMethodID(cls, "emptyList", "()Ljava/util/List;");
        mids$[mid_emptyListIterator_996d185ac031638c] = env->getStaticMethodID(cls, "emptyListIterator", "()Ljava/util/ListIterator;");
        mids$[mid_emptyMap_1e62c2f73fbdd1c4] = env->getStaticMethodID(cls, "emptyMap", "()Ljava/util/Map;");
        mids$[mid_emptyNavigableMap_60eb75cca6401fd1] = env->getStaticMethodID(cls, "emptyNavigableMap", "()Ljava/util/NavigableMap;");
        mids$[mid_emptyNavigableSet_0617a74a450b6c8d] = env->getStaticMethodID(cls, "emptyNavigableSet", "()Ljava/util/NavigableSet;");
        mids$[mid_emptySet_2dfcbd371d62f4e1] = env->getStaticMethodID(cls, "emptySet", "()Ljava/util/Set;");
        mids$[mid_emptySortedMap_b067892b85d14890] = env->getStaticMethodID(cls, "emptySortedMap", "()Ljava/util/SortedMap;");
        mids$[mid_emptySortedSet_c6b6a992db588a51] = env->getStaticMethodID(cls, "emptySortedSet", "()Ljava/util/SortedSet;");
        mids$[mid_enumeration_93e113d05920dd66] = env->getStaticMethodID(cls, "enumeration", "(Ljava/util/Collection;)Ljava/util/Enumeration;");
        mids$[mid_fill_b1dc0cb716875835] = env->getStaticMethodID(cls, "fill", "(Ljava/util/List;Ljava/lang/Object;)V");
        mids$[mid_frequency_27395695bb3e2bbc] = env->getStaticMethodID(cls, "frequency", "(Ljava/util/Collection;Ljava/lang/Object;)I");
        mids$[mid_indexOfSubList_ac17115ae91d1a80] = env->getStaticMethodID(cls, "indexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
        mids$[mid_lastIndexOfSubList_ac17115ae91d1a80] = env->getStaticMethodID(cls, "lastIndexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
        mids$[mid_list_d50ff558ec338e1c] = env->getStaticMethodID(cls, "list", "(Ljava/util/Enumeration;)Ljava/util/ArrayList;");
        mids$[mid_max_26b2432cdceeeb0d] = env->getStaticMethodID(cls, "max", "(Ljava/util/Collection;)Ljava/lang/Object;");
        mids$[mid_max_f80a2ec5baac7ec8] = env->getStaticMethodID(cls, "max", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
        mids$[mid_min_26b2432cdceeeb0d] = env->getStaticMethodID(cls, "min", "(Ljava/util/Collection;)Ljava/lang/Object;");
        mids$[mid_min_f80a2ec5baac7ec8] = env->getStaticMethodID(cls, "min", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
        mids$[mid_nCopies_3f42f87854a32fdd] = env->getStaticMethodID(cls, "nCopies", "(ILjava/lang/Object;)Ljava/util/List;");
        mids$[mid_newSetFromMap_d70fd3b763be946c] = env->getStaticMethodID(cls, "newSetFromMap", "(Ljava/util/Map;)Ljava/util/Set;");
        mids$[mid_replaceAll_69b2f8b5cc1c7b6b] = env->getStaticMethodID(cls, "replaceAll", "(Ljava/util/List;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_reverse_4ccaedadb068bdeb] = env->getStaticMethodID(cls, "reverse", "(Ljava/util/List;)V");
        mids$[mid_reverseOrder_b0b551d4a54c7150] = env->getStaticMethodID(cls, "reverseOrder", "()Ljava/util/Comparator;");
        mids$[mid_reverseOrder_ed7a25767f280242] = env->getStaticMethodID(cls, "reverseOrder", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_rotate_7e65a9ed6be4bebc] = env->getStaticMethodID(cls, "rotate", "(Ljava/util/List;I)V");
        mids$[mid_shuffle_4ccaedadb068bdeb] = env->getStaticMethodID(cls, "shuffle", "(Ljava/util/List;)V");
        mids$[mid_shuffle_73f7c4d3dd3d3975] = env->getStaticMethodID(cls, "shuffle", "(Ljava/util/List;Ljava/util/Random;)V");
        mids$[mid_singleton_6459512c177e7487] = env->getStaticMethodID(cls, "singleton", "(Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_singletonList_b025aa6e6332479e] = env->getStaticMethodID(cls, "singletonList", "(Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_singletonMap_be1ef584905f235e] = env->getStaticMethodID(cls, "singletonMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_sort_4ccaedadb068bdeb] = env->getStaticMethodID(cls, "sort", "(Ljava/util/List;)V");
        mids$[mid_sort_58fb3b41926da277] = env->getStaticMethodID(cls, "sort", "(Ljava/util/List;Ljava/util/Comparator;)V");
        mids$[mid_swap_07c8b0beae05e681] = env->getStaticMethodID(cls, "swap", "(Ljava/util/List;II)V");
        mids$[mid_synchronizedCollection_6472a4633751d554] = env->getStaticMethodID(cls, "synchronizedCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
        mids$[mid_synchronizedList_77cbef3c12dc7892] = env->getStaticMethodID(cls, "synchronizedList", "(Ljava/util/List;)Ljava/util/List;");
        mids$[mid_synchronizedMap_ca09431f94120606] = env->getStaticMethodID(cls, "synchronizedMap", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_synchronizedNavigableMap_2261fb823f8ec1a0] = env->getStaticMethodID(cls, "synchronizedNavigableMap", "(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;");
        mids$[mid_synchronizedNavigableSet_0eb4b8f748950275] = env->getStaticMethodID(cls, "synchronizedNavigableSet", "(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;");
        mids$[mid_synchronizedSet_e57bce4d3d8abe90] = env->getStaticMethodID(cls, "synchronizedSet", "(Ljava/util/Set;)Ljava/util/Set;");
        mids$[mid_synchronizedSortedMap_b0b07f8392391208] = env->getStaticMethodID(cls, "synchronizedSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
        mids$[mid_synchronizedSortedSet_9038dc6f3668bb05] = env->getStaticMethodID(cls, "synchronizedSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");
        mids$[mid_unmodifiableCollection_6472a4633751d554] = env->getStaticMethodID(cls, "unmodifiableCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
        mids$[mid_unmodifiableList_77cbef3c12dc7892] = env->getStaticMethodID(cls, "unmodifiableList", "(Ljava/util/List;)Ljava/util/List;");
        mids$[mid_unmodifiableMap_ca09431f94120606] = env->getStaticMethodID(cls, "unmodifiableMap", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_unmodifiableNavigableMap_2261fb823f8ec1a0] = env->getStaticMethodID(cls, "unmodifiableNavigableMap", "(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;");
        mids$[mid_unmodifiableNavigableSet_0eb4b8f748950275] = env->getStaticMethodID(cls, "unmodifiableNavigableSet", "(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;");
        mids$[mid_unmodifiableSet_e57bce4d3d8abe90] = env->getStaticMethodID(cls, "unmodifiableSet", "(Ljava/util/Set;)Ljava/util/Set;");
        mids$[mid_unmodifiableSortedMap_b0b07f8392391208] = env->getStaticMethodID(cls, "unmodifiableSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
        mids$[mid_unmodifiableSortedSet_9038dc6f3668bb05] = env->getStaticMethodID(cls, "unmodifiableSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        EMPTY_LIST = new ::java::util::List(env->getStaticObjectField(cls, "EMPTY_LIST", "Ljava/util/List;"));
        EMPTY_MAP = new ::java::util::Map(env->getStaticObjectField(cls, "EMPTY_MAP", "Ljava/util/Map;"));
        EMPTY_SET = new ::java::util::Set(env->getStaticObjectField(cls, "EMPTY_SET", "Ljava/util/Set;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Collections::addAll(const ::java::util::Collection & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_addAll_312109df22732464], a0.this$, a1.this$);
    }

    ::java::util::Queue Collections::asLifoQueue(const ::java::util::Deque & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Queue(env->callStaticObjectMethod(cls, mids$[mid_asLifoQueue_4ba47090cc24bb32], a0.this$));
    }

    jint Collections::binarySearch(const ::java::util::List & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_4dfdbafbbb74210d], a0.this$, a1.this$);
    }

    jint Collections::binarySearch(const ::java::util::List & a0, const ::java::lang::Object & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_cb6bae9610cacdd9], a0.this$, a1.this$, a2.this$);
    }

    ::java::util::Collection Collections::checkedCollection(const ::java::util::Collection & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_checkedCollection_5ffb42d807960e0b], a0.this$, a1.this$));
    }

    ::java::util::List Collections::checkedList(const ::java::util::List & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_checkedList_92bb2a928811fff8], a0.this$, a1.this$));
    }

    ::java::util::Map Collections::checkedMap(const ::java::util::Map & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_checkedMap_fde2959a0fd2e0e1], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::NavigableMap Collections::checkedNavigableMap(const ::java::util::NavigableMap & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_checkedNavigableMap_9a0ef99c6d93c0e3], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::NavigableSet Collections::checkedNavigableSet(const ::java::util::NavigableSet & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_checkedNavigableSet_94ada725f86c987d], a0.this$, a1.this$));
    }

    ::java::util::Queue Collections::checkedQueue(const ::java::util::Queue & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Queue(env->callStaticObjectMethod(cls, mids$[mid_checkedQueue_3b76ab8ee00ad7bf], a0.this$, a1.this$));
    }

    ::java::util::Set Collections::checkedSet(const ::java::util::Set & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_checkedSet_397595b4201655db], a0.this$, a1.this$));
    }

    ::java::util::SortedMap Collections::checkedSortedMap(const ::java::util::SortedMap & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_checkedSortedMap_8cfbd09c84ddd815], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::SortedSet Collections::checkedSortedSet(const ::java::util::SortedSet & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_checkedSortedSet_c36769466c4ae227], a0.this$, a1.this$));
    }

    void Collections::copy(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_copy_aaa4588ba4c2491b], a0.this$, a1.this$);
    }

    jboolean Collections::disjoint(const ::java::util::Collection & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_disjoint_b4bc5c35e2c22067], a0.this$, a1.this$);
    }

    ::java::util::Enumeration Collections::emptyEnumeration()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_emptyEnumeration_00b99a423cfc29b8]));
    }

    ::java::util::Iterator Collections::emptyIterator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Iterator(env->callStaticObjectMethod(cls, mids$[mid_emptyIterator_834a3801c426326d]));
    }

    ::java::util::List Collections::emptyList()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_emptyList_0d9551367f7ecdef]));
    }

    ::java::util::ListIterator Collections::emptyListIterator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::ListIterator(env->callStaticObjectMethod(cls, mids$[mid_emptyListIterator_996d185ac031638c]));
    }

    ::java::util::Map Collections::emptyMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_emptyMap_1e62c2f73fbdd1c4]));
    }

    ::java::util::NavigableMap Collections::emptyNavigableMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_emptyNavigableMap_60eb75cca6401fd1]));
    }

    ::java::util::NavigableSet Collections::emptyNavigableSet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_emptyNavigableSet_0617a74a450b6c8d]));
    }

    ::java::util::Set Collections::emptySet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_emptySet_2dfcbd371d62f4e1]));
    }

    ::java::util::SortedMap Collections::emptySortedMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_emptySortedMap_b067892b85d14890]));
    }

    ::java::util::SortedSet Collections::emptySortedSet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_emptySortedSet_c6b6a992db588a51]));
    }

    ::java::util::Enumeration Collections::enumeration(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_enumeration_93e113d05920dd66], a0.this$));
    }

    void Collections::fill(const ::java::util::List & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_b1dc0cb716875835], a0.this$, a1.this$);
    }

    jint Collections::frequency(const ::java::util::Collection & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_frequency_27395695bb3e2bbc], a0.this$, a1.this$);
    }

    jint Collections::indexOfSubList(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_indexOfSubList_ac17115ae91d1a80], a0.this$, a1.this$);
    }

    jint Collections::lastIndexOfSubList(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_lastIndexOfSubList_ac17115ae91d1a80], a0.this$, a1.this$);
    }

    ::java::util::ArrayList Collections::list(const ::java::util::Enumeration & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::ArrayList(env->callStaticObjectMethod(cls, mids$[mid_list_d50ff558ec338e1c], a0.this$));
    }

    ::java::lang::Object Collections::max$(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_max_26b2432cdceeeb0d], a0.this$));
    }

    ::java::lang::Object Collections::max$(const ::java::util::Collection & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_max_f80a2ec5baac7ec8], a0.this$, a1.this$));
    }

    ::java::lang::Object Collections::min$(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_min_26b2432cdceeeb0d], a0.this$));
    }

    ::java::lang::Object Collections::min$(const ::java::util::Collection & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_min_f80a2ec5baac7ec8], a0.this$, a1.this$));
    }

    ::java::util::List Collections::nCopies(jint a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_nCopies_3f42f87854a32fdd], a0, a1.this$));
    }

    ::java::util::Set Collections::newSetFromMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_newSetFromMap_d70fd3b763be946c], a0.this$));
    }

    jboolean Collections::replaceAll(const ::java::util::List & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_replaceAll_69b2f8b5cc1c7b6b], a0.this$, a1.this$, a2.this$);
    }

    void Collections::reverse(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_reverse_4ccaedadb068bdeb], a0.this$);
    }

    ::java::util::Comparator Collections::reverseOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_b0b551d4a54c7150]));
    }

    ::java::util::Comparator Collections::reverseOrder(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_ed7a25767f280242], a0.this$));
    }

    void Collections::rotate(const ::java::util::List & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_rotate_7e65a9ed6be4bebc], a0.this$, a1);
    }

    void Collections::shuffle(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_shuffle_4ccaedadb068bdeb], a0.this$);
    }

    void Collections::shuffle(const ::java::util::List & a0, const ::java::util::Random & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_shuffle_73f7c4d3dd3d3975], a0.this$, a1.this$);
    }

    ::java::util::Set Collections::singleton(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_singleton_6459512c177e7487], a0.this$));
    }

    ::java::util::List Collections::singletonList(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_singletonList_b025aa6e6332479e], a0.this$));
    }

    ::java::util::Map Collections::singletonMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_singletonMap_be1ef584905f235e], a0.this$, a1.this$));
    }

    void Collections::sort(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_4ccaedadb068bdeb], a0.this$);
    }

    void Collections::sort(const ::java::util::List & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_58fb3b41926da277], a0.this$, a1.this$);
    }

    void Collections::swap(const ::java::util::List & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_swap_07c8b0beae05e681], a0.this$, a1, a2);
    }

    ::java::util::Collection Collections::synchronizedCollection(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_synchronizedCollection_6472a4633751d554], a0.this$));
    }

    ::java::util::List Collections::synchronizedList(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_synchronizedList_77cbef3c12dc7892], a0.this$));
    }

    ::java::util::Map Collections::synchronizedMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_synchronizedMap_ca09431f94120606], a0.this$));
    }

    ::java::util::NavigableMap Collections::synchronizedNavigableMap(const ::java::util::NavigableMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_synchronizedNavigableMap_2261fb823f8ec1a0], a0.this$));
    }

    ::java::util::NavigableSet Collections::synchronizedNavigableSet(const ::java::util::NavigableSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_synchronizedNavigableSet_0eb4b8f748950275], a0.this$));
    }

    ::java::util::Set Collections::synchronizedSet(const ::java::util::Set & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSet_e57bce4d3d8abe90], a0.this$));
    }

    ::java::util::SortedMap Collections::synchronizedSortedMap(const ::java::util::SortedMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSortedMap_b0b07f8392391208], a0.this$));
    }

    ::java::util::SortedSet Collections::synchronizedSortedSet(const ::java::util::SortedSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSortedSet_9038dc6f3668bb05], a0.this$));
    }

    ::java::util::Collection Collections::unmodifiableCollection(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableCollection_6472a4633751d554], a0.this$));
    }

    ::java::util::List Collections::unmodifiableList(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableList_77cbef3c12dc7892], a0.this$));
    }

    ::java::util::Map Collections::unmodifiableMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableMap_ca09431f94120606], a0.this$));
    }

    ::java::util::NavigableMap Collections::unmodifiableNavigableMap(const ::java::util::NavigableMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableNavigableMap_2261fb823f8ec1a0], a0.this$));
    }

    ::java::util::NavigableSet Collections::unmodifiableNavigableSet(const ::java::util::NavigableSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableNavigableSet_0eb4b8f748950275], a0.this$));
    }

    ::java::util::Set Collections::unmodifiableSet(const ::java::util::Set & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSet_e57bce4d3d8abe90], a0.this$));
    }

    ::java::util::SortedMap Collections::unmodifiableSortedMap(const ::java::util::SortedMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSortedMap_b0b07f8392391208], a0.this$));
    }

    ::java::util::SortedSet Collections::unmodifiableSortedSet(const ::java::util::SortedSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSortedSet_9038dc6f3668bb05], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Collections_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_addAll(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_asLifoQueue(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_binarySearch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedCollection(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedNavigableMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedNavigableSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedQueue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSortedMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSortedSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_copy(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_disjoint(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_emptyEnumeration(PyTypeObject *type);
    static PyObject *t_Collections_emptyIterator(PyTypeObject *type);
    static PyObject *t_Collections_emptyList(PyTypeObject *type);
    static PyObject *t_Collections_emptyListIterator(PyTypeObject *type);
    static PyObject *t_Collections_emptyMap(PyTypeObject *type);
    static PyObject *t_Collections_emptyNavigableMap(PyTypeObject *type);
    static PyObject *t_Collections_emptyNavigableSet(PyTypeObject *type);
    static PyObject *t_Collections_emptySet(PyTypeObject *type);
    static PyObject *t_Collections_emptySortedMap(PyTypeObject *type);
    static PyObject *t_Collections_emptySortedSet(PyTypeObject *type);
    static PyObject *t_Collections_enumeration(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_fill(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_frequency(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_indexOfSubList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_lastIndexOfSubList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_list(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_nCopies(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_newSetFromMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_replaceAll(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_reverseOrder(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_rotate(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_shuffle(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_singleton(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_singletonList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_singletonMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_sort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_swap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_synchronizedCollection(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedNavigableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedNavigableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSortedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSortedSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableCollection(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableNavigableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableNavigableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSortedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSortedSet(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Collections__methods_[] = {
      DECLARE_METHOD(t_Collections, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, addAll, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, asLifoQueue, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, binarySearch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedCollection, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedNavigableMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedNavigableSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedQueue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSortedMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSortedSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, copy, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, disjoint, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyEnumeration, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyIterator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyList, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyListIterator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyNavigableMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyNavigableSet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySortedMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySortedSet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, enumeration, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, fill, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, frequency, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, indexOfSubList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, lastIndexOfSubList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, list, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, nCopies, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, newSetFromMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, replaceAll, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, reverseOrder, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, rotate, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, shuffle, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, singleton, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, singletonList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, singletonMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, sort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, swap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedCollection, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedNavigableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedNavigableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSortedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSortedSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableCollection, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableNavigableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableNavigableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSortedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSortedSet, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Collections)[] = {
      { Py_tp_methods, t_Collections__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Collections)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Collections, t_Collections, Collections);

    void t_Collections::install(PyObject *module)
    {
      installType(&PY_TYPE(Collections), &PY_TYPE_DEF(Collections), module, "Collections", 0);
    }

    void t_Collections::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "class_", make_descriptor(Collections::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "wrapfn_", make_descriptor(t_Collections::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "boxfn_", make_descriptor(boxObject));
      env->getClass(Collections::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_LIST", make_descriptor(::java::util::t_List::wrap_Object(*Collections::EMPTY_LIST)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_MAP", make_descriptor(::java::util::t_Map::wrap_Object(*Collections::EMPTY_MAP)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_SET", make_descriptor(::java::util::t_Set::wrap_Object(*Collections::EMPTY_SET)));
    }

    static PyObject *t_Collections_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Collections::initializeClass, 1)))
        return NULL;
      return t_Collections::wrap_Object(Collections(((t_Collections *) arg)->object.this$));
    }
    static PyObject *t_Collections_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Collections::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Collections_addAll(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      JArray< ::java::lang::Object > a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "K[o", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::addAll(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "addAll", args);
      return NULL;
    }

    static PyObject *t_Collections_asLifoQueue(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Deque a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Queue result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Deque::initializeClass, &a0, &p0, ::java::util::t_Deque::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::asLifoQueue(a0));
        return ::java::util::t_Queue::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "asLifoQueue", arg);
      return NULL;
    }

    static PyObject *t_Collections_binarySearch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "Ko", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(result = ::java::util::Collections::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "KoK", ::java::util::List::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::binarySearch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "binarySearch", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedCollection(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedCollection(a0, a1));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedCollection", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedList(a0, a1));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedList", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::Map result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::Map::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedMap(a0, a1, a2));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedNavigableMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::NavigableMap::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedNavigableMap(a0, a1, a2));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedNavigableMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedNavigableSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::NavigableSet::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedNavigableSet(a0, a1));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedNavigableSet", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedQueue(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Queue a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Queue result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Queue::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Queue::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedQueue(a0, a1));
        return ::java::util::t_Queue::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedQueue", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Set::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSet(a0, a1));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSet", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSortedMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::SortedMap::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSortedMap(a0, a1, a2));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSortedMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSortedSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::SortedSet::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSortedSet(a0, a1));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSortedSet", args);
      return NULL;
    }

    static PyObject *t_Collections_copy(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(::java::util::Collections::copy(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "copy", args);
      return NULL;
    }

    static PyObject *t_Collections_disjoint(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      jboolean result;

      if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::disjoint(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "disjoint", args);
      return NULL;
    }

    static PyObject *t_Collections_emptyEnumeration(PyTypeObject *type)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyEnumeration());
      return ::java::util::t_Enumeration::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyIterator(PyTypeObject *type)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyIterator());
      return ::java::util::t_Iterator::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyList(PyTypeObject *type)
    {
      ::java::util::List result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyList());
      return ::java::util::t_List::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyListIterator(PyTypeObject *type)
    {
      ::java::util::ListIterator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyListIterator());
      return ::java::util::t_ListIterator::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyMap(PyTypeObject *type)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyMap());
      return ::java::util::t_Map::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyNavigableMap(PyTypeObject *type)
    {
      ::java::util::NavigableMap result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyNavigableMap());
      return ::java::util::t_NavigableMap::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyNavigableSet(PyTypeObject *type)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyNavigableSet());
      return ::java::util::t_NavigableSet::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySet(PyTypeObject *type)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySortedMap(PyTypeObject *type)
    {
      ::java::util::SortedMap result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySortedMap());
      return ::java::util::t_SortedMap::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySortedSet(PyTypeObject *type)
    {
      ::java::util::SortedSet result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySortedSet());
      return ::java::util::t_SortedSet::wrap_Object(result);
    }

    static PyObject *t_Collections_enumeration(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::enumeration(a0));
        return ::java::util::t_Enumeration::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "enumeration", arg);
      return NULL;
    }

    static PyObject *t_Collections_fill(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);

      if (!parseArgs(args, "Ko", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
      {
        OBJ_CALL(::java::util::Collections::fill(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "fill", args);
      return NULL;
    }

    static PyObject *t_Collections_frequency(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);
      jint result;

      if (!parseArgs(args, "Ko", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::frequency(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "frequency", args);
      return NULL;
    }

    static PyObject *t_Collections_indexOfSubList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;
      jint result;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::indexOfSubList(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "indexOfSubList", args);
      return NULL;
    }

    static PyObject *t_Collections_lastIndexOfSubList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;
      jint result;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::lastIndexOfSubList(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "lastIndexOfSubList", args);
      return NULL;
    }

    static PyObject *t_Collections_list(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Enumeration a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::ArrayList result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Enumeration::initializeClass, &a0, &p0, ::java::util::t_Enumeration::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::list(a0));
        return ::java::util::t_ArrayList::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "list", arg);
      return NULL;
    }

    static PyObject *t_Collections_max(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::max$(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::max$(a0, a1));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Collections_min(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::min$(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::min$(a0, a1));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Collections_nCopies(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "Io", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::nCopies(a0, a1));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "nCopies", args);
      return NULL;
    }

    static PyObject *t_Collections_newSetFromMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::newSetFromMap(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "newSetFromMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_replaceAll(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object a2((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "Koo", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
      {
        OBJ_CALL(result = ::java::util::Collections::replaceAll(a0, a1, a2));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "replaceAll", args);
      return NULL;
    }

    static PyObject *t_Collections_reverse(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(::java::util::Collections::reverse(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Collections_reverseOrder(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Comparator result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Collections::reverseOrder());
          return ::java::util::t_Comparator::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::reverseOrder(a0));
            return ::java::util::t_Comparator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "reverseOrder", args);
      return NULL;
    }

    static PyObject *t_Collections_rotate(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      jint a1;

      if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
      {
        OBJ_CALL(::java::util::Collections::rotate(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "rotate", args);
      return NULL;
    }

    static PyObject *t_Collections_shuffle(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::java::util::Collections::shuffle(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Random a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::java::util::Random::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(::java::util::Collections::shuffle(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "shuffle", args);
      return NULL;
    }

    static PyObject *t_Collections_singleton(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::util::Collections::singleton(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singleton", arg);
      return NULL;
    }

    static PyObject *t_Collections_singletonList(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::util::Collections::singletonList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singletonList", arg);
      return NULL;
    }

    static PyObject *t_Collections_singletonMap(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::Map result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::singletonMap(a0, a1));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singletonMap", args);
      return NULL;
    }

    static PyObject *t_Collections_sort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::java::util::Collections::sort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Collections::sort(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sort", args);
      return NULL;
    }

    static PyObject *t_Collections_swap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      jint a1;
      jint a2;

      if (!parseArgs(args, "KII", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
      {
        OBJ_CALL(::java::util::Collections::swap(a0, a1, a2));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "swap", args);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedCollection(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedCollection(a0));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedCollection", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedList(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedList", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Map result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedMap(a0));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedNavigableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableMap::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedNavigableMap(a0));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedNavigableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedNavigableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableSet::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedNavigableSet(a0));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedNavigableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSet(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSortedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedMap::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSortedMap(a0));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSortedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSortedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSortedSet(a0));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSortedSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableCollection(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableCollection(a0));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableCollection", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableList(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableList", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Map result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableMap(a0));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableNavigableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableMap::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableNavigableMap(a0));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableNavigableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableNavigableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableSet::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableNavigableSet(a0));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableNavigableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSet(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSortedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedMap::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSortedMap(a0));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSortedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSortedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSortedSet(a0));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSortedSet", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/IAUPole.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *IAUPole::class$ = NULL;
      jmethodID *IAUPole::mids$ = NULL;
      bool IAUPole::live$ = false;

      jclass IAUPole::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/IAUPole");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getNode_3df461fe15362b2b] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getNode_3343973a86caeaa4] = env->getMethodID(cls, "getNode", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPole_3df461fe15362b2b] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPole_3343973a86caeaa4] = env->getMethodID(cls, "getPole", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPrimeMeridianAngle_b0b988f941da47d8] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getPrimeMeridianAngle_b884068a2c99f6ca] = env->getMethodID(cls, "getPrimeMeridianAngle", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D IAUPole::getNode(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNode_3df461fe15362b2b], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IAUPole::getNode(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getNode_3343973a86caeaa4], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D IAUPole::getPole(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPole_3df461fe15362b2b], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D IAUPole::getPole(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPole_3343973a86caeaa4], a0.this$));
      }

      jdouble IAUPole::getPrimeMeridianAngle(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPrimeMeridianAngle_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IAUPole::getPrimeMeridianAngle(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPrimeMeridianAngle_b884068a2c99f6ca], a0.this$));
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
      static PyObject *t_IAUPole_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IAUPole_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IAUPole_getNode(t_IAUPole *self, PyObject *args);
      static PyObject *t_IAUPole_getPole(t_IAUPole *self, PyObject *args);
      static PyObject *t_IAUPole_getPrimeMeridianAngle(t_IAUPole *self, PyObject *args);

      static PyMethodDef t_IAUPole__methods_[] = {
        DECLARE_METHOD(t_IAUPole, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IAUPole, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IAUPole, getNode, METH_VARARGS),
        DECLARE_METHOD(t_IAUPole, getPole, METH_VARARGS),
        DECLARE_METHOD(t_IAUPole, getPrimeMeridianAngle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IAUPole)[] = {
        { Py_tp_methods, t_IAUPole__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IAUPole)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(IAUPole, t_IAUPole, IAUPole);

      void t_IAUPole::install(PyObject *module)
      {
        installType(&PY_TYPE(IAUPole), &PY_TYPE_DEF(IAUPole), module, "IAUPole", 0);
      }

      void t_IAUPole::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "class_", make_descriptor(IAUPole::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "wrapfn_", make_descriptor(t_IAUPole::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IAUPole), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IAUPole_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IAUPole::initializeClass, 1)))
          return NULL;
        return t_IAUPole::wrap_Object(IAUPole(((t_IAUPole *) arg)->object.this$));
      }
      static PyObject *t_IAUPole_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IAUPole::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IAUPole_getNode(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNode(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getNode(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNode", args);
        return NULL;
      }

      static PyObject *t_IAUPole_getPole(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPole(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPole(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPole", args);
        return NULL;
      }

      static PyObject *t_IAUPole_getPrimeMeridianAngle(t_IAUPole *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPrimeMeridianAngle(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getPrimeMeridianAngle(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPrimeMeridianAngle", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BilinearInterpolatingFunction::class$ = NULL;
        jmethodID *BilinearInterpolatingFunction::mids$ = NULL;
        bool BilinearInterpolatingFunction::live$ = false;

        jclass BilinearInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BilinearInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fa8d638c79b33265] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
            mids$[mid_getXInf_557b8123390d8d0c] = env->getMethodID(cls, "getXInf", "()D");
            mids$[mid_getXSup_557b8123390d8d0c] = env->getMethodID(cls, "getXSup", "()D");
            mids$[mid_getYInf_557b8123390d8d0c] = env->getMethodID(cls, "getYInf", "()D");
            mids$[mid_getYSup_557b8123390d8d0c] = env->getMethodID(cls, "getYSup", "()D");
            mids$[mid_value_2268d18be49a6087] = env->getMethodID(cls, "value", "(DD)D");
            mids$[mid_value_d5f58731bcb8a011] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BilinearInterpolatingFunction::BilinearInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa8d638c79b33265, a0.this$, a1.this$, a2.this$)) {}

        jdouble BilinearInterpolatingFunction::getXInf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXInf_557b8123390d8d0c]);
        }

        jdouble BilinearInterpolatingFunction::getXSup() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getXSup_557b8123390d8d0c]);
        }

        jdouble BilinearInterpolatingFunction::getYInf() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYInf_557b8123390d8d0c]);
        }

        jdouble BilinearInterpolatingFunction::getYSup() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getYSup_557b8123390d8d0c]);
        }

        jdouble BilinearInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_2268d18be49a6087], a0, a1);
        }

        ::org::hipparchus::CalculusFieldElement BilinearInterpolatingFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d5f58731bcb8a011], a0.this$, a1.this$));
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
        static PyObject *t_BilinearInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BilinearInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BilinearInterpolatingFunction_init_(t_BilinearInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BilinearInterpolatingFunction_getXInf(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getXSup(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getYInf(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_getYSup(t_BilinearInterpolatingFunction *self);
        static PyObject *t_BilinearInterpolatingFunction_value(t_BilinearInterpolatingFunction *self, PyObject *args);
        static PyObject *t_BilinearInterpolatingFunction_get__xInf(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__xSup(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__yInf(t_BilinearInterpolatingFunction *self, void *data);
        static PyObject *t_BilinearInterpolatingFunction_get__ySup(t_BilinearInterpolatingFunction *self, void *data);
        static PyGetSetDef t_BilinearInterpolatingFunction__fields_[] = {
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, xInf),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, xSup),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, yInf),
          DECLARE_GET_FIELD(t_BilinearInterpolatingFunction, ySup),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BilinearInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_BilinearInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getXInf, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getXSup, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getYInf, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, getYSup, METH_NOARGS),
          DECLARE_METHOD(t_BilinearInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BilinearInterpolatingFunction)[] = {
          { Py_tp_methods, t_BilinearInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_BilinearInterpolatingFunction_init_ },
          { Py_tp_getset, t_BilinearInterpolatingFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BilinearInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BilinearInterpolatingFunction, t_BilinearInterpolatingFunction, BilinearInterpolatingFunction);

        void t_BilinearInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(BilinearInterpolatingFunction), &PY_TYPE_DEF(BilinearInterpolatingFunction), module, "BilinearInterpolatingFunction", 0);
        }

        void t_BilinearInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "class_", make_descriptor(BilinearInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "wrapfn_", make_descriptor(t_BilinearInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BilinearInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BilinearInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BilinearInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_BilinearInterpolatingFunction::wrap_Object(BilinearInterpolatingFunction(((t_BilinearInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_BilinearInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BilinearInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BilinearInterpolatingFunction_init_(t_BilinearInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          BilinearInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            INT_CALL(object = BilinearInterpolatingFunction(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BilinearInterpolatingFunction_getXInf(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXInf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getXSup(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getXSup());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getYInf(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYInf());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_getYSup(t_BilinearInterpolatingFunction *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getYSup());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BilinearInterpolatingFunction_value(t_BilinearInterpolatingFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              jdouble result;

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.value(a0, a1));
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
                OBJ_CALL(result = self->object.value(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }

        static PyObject *t_BilinearInterpolatingFunction_get__xInf(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXInf());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__xSup(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getXSup());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__yInf(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYInf());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BilinearInterpolatingFunction_get__ySup(t_BilinearInterpolatingFunction *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getYSup());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_17bdf0024ef4437b] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_getCurrentStates_b35c11fbcd8e8f7e] = env->getMethodID(cls, "getCurrentStates", "()[Lorg/hipparchus/linear/RealVector;");
              mids$[mid_getCurrentTime_557b8123390d8d0c] = env->getMethodID(cls, "getCurrentTime", "()D");
              mids$[mid_getProcessNoiseMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getProcessNoiseMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          UnscentedEvolution::UnscentedEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17bdf0024ef4437b, a0, a1.this$, a2.this$)) {}

          JArray< ::org::hipparchus::linear::RealVector > UnscentedEvolution::getCurrentStates() const
          {
            return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getCurrentStates_b35c11fbcd8e8f7e]));
          }

          jdouble UnscentedEvolution::getCurrentTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCurrentTime_557b8123390d8d0c]);
          }

          ::org::hipparchus::linear::RealMatrix UnscentedEvolution::getProcessNoiseMatrix() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_70a207fcbc031df2]));
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
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LineDatation::class$ = NULL;
        jmethodID *LineDatation::mids$ = NULL;
        bool LineDatation::live$ = false;

        jclass LineDatation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LineDatation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDate_8ef471ef852a9678] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_b0b988f941da47d8] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_7e960cd6eee376d8] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate LineDatation::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_8ef471ef852a9678], a0));
        }

        jdouble LineDatation::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_b0b988f941da47d8], a0.this$);
        }

        jdouble LineDatation::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_7e960cd6eee376d8], a0);
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
        static PyObject *t_LineDatation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineDatation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineDatation_getDate(t_LineDatation *self, PyObject *arg);
        static PyObject *t_LineDatation_getLine(t_LineDatation *self, PyObject *arg);
        static PyObject *t_LineDatation_getRate(t_LineDatation *self, PyObject *arg);

        static PyMethodDef t_LineDatation__methods_[] = {
          DECLARE_METHOD(t_LineDatation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineDatation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineDatation, getDate, METH_O),
          DECLARE_METHOD(t_LineDatation, getLine, METH_O),
          DECLARE_METHOD(t_LineDatation, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LineDatation)[] = {
          { Py_tp_methods, t_LineDatation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LineDatation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LineDatation, t_LineDatation, LineDatation);

        void t_LineDatation::install(PyObject *module)
        {
          installType(&PY_TYPE(LineDatation), &PY_TYPE_DEF(LineDatation), module, "LineDatation", 0);
        }

        void t_LineDatation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "class_", make_descriptor(LineDatation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "wrapfn_", make_descriptor(t_LineDatation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineDatation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LineDatation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LineDatation::initializeClass, 1)))
            return NULL;
          return t_LineDatation::wrap_Object(LineDatation(((t_LineDatation *) arg)->object.this$));
        }
        static PyObject *t_LineDatation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LineDatation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LineDatation_getDate(t_LineDatation *self, PyObject *arg)
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

        static PyObject *t_LineDatation_getLine(t_LineDatation *self, PyObject *arg)
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

        static PyObject *t_LineDatation_getRate(t_LineDatation *self, PyObject *arg)
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
#include "org/orekit/utils/LegendrePolynomials.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *LegendrePolynomials::class$ = NULL;
      jmethodID *LegendrePolynomials::mids$ = NULL;
      bool LegendrePolynomials::live$ = false;

      jclass LegendrePolynomials::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/LegendrePolynomials");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_754312f3734d6e2f] = env->getMethodID(cls, "<init>", "(IID)V");
          mids$[mid_getPnm_21b81d54c06b64b0] = env->getMethodID(cls, "getPnm", "(II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LegendrePolynomials::LegendrePolynomials(jint a0, jint a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_754312f3734d6e2f, a0, a1, a2)) {}

      jdouble LegendrePolynomials::getPnm(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getPnm_21b81d54c06b64b0], a0, a1);
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
      static PyObject *t_LegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LegendrePolynomials_init_(t_LegendrePolynomials *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LegendrePolynomials_getPnm(t_LegendrePolynomials *self, PyObject *args);

      static PyMethodDef t_LegendrePolynomials__methods_[] = {
        DECLARE_METHOD(t_LegendrePolynomials, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LegendrePolynomials, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LegendrePolynomials, getPnm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LegendrePolynomials)[] = {
        { Py_tp_methods, t_LegendrePolynomials__methods_ },
        { Py_tp_init, (void *) t_LegendrePolynomials_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LegendrePolynomials)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LegendrePolynomials, t_LegendrePolynomials, LegendrePolynomials);

      void t_LegendrePolynomials::install(PyObject *module)
      {
        installType(&PY_TYPE(LegendrePolynomials), &PY_TYPE_DEF(LegendrePolynomials), module, "LegendrePolynomials", 0);
      }

      void t_LegendrePolynomials::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "class_", make_descriptor(LegendrePolynomials::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "wrapfn_", make_descriptor(t_LegendrePolynomials::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LegendrePolynomials), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LegendrePolynomials_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LegendrePolynomials::initializeClass, 1)))
          return NULL;
        return t_LegendrePolynomials::wrap_Object(LegendrePolynomials(((t_LegendrePolynomials *) arg)->object.this$));
      }
      static PyObject *t_LegendrePolynomials_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LegendrePolynomials::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LegendrePolynomials_init_(t_LegendrePolynomials *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jint a1;
        jdouble a2;
        LegendrePolynomials object((jobject) NULL);

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          INT_CALL(object = LegendrePolynomials(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_LegendrePolynomials_getPnm(t_LegendrePolynomials *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getPnm(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getPnm", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/observation/RinexObservationParser.h"
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservationParser::class$ = NULL;
          jmethodID *RinexObservationParser::mids$ = NULL;
          bool RinexObservationParser::live$ = false;
          ::java::lang::String *RinexObservationParser::DEFAULT_RINEX_2_NAMES = NULL;
          ::java::lang::String *RinexObservationParser::DEFAULT_RINEX_3_NAMES = NULL;

          jclass RinexObservationParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservationParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_fdb437c675e993f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;)V");
              mids$[mid_parse_c91974ebe6105401] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/rinex/observation/RinexObservation;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_RINEX_2_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_RINEX_2_NAMES", "Ljava/lang/String;"));
              DEFAULT_RINEX_3_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_RINEX_3_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservationParser::RinexObservationParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          RinexObservationParser::RinexObservationParser(const ::org::orekit::time::TimeScales & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdb437c675e993f7, a0.this$)) {}

          ::org::orekit::files::rinex::observation::RinexObservation RinexObservationParser::parse(const ::org::orekit::data::DataSource & a0) const
          {
            return ::org::orekit::files::rinex::observation::RinexObservation(env->callObjectMethod(this$, mids$[mid_parse_c91974ebe6105401], a0.this$));
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
          static PyObject *t_RinexObservationParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservationParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexObservationParser_init_(t_RinexObservationParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservationParser_parse(t_RinexObservationParser *self, PyObject *arg);

          static PyMethodDef t_RinexObservationParser__methods_[] = {
            DECLARE_METHOD(t_RinexObservationParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservationParser, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservationParser)[] = {
            { Py_tp_methods, t_RinexObservationParser__methods_ },
            { Py_tp_init, (void *) t_RinexObservationParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservationParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexObservationParser, t_RinexObservationParser, RinexObservationParser);

          void t_RinexObservationParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservationParser), &PY_TYPE_DEF(RinexObservationParser), module, "RinexObservationParser", 0);
          }

          void t_RinexObservationParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "class_", make_descriptor(RinexObservationParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "wrapfn_", make_descriptor(t_RinexObservationParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexObservationParser::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "DEFAULT_RINEX_2_NAMES", make_descriptor(j2p(*RinexObservationParser::DEFAULT_RINEX_2_NAMES)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservationParser), "DEFAULT_RINEX_3_NAMES", make_descriptor(j2p(*RinexObservationParser::DEFAULT_RINEX_3_NAMES)));
          }

          static PyObject *t_RinexObservationParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservationParser::initializeClass, 1)))
              return NULL;
            return t_RinexObservationParser::wrap_Object(RinexObservationParser(((t_RinexObservationParser *) arg)->object.this$));
          }
          static PyObject *t_RinexObservationParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservationParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexObservationParser_init_(t_RinexObservationParser *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RinexObservationParser object((jobject) NULL);

                INT_CALL(object = RinexObservationParser());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScales a0((jobject) NULL);
                RinexObservationParser object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                {
                  INT_CALL(object = RinexObservationParser(a0));
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

          static PyObject *t_RinexObservationParser_parse(t_RinexObservationParser *self, PyObject *arg)
          {
            ::org::orekit::data::DataSource a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::RinexObservation result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::files::rinex::observation::t_RinexObservation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/MultipleShooting.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *MultipleShooting::class$ = NULL;
      jmethodID *MultipleShooting::mids$ = NULL;
      bool MultipleShooting::live$ = false;

      jclass MultipleShooting::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/MultipleShooting");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compute_0d9551367f7ecdef] = env->getMethodID(cls, "compute", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List MultipleShooting::compute() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_compute_0d9551367f7ecdef]));
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
      static PyObject *t_MultipleShooting_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooting_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooting_compute(t_MultipleShooting *self);

      static PyMethodDef t_MultipleShooting__methods_[] = {
        DECLARE_METHOD(t_MultipleShooting, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooting, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooting, compute, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultipleShooting)[] = {
        { Py_tp_methods, t_MultipleShooting__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultipleShooting)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultipleShooting, t_MultipleShooting, MultipleShooting);

      void t_MultipleShooting::install(PyObject *module)
      {
        installType(&PY_TYPE(MultipleShooting), &PY_TYPE_DEF(MultipleShooting), module, "MultipleShooting", 0);
      }

      void t_MultipleShooting::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "class_", make_descriptor(MultipleShooting::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "wrapfn_", make_descriptor(t_MultipleShooting::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooting), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultipleShooting_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultipleShooting::initializeClass, 1)))
          return NULL;
        return t_MultipleShooting::wrap_Object(MultipleShooting(((t_MultipleShooting *) arg)->object.this$));
      }
      static PyObject *t_MultipleShooting_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultipleShooting::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultipleShooting_compute(t_MultipleShooting *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.compute());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/models/earth/troposphere/FixedTroposphericDelay.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *FixedTroposphericDelay::class$ = NULL;
          jmethodID *FixedTroposphericDelay::mids$ = NULL;
          bool FixedTroposphericDelay::live$ = false;

          jclass FixedTroposphericDelay::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/FixedTroposphericDelay");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_28c7bdc075bb74e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_init$_fa8d638c79b33265] = env->getMethodID(cls, "<init>", "([D[D[[D)V");
              mids$[mid_getDefaultModel_f6291ba3968b7789] = env->getStaticMethodID(cls, "getDefaultModel", "()Lorg/orekit/models/earth/troposphere/FixedTroposphericDelay;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pathDelay_a4fdd877b349d4a6] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_129678f244f63094] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FixedTroposphericDelay::FixedTroposphericDelay(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

          FixedTroposphericDelay::FixedTroposphericDelay(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_28c7bdc075bb74e8, a0.this$, a1.this$)) {}

          FixedTroposphericDelay::FixedTroposphericDelay(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa8d638c79b33265, a0.this$, a1.this$, a2.this$)) {}

          FixedTroposphericDelay FixedTroposphericDelay::getDefaultModel()
          {
            jclass cls = env->getClass(initializeClass);
            return FixedTroposphericDelay(env->callStaticObjectMethod(cls, mids$[mid_getDefaultModel_f6291ba3968b7789]));
          }

          ::java::util::List FixedTroposphericDelay::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::hipparchus::CalculusFieldElement FixedTroposphericDelay::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_a4fdd877b349d4a6], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble FixedTroposphericDelay::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_129678f244f63094], a0, a1.this$, a2.this$, a3.this$);
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
          static PyObject *t_FixedTroposphericDelay_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FixedTroposphericDelay_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FixedTroposphericDelay_init_(t_FixedTroposphericDelay *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FixedTroposphericDelay_getDefaultModel(PyTypeObject *type);
          static PyObject *t_FixedTroposphericDelay_getParametersDrivers(t_FixedTroposphericDelay *self);
          static PyObject *t_FixedTroposphericDelay_pathDelay(t_FixedTroposphericDelay *self, PyObject *args);
          static PyObject *t_FixedTroposphericDelay_get__defaultModel(t_FixedTroposphericDelay *self, void *data);
          static PyObject *t_FixedTroposphericDelay_get__parametersDrivers(t_FixedTroposphericDelay *self, void *data);
          static PyGetSetDef t_FixedTroposphericDelay__fields_[] = {
            DECLARE_GET_FIELD(t_FixedTroposphericDelay, defaultModel),
            DECLARE_GET_FIELD(t_FixedTroposphericDelay, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FixedTroposphericDelay__methods_[] = {
            DECLARE_METHOD(t_FixedTroposphericDelay, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, getDefaultModel, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_FixedTroposphericDelay, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_FixedTroposphericDelay, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FixedTroposphericDelay)[] = {
            { Py_tp_methods, t_FixedTroposphericDelay__methods_ },
            { Py_tp_init, (void *) t_FixedTroposphericDelay_init_ },
            { Py_tp_getset, t_FixedTroposphericDelay__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FixedTroposphericDelay)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FixedTroposphericDelay, t_FixedTroposphericDelay, FixedTroposphericDelay);

          void t_FixedTroposphericDelay::install(PyObject *module)
          {
            installType(&PY_TYPE(FixedTroposphericDelay), &PY_TYPE_DEF(FixedTroposphericDelay), module, "FixedTroposphericDelay", 0);
          }

          void t_FixedTroposphericDelay::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "class_", make_descriptor(FixedTroposphericDelay::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "wrapfn_", make_descriptor(t_FixedTroposphericDelay::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FixedTroposphericDelay), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FixedTroposphericDelay_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FixedTroposphericDelay::initializeClass, 1)))
              return NULL;
            return t_FixedTroposphericDelay::wrap_Object(FixedTroposphericDelay(((t_FixedTroposphericDelay *) arg)->object.this$));
          }
          static PyObject *t_FixedTroposphericDelay_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FixedTroposphericDelay::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FixedTroposphericDelay_init_(t_FixedTroposphericDelay *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< JArray< jdouble > > a2((jobject) NULL);
                FixedTroposphericDelay object((jobject) NULL);

                if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
                {
                  INT_CALL(object = FixedTroposphericDelay(a0, a1, a2));
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

          static PyObject *t_FixedTroposphericDelay_getDefaultModel(PyTypeObject *type)
          {
            FixedTroposphericDelay result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::models::earth::troposphere::FixedTroposphericDelay::getDefaultModel());
            return t_FixedTroposphericDelay::wrap_Object(result);
          }

          static PyObject *t_FixedTroposphericDelay_getParametersDrivers(t_FixedTroposphericDelay *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_FixedTroposphericDelay_pathDelay(t_FixedTroposphericDelay *self, PyObject *args)
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

          static PyObject *t_FixedTroposphericDelay_get__defaultModel(t_FixedTroposphericDelay *self, void *data)
          {
            FixedTroposphericDelay value((jobject) NULL);
            OBJ_CALL(value = self->object.getDefaultModel());
            return t_FixedTroposphericDelay::wrap_Object(value);
          }

          static PyObject *t_FixedTroposphericDelay_get__parametersDrivers(t_FixedTroposphericDelay *self, void *data)
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
#include "org/orekit/models/earth/ionosphere/KlobucharIonoCoefficientsLoader.h"
#include "org/orekit/time/DateComponents.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *KlobucharIonoCoefficientsLoader::class$ = NULL;
          jmethodID *KlobucharIonoCoefficientsLoader::mids$ = NULL;
          bool KlobucharIonoCoefficientsLoader::live$ = false;
          ::java::lang::String *KlobucharIonoCoefficientsLoader::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass KlobucharIonoCoefficientsLoader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/KlobucharIonoCoefficientsLoader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_28c7bdc075bb74e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getAlpha_a53a7513ecedada2] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_getBeta_a53a7513ecedada2] = env->getMethodID(cls, "getBeta", "()[D");
              mids$[mid_getSupportedNames_3cffd47377eca18a] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_loadKlobucharIonosphericCoefficients_0640e6acf969ed28] = env->getMethodID(cls, "loadKlobucharIonosphericCoefficients", "()V");
              mids$[mid_loadKlobucharIonosphericCoefficients_4d2eb60c6d6ac3df] = env->getMethodID(cls, "loadKlobucharIonosphericCoefficients", "(Lorg/orekit/time/DateComponents;)V");
              mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader() : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_28c7bdc075bb74e8, a0.this$, a1.this$)) {}

          JArray< jdouble > KlobucharIonoCoefficientsLoader::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_a53a7513ecedada2]));
          }

          JArray< jdouble > KlobucharIonoCoefficientsLoader::getBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBeta_a53a7513ecedada2]));
          }

          ::java::lang::String KlobucharIonoCoefficientsLoader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_3cffd47377eca18a]));
          }

          void KlobucharIonoCoefficientsLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
          }

          void KlobucharIonoCoefficientsLoader::loadKlobucharIonosphericCoefficients() const
          {
            env->callVoidMethod(this$, mids$[mid_loadKlobucharIonosphericCoefficients_0640e6acf969ed28]);
          }

          void KlobucharIonoCoefficientsLoader::loadKlobucharIonosphericCoefficients(const ::org::orekit::time::DateComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_loadKlobucharIonosphericCoefficients_4d2eb60c6d6ac3df], a0.this$);
          }

          jboolean KlobucharIonoCoefficientsLoader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
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
        namespace ionosphere {
          static PyObject *t_KlobucharIonoCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KlobucharIonoCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KlobucharIonoCoefficientsLoader_init_(t_KlobucharIonoCoefficientsLoader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getAlpha(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getBeta(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getSupportedNames(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_loadData(t_KlobucharIonoCoefficientsLoader *self, PyObject *args);
          static PyObject *t_KlobucharIonoCoefficientsLoader_loadKlobucharIonosphericCoefficients(t_KlobucharIonoCoefficientsLoader *self, PyObject *args);
          static PyObject *t_KlobucharIonoCoefficientsLoader_stillAcceptsData(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__alpha(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__beta(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__supportedNames(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyGetSetDef t_KlobucharIonoCoefficientsLoader__fields_[] = {
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, alpha),
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, beta),
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KlobucharIonoCoefficientsLoader__methods_[] = {
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getBeta, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, loadKlobucharIonosphericCoefficients, METH_VARARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KlobucharIonoCoefficientsLoader)[] = {
            { Py_tp_methods, t_KlobucharIonoCoefficientsLoader__methods_ },
            { Py_tp_init, (void *) t_KlobucharIonoCoefficientsLoader_init_ },
            { Py_tp_getset, t_KlobucharIonoCoefficientsLoader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KlobucharIonoCoefficientsLoader)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(KlobucharIonoCoefficientsLoader, t_KlobucharIonoCoefficientsLoader, KlobucharIonoCoefficientsLoader);

          void t_KlobucharIonoCoefficientsLoader::install(PyObject *module)
          {
            installType(&PY_TYPE(KlobucharIonoCoefficientsLoader), &PY_TYPE_DEF(KlobucharIonoCoefficientsLoader), module, "KlobucharIonoCoefficientsLoader", 0);
          }

          void t_KlobucharIonoCoefficientsLoader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "class_", make_descriptor(KlobucharIonoCoefficientsLoader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "wrapfn_", make_descriptor(t_KlobucharIonoCoefficientsLoader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "boxfn_", make_descriptor(boxObject));
            env->getClass(KlobucharIonoCoefficientsLoader::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*KlobucharIonoCoefficientsLoader::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KlobucharIonoCoefficientsLoader::initializeClass, 1)))
              return NULL;
            return t_KlobucharIonoCoefficientsLoader::wrap_Object(KlobucharIonoCoefficientsLoader(((t_KlobucharIonoCoefficientsLoader *) arg)->object.this$));
          }
          static PyObject *t_KlobucharIonoCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KlobucharIonoCoefficientsLoader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KlobucharIonoCoefficientsLoader_init_(t_KlobucharIonoCoefficientsLoader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                INT_CALL(object = KlobucharIonoCoefficientsLoader());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = KlobucharIonoCoefficientsLoader(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = KlobucharIonoCoefficientsLoader(a0, a1));
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

          static PyObject *t_KlobucharIonoCoefficientsLoader_getAlpha(t_KlobucharIonoCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_getBeta(t_KlobucharIonoCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBeta());
            return result.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_getSupportedNames(t_KlobucharIonoCoefficientsLoader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_loadData(t_KlobucharIonoCoefficientsLoader *self, PyObject *args)
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

          static PyObject *t_KlobucharIonoCoefficientsLoader_loadKlobucharIonosphericCoefficients(t_KlobucharIonoCoefficientsLoader *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                OBJ_CALL(self->object.loadKlobucharIonosphericCoefficients());
                Py_RETURN_NONE;
              }
              break;
             case 1:
              {
                ::org::orekit::time::DateComponents a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.loadKlobucharIonosphericCoefficients(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "loadKlobucharIonosphericCoefficients", args);
            return NULL;
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_stillAcceptsData(t_KlobucharIonoCoefficientsLoader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__alpha(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__beta(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeta());
            return value.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__supportedNames(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalMeasurementHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/filtering/kalman/KalmanFilter.h"
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
            mids$[mid_init$_9053bb5f9077f088] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/sequential/SemiAnalyticalProcess;Lorg/hipparchus/filtering/kalman/KalmanFilter;Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_bcee30128220ba56] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/sequential/SemiAnalyticalProcess;Lorg/hipparchus/filtering/kalman/KalmanFilter;Ljava/util/List;Lorg/orekit/time/AbsoluteDate;Z)V");
            mids$[mid_handleStep_729a66b1e94503de] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SemiAnalyticalMeasurementHandler::SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess & a0, const ::org::hipparchus::filtering::kalman::KalmanFilter & a1, const ::java::util::List & a2, const ::org::orekit::time::AbsoluteDate & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9053bb5f9077f088, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        SemiAnalyticalMeasurementHandler::SemiAnalyticalMeasurementHandler(const ::org::orekit::estimation::sequential::SemiAnalyticalProcess & a0, const ::org::hipparchus::filtering::kalman::KalmanFilter & a1, const ::java::util::List & a2, const ::org::orekit::time::AbsoluteDate & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bcee30128220ba56, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

        void SemiAnalyticalMeasurementHandler::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_729a66b1e94503de], a0.this$);
        }

        void SemiAnalyticalMeasurementHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
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
#include "org/orekit/time/AGILeapSecondFilesLoader.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AGILeapSecondFilesLoader::class$ = NULL;
      jmethodID *AGILeapSecondFilesLoader::mids$ = NULL;
      bool AGILeapSecondFilesLoader::live$ = false;
      ::java::lang::String *AGILeapSecondFilesLoader::DEFAULT_SUPPORTED_NAMES = NULL;

      jclass AGILeapSecondFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AGILeapSecondFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_28c7bdc075bb74e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_0d9551367f7ecdef] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AGILeapSecondFilesLoader::AGILeapSecondFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      AGILeapSecondFilesLoader::AGILeapSecondFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_28c7bdc075bb74e8, a0.this$, a1.this$)) {}

      ::java::util::List AGILeapSecondFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_0d9551367f7ecdef]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_AGILeapSecondFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AGILeapSecondFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AGILeapSecondFilesLoader_init_(t_AGILeapSecondFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AGILeapSecondFilesLoader_loadOffsets(t_AGILeapSecondFilesLoader *self);

      static PyMethodDef t_AGILeapSecondFilesLoader__methods_[] = {
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AGILeapSecondFilesLoader)[] = {
        { Py_tp_methods, t_AGILeapSecondFilesLoader__methods_ },
        { Py_tp_init, (void *) t_AGILeapSecondFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AGILeapSecondFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(AGILeapSecondFilesLoader, t_AGILeapSecondFilesLoader, AGILeapSecondFilesLoader);

      void t_AGILeapSecondFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AGILeapSecondFilesLoader), &PY_TYPE_DEF(AGILeapSecondFilesLoader), module, "AGILeapSecondFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(AGILeapSecondFilesLoader$Parser)));
      }

      void t_AGILeapSecondFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "class_", make_descriptor(AGILeapSecondFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "wrapfn_", make_descriptor(t_AGILeapSecondFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(AGILeapSecondFilesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*AGILeapSecondFilesLoader::DEFAULT_SUPPORTED_NAMES)));
      }

      static PyObject *t_AGILeapSecondFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AGILeapSecondFilesLoader::initializeClass, 1)))
          return NULL;
        return t_AGILeapSecondFilesLoader::wrap_Object(AGILeapSecondFilesLoader(((t_AGILeapSecondFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_AGILeapSecondFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AGILeapSecondFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AGILeapSecondFilesLoader_init_(t_AGILeapSecondFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            AGILeapSecondFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = AGILeapSecondFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            AGILeapSecondFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AGILeapSecondFilesLoader(a0, a1));
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

      static PyObject *t_AGILeapSecondFilesLoader_loadOffsets(t_AGILeapSecondFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/InputStream.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *InputStream::class$ = NULL;
    jmethodID *InputStream::mids$ = NULL;
    bool InputStream::live$ = false;

    jclass InputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/InputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_available_412668abc8d889e9] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_0640e6acf969ed28] = env->getMethodID(cls, "close", "()V");
        mids$[mid_mark_a3da1a935cb37f7b] = env->getMethodID(cls, "mark", "(I)V");
        mids$[mid_markSupported_89b302893bdbe1f1] = env->getMethodID(cls, "markSupported", "()Z");
        mids$[mid_nullInputStream_ce4348991af8a1a1] = env->getStaticMethodID(cls, "nullInputStream", "()Ljava/io/InputStream;");
        mids$[mid_read_412668abc8d889e9] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_67c88f2bf4e7f8b2] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_68a76742c8623fb3] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_readAllBytes_db390e6336d82be3] = env->getMethodID(cls, "readAllBytes", "()[B");
        mids$[mid_readNBytes_370924a79b5496dd] = env->getMethodID(cls, "readNBytes", "(I)[B");
        mids$[mid_readNBytes_68a76742c8623fb3] = env->getMethodID(cls, "readNBytes", "([BII)I");
        mids$[mid_reset_0640e6acf969ed28] = env->getMethodID(cls, "reset", "()V");
        mids$[mid_skip_f4ad805a81234b49] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_transferTo_780ebc62202e0349] = env->getMethodID(cls, "transferTo", "(Ljava/io/OutputStream;)J");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    InputStream::InputStream() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

    jint InputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_412668abc8d889e9]);
    }

    void InputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_0640e6acf969ed28]);
    }

    void InputStream::mark(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_mark_a3da1a935cb37f7b], a0);
    }

    jboolean InputStream::markSupported() const
    {
      return env->callBooleanMethod(this$, mids$[mid_markSupported_89b302893bdbe1f1]);
    }

    InputStream InputStream::nullInputStream()
    {
      jclass cls = env->getClass(initializeClass);
      return InputStream(env->callStaticObjectMethod(cls, mids$[mid_nullInputStream_ce4348991af8a1a1]));
    }

    jint InputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_412668abc8d889e9]);
    }

    jint InputStream::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_67c88f2bf4e7f8b2], a0.this$);
    }

    jint InputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_68a76742c8623fb3], a0.this$, a1, a2);
    }

    JArray< jbyte > InputStream::readAllBytes() const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_readAllBytes_db390e6336d82be3]));
    }

    JArray< jbyte > InputStream::readNBytes(jint a0) const
    {
      return JArray< jbyte >(env->callObjectMethod(this$, mids$[mid_readNBytes_370924a79b5496dd], a0));
    }

    jint InputStream::readNBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_readNBytes_68a76742c8623fb3], a0.this$, a1, a2);
    }

    void InputStream::reset() const
    {
      env->callVoidMethod(this$, mids$[mid_reset_0640e6acf969ed28]);
    }

    jlong InputStream::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_f4ad805a81234b49], a0);
    }

    jlong InputStream::transferTo(const ::java::io::OutputStream & a0) const
    {
      return env->callLongMethod(this$, mids$[mid_transferTo_780ebc62202e0349], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_InputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_InputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_InputStream_init_(t_InputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_InputStream_available(t_InputStream *self);
    static PyObject *t_InputStream_close(t_InputStream *self);
    static PyObject *t_InputStream_mark(t_InputStream *self, PyObject *arg);
    static PyObject *t_InputStream_markSupported(t_InputStream *self);
    static PyObject *t_InputStream_nullInputStream(PyTypeObject *type);
    static PyObject *t_InputStream_read(t_InputStream *self, PyObject *args);
    static PyObject *t_InputStream_readAllBytes(t_InputStream *self);
    static PyObject *t_InputStream_readNBytes(t_InputStream *self, PyObject *args);
    static PyObject *t_InputStream_reset(t_InputStream *self);
    static PyObject *t_InputStream_skip(t_InputStream *self, PyObject *arg);
    static PyObject *t_InputStream_transferTo(t_InputStream *self, PyObject *arg);

    static PyMethodDef t_InputStream__methods_[] = {
      DECLARE_METHOD(t_InputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_InputStream, available, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, close, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, mark, METH_O),
      DECLARE_METHOD(t_InputStream, markSupported, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, nullInputStream, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_InputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_InputStream, readAllBytes, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, readNBytes, METH_VARARGS),
      DECLARE_METHOD(t_InputStream, reset, METH_NOARGS),
      DECLARE_METHOD(t_InputStream, skip, METH_O),
      DECLARE_METHOD(t_InputStream, transferTo, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(InputStream)[] = {
      { Py_tp_methods, t_InputStream__methods_ },
      { Py_tp_init, (void *) t_InputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(InputStream)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(InputStream, t_InputStream, InputStream);

    void t_InputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(InputStream), &PY_TYPE_DEF(InputStream), module, "InputStream", 0);
    }

    void t_InputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "class_", make_descriptor(InputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "wrapfn_", make_descriptor(t_InputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(InputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_InputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, InputStream::initializeClass, 1)))
        return NULL;
      return t_InputStream::wrap_Object(InputStream(((t_InputStream *) arg)->object.this$));
    }
    static PyObject *t_InputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, InputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_InputStream_init_(t_InputStream *self, PyObject *args, PyObject *kwds)
    {
      InputStream object((jobject) NULL);

      INT_CALL(object = InputStream());
      self->object = object;

      return 0;
    }

    static PyObject *t_InputStream_available(t_InputStream *self)
    {
      jint result;
      OBJ_CALL(result = self->object.available());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_InputStream_close(t_InputStream *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_InputStream_mark(t_InputStream *self, PyObject *arg)
    {
      jint a0;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(self->object.mark(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "mark", arg);
      return NULL;
    }

    static PyObject *t_InputStream_markSupported(t_InputStream *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.markSupported());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_InputStream_nullInputStream(PyTypeObject *type)
    {
      InputStream result((jobject) NULL);
      OBJ_CALL(result = ::java::io::InputStream::nullInputStream());
      return t_InputStream::wrap_Object(result);
    }

    static PyObject *t_InputStream_read(t_InputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "read", args);
      return NULL;
    }

    static PyObject *t_InputStream_readAllBytes(t_InputStream *self)
    {
      JArray< jbyte > result((jobject) NULL);
      OBJ_CALL(result = self->object.readAllBytes());
      return result.wrap();
    }

    static PyObject *t_InputStream_readNBytes(t_InputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jint a0;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.readNBytes(a0));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.readNBytes(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "readNBytes", args);
      return NULL;
    }

    static PyObject *t_InputStream_reset(t_InputStream *self)
    {
      OBJ_CALL(self->object.reset());
      Py_RETURN_NONE;
    }

    static PyObject *t_InputStream_skip(t_InputStream *self, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "skip", arg);
      return NULL;
    }

    static PyObject *t_InputStream_transferTo(t_InputStream *self, PyObject *arg)
    {
      ::java::io::OutputStream a0((jobject) NULL);
      jlong result;

      if (!parseArg(arg, "k", ::java::io::OutputStream::initializeClass, &a0))
      {
        OBJ_CALL(result = self->object.transferTo(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError((PyObject *) self, "transferTo", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {

          ::java::lang::Class *PythonDTM2000InputParameters::class$ = NULL;
          jmethodID *PythonDTM2000InputParameters::mids$ = NULL;
          bool PythonDTM2000InputParameters::live$ = false;

          jclass PythonDTM2000InputParameters::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/PythonDTM2000InputParameters");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_get24HoursKp_b0b988f941da47d8] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getInstantFlux_b0b988f941da47d8] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getMeanFlux_b0b988f941da47d8] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getThreeHourlyKP_b0b988f941da47d8] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonDTM2000InputParameters::PythonDTM2000InputParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonDTM2000InputParameters::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonDTM2000InputParameters::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonDTM2000InputParameters::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonDTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonDTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonDTM2000InputParameters_init_(t_PythonDTM2000InputParameters *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonDTM2000InputParameters_finalize(t_PythonDTM2000InputParameters *self);
          static PyObject *t_PythonDTM2000InputParameters_pythonExtension(t_PythonDTM2000InputParameters *self, PyObject *args);
          static jdouble JNICALL t_PythonDTM2000InputParameters_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getInstantFlux1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDTM2000InputParameters_getMaxDate2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getMeanFlux3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonDTM2000InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonDTM2000InputParameters_getThreeHourlyKP5(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonDTM2000InputParameters_pythonDecRef6(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonDTM2000InputParameters_get__self(t_PythonDTM2000InputParameters *self, void *data);
          static PyGetSetDef t_PythonDTM2000InputParameters__fields_[] = {
            DECLARE_GET_FIELD(t_PythonDTM2000InputParameters, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonDTM2000InputParameters__methods_[] = {
            DECLARE_METHOD(t_PythonDTM2000InputParameters, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonDTM2000InputParameters, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonDTM2000InputParameters)[] = {
            { Py_tp_methods, t_PythonDTM2000InputParameters__methods_ },
            { Py_tp_init, (void *) t_PythonDTM2000InputParameters_init_ },
            { Py_tp_getset, t_PythonDTM2000InputParameters__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonDTM2000InputParameters)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonDTM2000InputParameters, t_PythonDTM2000InputParameters, PythonDTM2000InputParameters);

          void t_PythonDTM2000InputParameters::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonDTM2000InputParameters), &PY_TYPE_DEF(PythonDTM2000InputParameters), module, "PythonDTM2000InputParameters", 1);
          }

          void t_PythonDTM2000InputParameters::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "class_", make_descriptor(PythonDTM2000InputParameters::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "wrapfn_", make_descriptor(t_PythonDTM2000InputParameters::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDTM2000InputParameters), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonDTM2000InputParameters::initializeClass);
            JNINativeMethod methods[] = {
              { "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_get24HoursKp0 },
              { "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getInstantFlux1 },
              { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonDTM2000InputParameters_getMaxDate2 },
              { "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getMeanFlux3 },
              { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonDTM2000InputParameters_getMinDate4 },
              { "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonDTM2000InputParameters_getThreeHourlyKP5 },
              { "pythonDecRef", "()V", (void *) t_PythonDTM2000InputParameters_pythonDecRef6 },
            };
            env->registerNatives(cls, methods, 7);
          }

          static PyObject *t_PythonDTM2000InputParameters_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonDTM2000InputParameters::initializeClass, 1)))
              return NULL;
            return t_PythonDTM2000InputParameters::wrap_Object(PythonDTM2000InputParameters(((t_PythonDTM2000InputParameters *) arg)->object.this$));
          }
          static PyObject *t_PythonDTM2000InputParameters_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonDTM2000InputParameters::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonDTM2000InputParameters_init_(t_PythonDTM2000InputParameters *self, PyObject *args, PyObject *kwds)
          {
            PythonDTM2000InputParameters object((jobject) NULL);

            INT_CALL(object = PythonDTM2000InputParameters());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonDTM2000InputParameters_finalize(t_PythonDTM2000InputParameters *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonDTM2000InputParameters_pythonExtension(t_PythonDTM2000InputParameters *self, PyObject *args)
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_get24HoursKp0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "get24HoursKp", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("get24HoursKp", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonDTM2000InputParameters_getInstantFlux1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getInstantFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getInstantFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonDTM2000InputParameters_getMaxDate2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMaxDate", result);
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getMeanFlux3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getMeanFlux", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMeanFlux", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonDTM2000InputParameters_getMinDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getMinDate", result);
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

          static jdouble JNICALL t_PythonDTM2000InputParameters_getThreeHourlyKP5(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThreeHourlyKP", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getThreeHourlyKP", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static void JNICALL t_PythonDTM2000InputParameters_pythonDecRef6(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonDTM2000InputParameters::mids$[PythonDTM2000InputParameters::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonDTM2000InputParameters_get__self(t_PythonDTM2000InputParameters *self, void *data)
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
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimation::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimation::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimation::live$ = false;
            ::java::lang::String *MarshallSolarActivityFutureEstimation::DEFAULT_SUPPORTED_NAMES = NULL;

            jclass MarshallSolarActivityFutureEstimation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3ec7eea9830771ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_e392516865664de5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_c4c299c8a306aef5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_689592c643358bb5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_init$_476b77da02fe834a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataSource;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_init$_0456b112dff413d3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScale;IDDD)V");
                mids$[mid_get24HoursKp_b0b988f941da47d8] = env->getMethodID(cls, "get24HoursKp", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getAp_89e8b78e4211e023] = env->getMethodID(cls, "getAp", "(Lorg/orekit/time/AbsoluteDate;)[D");
                mids$[mid_getAverageFlux_b0b988f941da47d8] = env->getMethodID(cls, "getAverageFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getDailyFlux_b0b988f941da47d8] = env->getMethodID(cls, "getDailyFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getFileDate_cbc22955a45bd9a2] = env->getMethodID(cls, "getFileDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/DateComponents;");
                mids$[mid_getInstantFlux_b0b988f941da47d8] = env->getMethodID(cls, "getInstantFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getMeanFlux_b0b988f941da47d8] = env->getMethodID(cls, "getMeanFlux", "(Lorg/orekit/time/AbsoluteDate;)D");
                mids$[mid_getStrengthLevel_ca23ece2c9c96552] = env->getMethodID(cls, "getStrengthLevel", "()Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");
                mids$[mid_getThreeHourlyKP_b0b988f941da47d8] = env->getMethodID(cls, "getThreeHourlyKP", "(Lorg/orekit/time/AbsoluteDate;)D");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_3ec7eea9830771ac, a0.this$, a1.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_e392516865664de5, a0.this$, a1.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_c4c299c8a306aef5, a0.this$, a1.this$, a2.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_689592c643358bb5, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::org::orekit::data::DataSource & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::time::TimeScale & a2, jint a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_476b77da02fe834a, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

            MarshallSolarActivityFutureEstimation::MarshallSolarActivityFutureEstimation(const ::java::lang::String & a0, const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a1, const ::org::orekit::data::DataProvidersManager & a2, const ::org::orekit::time::TimeScale & a3, jint a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData(env->newObject(initializeClass, &mids$, mid_init$_0456b112dff413d3, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7)) {}

            jdouble MarshallSolarActivityFutureEstimation::get24HoursKp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_get24HoursKp_b0b988f941da47d8], a0.this$);
            }

            JArray< jdouble > MarshallSolarActivityFutureEstimation::getAp(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAp_89e8b78e4211e023], a0.this$));
            }

            jdouble MarshallSolarActivityFutureEstimation::getAverageFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAverageFlux_b0b988f941da47d8], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimation::getDailyFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDailyFlux_b0b988f941da47d8], a0.this$);
            }

            ::org::orekit::time::DateComponents MarshallSolarActivityFutureEstimation::getFileDate(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return ::org::orekit::time::DateComponents(env->callObjectMethod(this$, mids$[mid_getFileDate_cbc22955a45bd9a2], a0.this$));
            }

            jdouble MarshallSolarActivityFutureEstimation::getInstantFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInstantFlux_b0b988f941da47d8], a0.this$);
            }

            jdouble MarshallSolarActivityFutureEstimation::getMeanFlux(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanFlux_b0b988f941da47d8], a0.this$);
            }

            ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel MarshallSolarActivityFutureEstimation::getStrengthLevel() const
            {
              return ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel(env->callObjectMethod(this$, mids$[mid_getStrengthLevel_ca23ece2c9c96552]));
            }

            jdouble MarshallSolarActivityFutureEstimation::getThreeHourlyKP(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getThreeHourlyKP_b0b988f941da47d8], a0.this$);
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
            static PyObject *t_MarshallSolarActivityFutureEstimation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_of_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static int t_MarshallSolarActivityFutureEstimation_init_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get24HoursKp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getAp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getAverageFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getDailyFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getFileDate(t_MarshallSolarActivityFutureEstimation *self, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getInstantFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getMeanFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getStrengthLevel(t_MarshallSolarActivityFutureEstimation *self);
            static PyObject *t_MarshallSolarActivityFutureEstimation_getThreeHourlyKP(t_MarshallSolarActivityFutureEstimation *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__strengthLevel(t_MarshallSolarActivityFutureEstimation *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__parameters_(t_MarshallSolarActivityFutureEstimation *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimation__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation, strengthLevel),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimation__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, get24HoursKp, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getAp, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getAverageFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getDailyFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getFileDate, METH_O),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getInstantFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getMeanFlux, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getStrengthLevel, METH_NOARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation, getThreeHourlyKP, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimation)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimation__methods_ },
              { Py_tp_init, (void *) t_MarshallSolarActivityFutureEstimation_init_ },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimation)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityData),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimation, t_MarshallSolarActivityFutureEstimation, MarshallSolarActivityFutureEstimation);
            PyObject *t_MarshallSolarActivityFutureEstimation::wrap_Object(const MarshallSolarActivityFutureEstimation& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation *self = (t_MarshallSolarActivityFutureEstimation *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimation::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation *self = (t_MarshallSolarActivityFutureEstimation *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimation::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimation), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimation), module, "MarshallSolarActivityFutureEstimation", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "StrengthLevel", make_descriptor(&PY_TYPE_DEF(MarshallSolarActivityFutureEstimation$StrengthLevel)));
            }

            void t_MarshallSolarActivityFutureEstimation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "class_", make_descriptor(MarshallSolarActivityFutureEstimation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "boxfn_", make_descriptor(boxObject));
              env->getClass(MarshallSolarActivityFutureEstimation::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*MarshallSolarActivityFutureEstimation::DEFAULT_SUPPORTED_NAMES)));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimation::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimation::wrap_Object(MarshallSolarActivityFutureEstimation(((t_MarshallSolarActivityFutureEstimation *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_of_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_MarshallSolarActivityFutureEstimation_init_(t_MarshallSolarActivityFutureEstimation *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sK", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kK", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 3:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kKk", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 4:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sKkk", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::org::orekit::data::DataSource a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::time::TimeScale a2((jobject) NULL);
                  jint a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "kKkIDDD", ::org::orekit::data::DataSource::initializeClass, ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
                    break;
                  }
                }
                goto err;
               case 8:
                {
                  ::java::lang::String a0((jobject) NULL);
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::data::DataProvidersManager a2((jobject) NULL);
                  ::org::orekit::time::TimeScale a3((jobject) NULL);
                  jint a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  MarshallSolarActivityFutureEstimation object((jobject) NULL);

                  if (!parseArgs(args, "sKkkIDDD", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &p1, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a2, &a3, &a4, &a5, &a6, &a7))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimation(a0, a1, a2, a3, a4, a5, a6, a7));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    self->parameters[1] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader);
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

            static PyObject *t_MarshallSolarActivityFutureEstimation_get24HoursKp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.get24HoursKp(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "get24HoursKp", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getAp(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAp(a0));
                return result.wrap();
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getAp", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getAverageFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getAverageFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getAverageFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getDailyFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getDailyFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getDailyFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getFileDate(t_MarshallSolarActivityFutureEstimation *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::time::DateComponents result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFileDate(a0));
                return ::org::orekit::time::t_DateComponents::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getFileDate", arg);
              return NULL;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getInstantFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getInstantFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getInstantFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getMeanFlux(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMeanFlux(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getMeanFlux", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getStrengthLevel(t_MarshallSolarActivityFutureEstimation *self)
            {
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel result((jobject) NULL);
              OBJ_CALL(result = self->object.getStrengthLevel());
              return ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(result);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_getThreeHourlyKP(t_MarshallSolarActivityFutureEstimation *self, PyObject *args)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThreeHourlyKP(a0));
                return PyFloat_FromDouble((double) result);
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimation), (PyObject *) self, "getThreeHourlyKP", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation_get__parameters_(t_MarshallSolarActivityFutureEstimation *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation_get__strengthLevel(t_MarshallSolarActivityFutureEstimation *self, void *data)
            {
              ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel value((jobject) NULL);
              OBJ_CALL(value = self->object.getStrengthLevel());
              return ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseFieldMatrix.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseFieldMatrix::class$ = NULL;
      jmethodID *SparseFieldMatrix::mids$ = NULL;
      bool SparseFieldMatrix::live$ = false;

      jclass SparseFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_979ae7f57a96b096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_33e6ddbf6bb140a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_init$_a9ccb012d4cb48bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_addToEntry_a6d8caed839ba827] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_1d6b27621d7bea96] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createMatrix_f57999d9fe0fa8c7] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getEntry_a7f16df0741fd579] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_multiplyEntry_a6d8caed839ba827] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_60dc3401cb1a0936] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_setEntry_a6d8caed839ba827] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_transposeMultiply_60dc3401cb1a0936] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::Field & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_979ae7f57a96b096, a0.this$)) {}

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::linear::FieldMatrix & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_33e6ddbf6bb140a5, a0.this$)) {}

      SparseFieldMatrix::SparseFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_a9ccb012d4cb48bd, a0.this$, a1, a2)) {}

      void SparseFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_1d6b27621d7bea96]));
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_f57999d9fe0fa8c7], a0, a1));
      }

      jint SparseFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::FieldElement SparseFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_a7f16df0741fd579], a0, a1));
      }

      jint SparseFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      void SparseFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_60dc3401cb1a0936], a0.this$));
      }

      void SparseFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_a6d8caed839ba827], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix SparseFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_60dc3401cb1a0936], a0.this$));
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
      static PyObject *t_SparseFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseFieldMatrix_of_(t_SparseFieldMatrix *self, PyObject *args);
      static int t_SparseFieldMatrix_init_(t_SparseFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SparseFieldMatrix_addToEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_copy(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_createMatrix(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getColumnDimension(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_getRowDimension(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_multiplyEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_multiplyTransposed(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_setEntry(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_transposeMultiply(t_SparseFieldMatrix *self, PyObject *args);
      static PyObject *t_SparseFieldMatrix_get__columnDimension(t_SparseFieldMatrix *self, void *data);
      static PyObject *t_SparseFieldMatrix_get__rowDimension(t_SparseFieldMatrix *self, void *data);
      static PyObject *t_SparseFieldMatrix_get__parameters_(t_SparseFieldMatrix *self, void *data);
      static PyGetSetDef t_SparseFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_SparseFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_SparseFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_SparseFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SparseFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_SparseFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_SparseFieldMatrix, transposeMultiply, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseFieldMatrix)[] = {
        { Py_tp_methods, t_SparseFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_SparseFieldMatrix_init_ },
        { Py_tp_getset, t_SparseFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(SparseFieldMatrix, t_SparseFieldMatrix, SparseFieldMatrix);
      PyObject *t_SparseFieldMatrix::wrap_Object(const SparseFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldMatrix *self = (t_SparseFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SparseFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SparseFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SparseFieldMatrix *self = (t_SparseFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SparseFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseFieldMatrix), &PY_TYPE_DEF(SparseFieldMatrix), module, "SparseFieldMatrix", 0);
      }

      void t_SparseFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "class_", make_descriptor(SparseFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "wrapfn_", make_descriptor(t_SparseFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_SparseFieldMatrix::wrap_Object(SparseFieldMatrix(((t_SparseFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_SparseFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SparseFieldMatrix_of_(t_SparseFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SparseFieldMatrix_init_(t_SparseFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = SparseFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              INT_CALL(object = SparseFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            SparseFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = SparseFieldMatrix(a0, a1, a2));
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

      static PyObject *t_SparseFieldMatrix_addToEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_copy(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_createMatrix(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getColumnDimension(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_getRowDimension(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_multiplyEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_multiplyTransposed(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiplyTransposed(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_setEntry(t_SparseFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_SparseFieldMatrix_transposeMultiply(t_SparseFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.transposeMultiply(a0));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(SparseFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }
      static PyObject *t_SparseFieldMatrix_get__parameters_(t_SparseFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_SparseFieldMatrix_get__columnDimension(t_SparseFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_SparseFieldMatrix_get__rowDimension(t_SparseFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/LaguerreSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *LaguerreSolver::class$ = NULL;
        jmethodID *LaguerreSolver::mids$ = NULL;
        bool LaguerreSolver::live$ = false;

        jclass LaguerreSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/LaguerreSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_doSolve_557b8123390d8d0c] = env->getMethodID(cls, "doSolve", "()D");
            mids$[mid_solveAllComplex_f7acb1d5dc64300c] = env->getMethodID(cls, "solveAllComplex", "([DD)[Lorg/hipparchus/complex/Complex;");
            mids$[mid_solveComplex_033e4e8b6b04318f] = env->getMethodID(cls, "solveComplex", "([DD)Lorg/hipparchus/complex/Complex;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LaguerreSolver::LaguerreSolver() : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0, jdouble a1) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        LaguerreSolver::LaguerreSolver(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::analysis::solvers::AbstractPolynomialSolver(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble LaguerreSolver::doSolve() const
        {
          return env->callDoubleMethod(this$, mids$[mid_doSolve_557b8123390d8d0c]);
        }

        JArray< ::org::hipparchus::complex::Complex > LaguerreSolver::solveAllComplex(const JArray< jdouble > & a0, jdouble a1) const
        {
          return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_solveAllComplex_f7acb1d5dc64300c], a0.this$, a1));
        }

        ::org::hipparchus::complex::Complex LaguerreSolver::solveComplex(const JArray< jdouble > & a0, jdouble a1) const
        {
          return ::org::hipparchus::complex::Complex(env->callObjectMethod(this$, mids$[mid_solveComplex_033e4e8b6b04318f], a0.this$, a1));
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
        static PyObject *t_LaguerreSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaguerreSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaguerreSolver_of_(t_LaguerreSolver *self, PyObject *args);
        static int t_LaguerreSolver_init_(t_LaguerreSolver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LaguerreSolver_doSolve(t_LaguerreSolver *self);
        static PyObject *t_LaguerreSolver_solveAllComplex(t_LaguerreSolver *self, PyObject *args);
        static PyObject *t_LaguerreSolver_solveComplex(t_LaguerreSolver *self, PyObject *args);
        static PyObject *t_LaguerreSolver_get__parameters_(t_LaguerreSolver *self, void *data);
        static PyGetSetDef t_LaguerreSolver__fields_[] = {
          DECLARE_GET_FIELD(t_LaguerreSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LaguerreSolver__methods_[] = {
          DECLARE_METHOD(t_LaguerreSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaguerreSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaguerreSolver, of_, METH_VARARGS),
          DECLARE_METHOD(t_LaguerreSolver, doSolve, METH_NOARGS),
          DECLARE_METHOD(t_LaguerreSolver, solveAllComplex, METH_VARARGS),
          DECLARE_METHOD(t_LaguerreSolver, solveComplex, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LaguerreSolver)[] = {
          { Py_tp_methods, t_LaguerreSolver__methods_ },
          { Py_tp_init, (void *) t_LaguerreSolver_init_ },
          { Py_tp_getset, t_LaguerreSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LaguerreSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::AbstractPolynomialSolver),
          NULL
        };

        DEFINE_TYPE(LaguerreSolver, t_LaguerreSolver, LaguerreSolver);
        PyObject *t_LaguerreSolver::wrap_Object(const LaguerreSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LaguerreSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LaguerreSolver *self = (t_LaguerreSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LaguerreSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LaguerreSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LaguerreSolver *self = (t_LaguerreSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LaguerreSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(LaguerreSolver), &PY_TYPE_DEF(LaguerreSolver), module, "LaguerreSolver", 0);
        }

        void t_LaguerreSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "class_", make_descriptor(LaguerreSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "wrapfn_", make_descriptor(t_LaguerreSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaguerreSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LaguerreSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LaguerreSolver::initializeClass, 1)))
            return NULL;
          return t_LaguerreSolver::wrap_Object(LaguerreSolver(((t_LaguerreSolver *) arg)->object.this$));
        }
        static PyObject *t_LaguerreSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LaguerreSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LaguerreSolver_of_(t_LaguerreSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LaguerreSolver_init_(t_LaguerreSolver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              LaguerreSolver object((jobject) NULL);

              INT_CALL(object = LaguerreSolver());
              self->object = object;
              self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
              break;
            }
           case 1:
            {
              jdouble a0;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = LaguerreSolver(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = LaguerreSolver(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              LaguerreSolver object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = LaguerreSolver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::analysis::polynomials::PY_TYPE(PolynomialFunction);
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

        static PyObject *t_LaguerreSolver_doSolve(t_LaguerreSolver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.doSolve());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaguerreSolver_solveAllComplex(t_LaguerreSolver *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.solveAllComplex(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "solveAllComplex", args);
          return NULL;
        }

        static PyObject *t_LaguerreSolver_solveComplex(t_LaguerreSolver *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::complex::Complex result((jobject) NULL);

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.solveComplex(a0, a1));
            return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "solveComplex", args);
          return NULL;
        }
        static PyObject *t_LaguerreSolver_get__parameters_(t_LaguerreSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersionLoader.h"
#include "org/orekit/frames/ItrfVersionProvider.h"
#include "org/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersionLoader::class$ = NULL;
      jmethodID *ITRFVersionLoader::mids$ = NULL;
      bool ITRFVersionLoader::live$ = false;
      ::java::lang::String *ITRFVersionLoader::SUPPORTED_NAMES = NULL;

      jclass ITRFVersionLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersionLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_28c7bdc075bb74e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_getConfiguration_a005f84471bdab98] = env->getMethodID(cls, "getConfiguration", "(Ljava/lang/String;I)Lorg/orekit/frames/ITRFVersionLoader$ITRFVersionConfiguration;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ITRFVersionLoader::ITRFVersionLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ITRFVersionLoader::ITRFVersionLoader(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

      ITRFVersionLoader::ITRFVersionLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_28c7bdc075bb74e8, a0.this$, a1.this$)) {}

      ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration ITRFVersionLoader::getConfiguration(const ::java::lang::String & a0, jint a1) const
      {
        return ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration(env->callObjectMethod(this$, mids$[mid_getConfiguration_a005f84471bdab98], a0.this$, a1));
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
      static PyObject *t_ITRFVersionLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersionLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ITRFVersionLoader_init_(t_ITRFVersionLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ITRFVersionLoader_getConfiguration(t_ITRFVersionLoader *self, PyObject *args);

      static PyMethodDef t_ITRFVersionLoader__methods_[] = {
        DECLARE_METHOD(t_ITRFVersionLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersionLoader, getConfiguration, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersionLoader)[] = {
        { Py_tp_methods, t_ITRFVersionLoader__methods_ },
        { Py_tp_init, (void *) t_ITRFVersionLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersionLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersionLoader, t_ITRFVersionLoader, ITRFVersionLoader);

      void t_ITRFVersionLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersionLoader), &PY_TYPE_DEF(ITRFVersionLoader), module, "ITRFVersionLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "ITRFVersionConfiguration", make_descriptor(&PY_TYPE_DEF(ITRFVersionLoader$ITRFVersionConfiguration)));
      }

      void t_ITRFVersionLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "class_", make_descriptor(ITRFVersionLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "wrapfn_", make_descriptor(t_ITRFVersionLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(ITRFVersionLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersionLoader), "SUPPORTED_NAMES", make_descriptor(j2p(*ITRFVersionLoader::SUPPORTED_NAMES)));
      }

      static PyObject *t_ITRFVersionLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersionLoader::initializeClass, 1)))
          return NULL;
        return t_ITRFVersionLoader::wrap_Object(ITRFVersionLoader(((t_ITRFVersionLoader *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersionLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersionLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ITRFVersionLoader_init_(t_ITRFVersionLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ITRFVersionLoader object((jobject) NULL);

            INT_CALL(object = ITRFVersionLoader());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ITRFVersionLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = ITRFVersionLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ITRFVersionLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ITRFVersionLoader(a0, a1));
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

      static PyObject *t_ITRFVersionLoader_getConfiguration(t_ITRFVersionLoader *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        jint a1;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration result((jobject) NULL);

        if (!parseArgs(args, "sI", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getConfiguration(a0, a1));
          return ::org::orekit::frames::t_ITRFVersionLoader$ITRFVersionConfiguration::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getConfiguration", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPFittedModel.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPFittedModel::class$ = NULL;
      jmethodID *EOPFittedModel::mids$ = NULL;
      bool EOPFittedModel::live$ = false;

      jclass EOPFittedModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPFittedModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1976cb232eca456f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;)V");
          mids$[mid_getDUT1_ad07f2befeccaaa5] = env->getMethodID(cls, "getDUT1", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getDx_ad07f2befeccaaa5] = env->getMethodID(cls, "getDx", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getDy_ad07f2befeccaaa5] = env->getMethodID(cls, "getDy", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getXp_ad07f2befeccaaa5] = env->getMethodID(cls, "getXp", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getYp_ad07f2befeccaaa5] = env->getMethodID(cls, "getYp", "()Lorg/orekit/utils/SecularAndHarmonic;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPFittedModel::EOPFittedModel(const ::org::orekit::utils::SecularAndHarmonic & a0, const ::org::orekit::utils::SecularAndHarmonic & a1, const ::org::orekit::utils::SecularAndHarmonic & a2, const ::org::orekit::utils::SecularAndHarmonic & a3, const ::org::orekit::utils::SecularAndHarmonic & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1976cb232eca456f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDUT1() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDUT1_ad07f2befeccaaa5]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDx() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDx_ad07f2befeccaaa5]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDy() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDy_ad07f2befeccaaa5]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getXp() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getXp_ad07f2befeccaaa5]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getYp() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getYp_ad07f2befeccaaa5]));
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
      static PyObject *t_EOPFittedModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPFittedModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPFittedModel_init_(t_EOPFittedModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPFittedModel_getDUT1(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getDx(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getDy(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getXp(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getYp(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_get__dUT1(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__dx(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__dy(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__xp(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__yp(t_EOPFittedModel *self, void *data);
      static PyGetSetDef t_EOPFittedModel__fields_[] = {
        DECLARE_GET_FIELD(t_EOPFittedModel, dUT1),
        DECLARE_GET_FIELD(t_EOPFittedModel, dx),
        DECLARE_GET_FIELD(t_EOPFittedModel, dy),
        DECLARE_GET_FIELD(t_EOPFittedModel, xp),
        DECLARE_GET_FIELD(t_EOPFittedModel, yp),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPFittedModel__methods_[] = {
        DECLARE_METHOD(t_EOPFittedModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFittedModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFittedModel, getDUT1, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getDx, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getDy, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getXp, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPFittedModel)[] = {
        { Py_tp_methods, t_EOPFittedModel__methods_ },
        { Py_tp_init, (void *) t_EOPFittedModel_init_ },
        { Py_tp_getset, t_EOPFittedModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPFittedModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPFittedModel, t_EOPFittedModel, EOPFittedModel);

      void t_EOPFittedModel::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPFittedModel), &PY_TYPE_DEF(EOPFittedModel), module, "EOPFittedModel", 0);
      }

      void t_EOPFittedModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "class_", make_descriptor(EOPFittedModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "wrapfn_", make_descriptor(t_EOPFittedModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPFittedModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPFittedModel::initializeClass, 1)))
          return NULL;
        return t_EOPFittedModel::wrap_Object(EOPFittedModel(((t_EOPFittedModel *) arg)->object.this$));
      }
      static PyObject *t_EOPFittedModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPFittedModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPFittedModel_init_(t_EOPFittedModel *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::SecularAndHarmonic a0((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a1((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a2((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a3((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a4((jobject) NULL);
        EOPFittedModel object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = EOPFittedModel(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPFittedModel_getDUT1(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDUT1());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getDx(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDx());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getDy(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDy());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getXp(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getXp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getYp(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getYp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_get__dUT1(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDUT1());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__dx(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDx());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__dy(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDy());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__xp(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getXp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__yp(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getYp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/ObservationTimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *ObservationTimeScale::class$ = NULL;
      jmethodID *ObservationTimeScale::mids$ = NULL;
      bool ObservationTimeScale::live$ = false;
      ObservationTimeScale *ObservationTimeScale::BDT = NULL;
      ObservationTimeScale *ObservationTimeScale::GAL = NULL;
      ObservationTimeScale *ObservationTimeScale::GLO = NULL;
      ObservationTimeScale *ObservationTimeScale::GPS = NULL;
      ObservationTimeScale *ObservationTimeScale::IRN = NULL;
      ObservationTimeScale *ObservationTimeScale::QZS = NULL;

      jclass ObservationTimeScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/ObservationTimeScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getTimeScale_dd32dd7783926716] = env->getMethodID(cls, "getTimeScale", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/time/TimeScale;");
          mids$[mid_valueOf_b6f3539bac5c61ce] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/ObservationTimeScale;");
          mids$[mid_values_46196e7a528ca38a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/ObservationTimeScale;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          BDT = new ObservationTimeScale(env->getStaticObjectField(cls, "BDT", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GAL = new ObservationTimeScale(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GLO = new ObservationTimeScale(env->getStaticObjectField(cls, "GLO", "Lorg/orekit/gnss/ObservationTimeScale;"));
          GPS = new ObservationTimeScale(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/gnss/ObservationTimeScale;"));
          IRN = new ObservationTimeScale(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/gnss/ObservationTimeScale;"));
          QZS = new ObservationTimeScale(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/gnss/ObservationTimeScale;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeScale ObservationTimeScale::getTimeScale(const ::org::orekit::time::TimeScales & a0) const
      {
        return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_dd32dd7783926716], a0.this$));
      }

      ObservationTimeScale ObservationTimeScale::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ObservationTimeScale(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b6f3539bac5c61ce], a0.this$));
      }

      JArray< ObservationTimeScale > ObservationTimeScale::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ObservationTimeScale >(env->callStaticObjectMethod(cls, mids$[mid_values_46196e7a528ca38a]));
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
      static PyObject *t_ObservationTimeScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationTimeScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ObservationTimeScale_of_(t_ObservationTimeScale *self, PyObject *args);
      static PyObject *t_ObservationTimeScale_getTimeScale(t_ObservationTimeScale *self, PyObject *arg);
      static PyObject *t_ObservationTimeScale_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ObservationTimeScale_values(PyTypeObject *type);
      static PyObject *t_ObservationTimeScale_get__parameters_(t_ObservationTimeScale *self, void *data);
      static PyGetSetDef t_ObservationTimeScale__fields_[] = {
        DECLARE_GET_FIELD(t_ObservationTimeScale, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ObservationTimeScale__methods_[] = {
        DECLARE_METHOD(t_ObservationTimeScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, of_, METH_VARARGS),
        DECLARE_METHOD(t_ObservationTimeScale, getTimeScale, METH_O),
        DECLARE_METHOD(t_ObservationTimeScale, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ObservationTimeScale, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ObservationTimeScale)[] = {
        { Py_tp_methods, t_ObservationTimeScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ObservationTimeScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ObservationTimeScale)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ObservationTimeScale, t_ObservationTimeScale, ObservationTimeScale);
      PyObject *t_ObservationTimeScale::wrap_Object(const ObservationTimeScale& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationTimeScale::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationTimeScale *self = (t_ObservationTimeScale *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ObservationTimeScale::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ObservationTimeScale::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ObservationTimeScale *self = (t_ObservationTimeScale *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ObservationTimeScale::install(PyObject *module)
      {
        installType(&PY_TYPE(ObservationTimeScale), &PY_TYPE_DEF(ObservationTimeScale), module, "ObservationTimeScale", 0);
      }

      void t_ObservationTimeScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "class_", make_descriptor(ObservationTimeScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "wrapfn_", make_descriptor(t_ObservationTimeScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "boxfn_", make_descriptor(boxObject));
        env->getClass(ObservationTimeScale::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "BDT", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::BDT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GAL", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GLO", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GLO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "GPS", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::GPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "IRN", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::IRN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationTimeScale), "QZS", make_descriptor(t_ObservationTimeScale::wrap_Object(*ObservationTimeScale::QZS)));
      }

      static PyObject *t_ObservationTimeScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ObservationTimeScale::initializeClass, 1)))
          return NULL;
        return t_ObservationTimeScale::wrap_Object(ObservationTimeScale(((t_ObservationTimeScale *) arg)->object.this$));
      }
      static PyObject *t_ObservationTimeScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ObservationTimeScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ObservationTimeScale_of_(t_ObservationTimeScale *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ObservationTimeScale_getTimeScale(t_ObservationTimeScale *self, PyObject *arg)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::time::TimeScale result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getTimeScale(a0));
          return ::org::orekit::time::t_TimeScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getTimeScale", arg);
        return NULL;
      }

      static PyObject *t_ObservationTimeScale_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ObservationTimeScale result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::ObservationTimeScale::valueOf(a0));
          return t_ObservationTimeScale::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ObservationTimeScale_values(PyTypeObject *type)
      {
        JArray< ObservationTimeScale > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::ObservationTimeScale::values());
        return JArray<jobject>(result.this$).wrap(t_ObservationTimeScale::wrap_jobject);
      }
      static PyObject *t_ObservationTimeScale_get__parameters_(t_ObservationTimeScale *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldOrbitHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbitHermiteInterpolator::class$ = NULL;
      jmethodID *FieldOrbitHermiteInterpolator::mids$ = NULL;
      bool FieldOrbitHermiteInterpolator::live$ = false;

      jclass FieldOrbitHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbitHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_03d00ffd0ee81fe0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_51c833c667e08e0f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_824f93e8d6b45930] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getPVAFilter_6c4898d6ec0c3837] = env->getMethodID(cls, "getPVAFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_1240468fb80feea5] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_03d00ffd0ee81fe0, a0, a1.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_51c833c667e08e0f, a0, a1.this$, a2.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_824f93e8d6b45930, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter FieldOrbitHermiteInterpolator::getPVAFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVAFilter_6c4898d6ec0c3837]));
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
      static PyObject *t_FieldOrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitHermiteInterpolator_of_(t_FieldOrbitHermiteInterpolator *self, PyObject *args);
      static int t_FieldOrbitHermiteInterpolator_init_(t_FieldOrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldOrbitHermiteInterpolator_getPVAFilter(t_FieldOrbitHermiteInterpolator *self);
      static PyObject *t_FieldOrbitHermiteInterpolator_get__pVAFilter(t_FieldOrbitHermiteInterpolator *self, void *data);
      static PyObject *t_FieldOrbitHermiteInterpolator_get__parameters_(t_FieldOrbitHermiteInterpolator *self, void *data);
      static PyGetSetDef t_FieldOrbitHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbitHermiteInterpolator, pVAFilter),
        DECLARE_GET_FIELD(t_FieldOrbitHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbitHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, getPVAFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbitHermiteInterpolator)[] = {
        { Py_tp_methods, t_FieldOrbitHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldOrbitHermiteInterpolator_init_ },
        { Py_tp_getset, t_FieldOrbitHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbitHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractFieldOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldOrbitHermiteInterpolator, t_FieldOrbitHermiteInterpolator, FieldOrbitHermiteInterpolator);
      PyObject *t_FieldOrbitHermiteInterpolator::wrap_Object(const FieldOrbitHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitHermiteInterpolator *self = (t_FieldOrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbitHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitHermiteInterpolator *self = (t_FieldOrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbitHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbitHermiteInterpolator), &PY_TYPE_DEF(FieldOrbitHermiteInterpolator), module, "FieldOrbitHermiteInterpolator", 0);
      }

      void t_FieldOrbitHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "class_", make_descriptor(FieldOrbitHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldOrbitHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbitHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldOrbitHermiteInterpolator::wrap_Object(FieldOrbitHermiteInterpolator(((t_FieldOrbitHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbitHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_of_(t_FieldOrbitHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldOrbitHermiteInterpolator_init_(t_FieldOrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1));
              self->object = object;
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
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1, a2));
              self->object = object;
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
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1, a2, a3));
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

      static PyObject *t_FieldOrbitHermiteInterpolator_getPVAFilter(t_FieldOrbitHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_FieldOrbitHermiteInterpolator_get__parameters_(t_FieldOrbitHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_get__pVAFilter(t_FieldOrbitHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticClockPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
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
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticClockPhaseModifier::RelativisticClockPhaseModifier() : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticClockModifier(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::java::util::List RelativisticClockPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticClockPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/OceanTidesWave.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *GravityFields::class$ = NULL;
          jmethodID *GravityFields::mids$ = NULL;
          bool GravityFields::live$ = false;

          jclass GravityFields::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/GravityFields");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConstantNormalizedProvider_0c77c94a83049da8] = env->getMethodID(cls, "getConstantNormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getConstantUnnormalizedProvider_eb1ce3dfed700512] = env->getMethodID(cls, "getConstantUnnormalizedProvider", "(IILorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");
              mids$[mid_getNormalizedProvider_79759f2115f6836e] = env->getMethodID(cls, "getNormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;");
              mids$[mid_getOceanTidesWaves_db6a96225c690c76] = env->getMethodID(cls, "getOceanTidesWaves", "(II)Ljava/util/List;");
              mids$[mid_getUnnormalizedProvider_2609e3e741b941bf] = env->getMethodID(cls, "getUnnormalizedProvider", "(II)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFields::getConstantNormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantNormalizedProvider_0c77c94a83049da8], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFields::getConstantUnnormalizedProvider(jint a0, jint a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getConstantUnnormalizedProvider_eb1ce3dfed700512], a0, a1, a2.this$));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider GravityFields::getNormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getNormalizedProvider_79759f2115f6836e], a0, a1));
          }

          ::java::util::List GravityFields::getOceanTidesWaves(jint a0, jint a1) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getOceanTidesWaves_db6a96225c690c76], a0, a1));
          }

          ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider GravityFields::getUnnormalizedProvider(jint a0, jint a1) const
          {
            return ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getUnnormalizedProvider_2609e3e741b941bf], a0, a1));
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
          static PyObject *t_GravityFields_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFields_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GravityFields_getConstantNormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getConstantUnnormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getNormalizedProvider(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getOceanTidesWaves(t_GravityFields *self, PyObject *args);
          static PyObject *t_GravityFields_getUnnormalizedProvider(t_GravityFields *self, PyObject *args);

          static PyMethodDef t_GravityFields__methods_[] = {
            DECLARE_METHOD(t_GravityFields, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFields, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GravityFields, getConstantNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getConstantUnnormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getNormalizedProvider, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getOceanTidesWaves, METH_VARARGS),
            DECLARE_METHOD(t_GravityFields, getUnnormalizedProvider, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GravityFields)[] = {
            { Py_tp_methods, t_GravityFields__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GravityFields)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GravityFields, t_GravityFields, GravityFields);

          void t_GravityFields::install(PyObject *module)
          {
            installType(&PY_TYPE(GravityFields), &PY_TYPE_DEF(GravityFields), module, "GravityFields", 0);
          }

          void t_GravityFields::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "class_", make_descriptor(GravityFields::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "wrapfn_", make_descriptor(t_GravityFields::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GravityFields), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GravityFields_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GravityFields::initializeClass, 1)))
              return NULL;
            return t_GravityFields::wrap_Object(GravityFields(((t_GravityFields *) arg)->object.this$));
          }
          static PyObject *t_GravityFields_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GravityFields::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GravityFields_getConstantNormalizedProvider(t_GravityFields *self, PyObject *args)
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

          static PyObject *t_GravityFields_getConstantUnnormalizedProvider(t_GravityFields *self, PyObject *args)
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

          static PyObject *t_GravityFields_getNormalizedProvider(t_GravityFields *self, PyObject *args)
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

          static PyObject *t_GravityFields_getOceanTidesWaves(t_GravityFields *self, PyObject *args)
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

          static PyObject *t_GravityFields_getUnnormalizedProvider(t_GravityFields *self, PyObject *args)
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
        }
      }
    }
  }
}
