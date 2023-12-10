#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PhaseBuilder.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PhaseBuilder::class$ = NULL;
          jmethodID *PhaseBuilder::mids$ = NULL;
          bool PhaseBuilder::live$ = false;

          jclass PhaseBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PhaseBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_40e9860cdb1b3cb9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_2319c8aa090c126b] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/gnss/Phase;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseBuilder::PhaseBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jdouble a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_40e9860cdb1b3cb9, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::gnss::Phase PhaseBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::Phase(env->callObjectMethod(this$, mids$[mid_build_2319c8aa090c126b], a0.this$, a1.this$));
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
          static PyObject *t_PhaseBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseBuilder_of_(t_PhaseBuilder *self, PyObject *args);
          static int t_PhaseBuilder_init_(t_PhaseBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseBuilder_build(t_PhaseBuilder *self, PyObject *args);
          static PyObject *t_PhaseBuilder_get__parameters_(t_PhaseBuilder *self, void *data);
          static PyGetSetDef t_PhaseBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseBuilder__methods_[] = {
            DECLARE_METHOD(t_PhaseBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PhaseBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseBuilder)[] = {
            { Py_tp_methods, t_PhaseBuilder__methods_ },
            { Py_tp_init, (void *) t_PhaseBuilder_init_ },
            { Py_tp_getset, t_PhaseBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(PhaseBuilder, t_PhaseBuilder, PhaseBuilder);
          PyObject *t_PhaseBuilder::wrap_Object(const PhaseBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseBuilder *self = (t_PhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PhaseBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PhaseBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PhaseBuilder *self = (t_PhaseBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PhaseBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseBuilder), &PY_TYPE_DEF(PhaseBuilder), module, "PhaseBuilder", 0);
          }

          void t_PhaseBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "class_", make_descriptor(PhaseBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "wrapfn_", make_descriptor(t_PhaseBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseBuilder::initializeClass, 1)))
              return NULL;
            return t_PhaseBuilder::wrap_Object(PhaseBuilder(((t_PhaseBuilder *) arg)->object.this$));
          }
          static PyObject *t_PhaseBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PhaseBuilder_of_(t_PhaseBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PhaseBuilder_init_(t_PhaseBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            PhaseBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PhaseBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(Phase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseBuilder_build(t_PhaseBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::gnss::Phase result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::gnss::t_Phase::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PhaseBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_PhaseBuilder_get__parameters_(t_PhaseBuilder *self, void *data)
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
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplexUnivariateIntegrator::class$ = NULL;
      jmethodID *FieldComplexUnivariateIntegrator::mids$ = NULL;
      bool FieldComplexUnivariateIntegrator::live$ = false;

      jclass FieldComplexUnivariateIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplexUnivariateIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4e6a4384b891653f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;)V");
          mids$[mid_integrate_63fbce98c4bda2d0] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/FieldComplex;[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_integrate_437c332a9c9fedfd] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldComplexUnivariateIntegrator::FieldComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4e6a4384b891653f, a0.this$)) {}

      ::org::hipparchus::complex::FieldComplex FieldComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::FieldComplex & a2, const JArray< ::org::hipparchus::complex::FieldComplex > & a3) const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_integrate_63fbce98c4bda2d0], a0, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3) const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_integrate_437c332a9c9fedfd], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_FieldComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexUnivariateIntegrator_of_(t_FieldComplexUnivariateIntegrator *self, PyObject *args);
      static int t_FieldComplexUnivariateIntegrator_init_(t_FieldComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldComplexUnivariateIntegrator_integrate(t_FieldComplexUnivariateIntegrator *self, PyObject *args);
      static PyObject *t_FieldComplexUnivariateIntegrator_get__parameters_(t_FieldComplexUnivariateIntegrator *self, void *data);
      static PyGetSetDef t_FieldComplexUnivariateIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplexUnivariateIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplexUnivariateIntegrator__methods_[] = {
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, integrate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplexUnivariateIntegrator)[] = {
        { Py_tp_methods, t_FieldComplexUnivariateIntegrator__methods_ },
        { Py_tp_init, (void *) t_FieldComplexUnivariateIntegrator_init_ },
        { Py_tp_getset, t_FieldComplexUnivariateIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplexUnivariateIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplexUnivariateIntegrator, t_FieldComplexUnivariateIntegrator, FieldComplexUnivariateIntegrator);
      PyObject *t_FieldComplexUnivariateIntegrator::wrap_Object(const FieldComplexUnivariateIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexUnivariateIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexUnivariateIntegrator *self = (t_FieldComplexUnivariateIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplexUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexUnivariateIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexUnivariateIntegrator *self = (t_FieldComplexUnivariateIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplexUnivariateIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplexUnivariateIntegrator), &PY_TYPE_DEF(FieldComplexUnivariateIntegrator), module, "FieldComplexUnivariateIntegrator", 0);
      }

      void t_FieldComplexUnivariateIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "class_", make_descriptor(FieldComplexUnivariateIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "wrapfn_", make_descriptor(t_FieldComplexUnivariateIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplexUnivariateIntegrator::initializeClass, 1)))
          return NULL;
        return t_FieldComplexUnivariateIntegrator::wrap_Object(FieldComplexUnivariateIntegrator(((t_FieldComplexUnivariateIntegrator *) arg)->object.this$));
      }
      static PyObject *t_FieldComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplexUnivariateIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_of_(t_FieldComplexUnivariateIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldComplexUnivariateIntegrator_init_(t_FieldComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplexUnivariateIntegrator object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_))
        {
          INT_CALL(object = FieldComplexUnivariateIntegrator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_integrate(t_FieldComplexUnivariateIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::complex::FieldComplex > a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "IKK[K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }
      static PyObject *t_FieldComplexUnivariateIntegrator_get__parameters_(t_FieldComplexUnivariateIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmDataSubStructureKey::class$ = NULL;
              jmethodID *OcmDataSubStructureKey::mids$ = NULL;
              bool OcmDataSubStructureKey::live$ = false;
              OcmDataSubStructureKey *OcmDataSubStructureKey::COV = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::MAN = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::OD = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::PERT = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::PHYS = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::TRAJ = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::USER = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::cov = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::man = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::od = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::pert = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::phys = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::traj = NULL;
              OcmDataSubStructureKey *OcmDataSubStructureKey::user = NULL;

              jclass OcmDataSubStructureKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_060308836bc1ab40] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmParser;)Z");
                  mids$[mid_valueOf_c62790a61b373294] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;");
                  mids$[mid_values_2040e146b7931658] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  MAN = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  OD = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  PERT = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "PERT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  PHYS = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  TRAJ = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "TRAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  USER = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  cov = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "cov", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  man = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "man", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  od = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "od", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  pert = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "pert", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  phys = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "phys", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  traj = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "traj", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  user = new OcmDataSubStructureKey(env->getStaticObjectField(cls, "user", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmDataSubStructureKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OcmDataSubStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser & a1) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_060308836bc1ab40], a0.this$, a1.this$);
              }

              OcmDataSubStructureKey OcmDataSubStructureKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmDataSubStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c62790a61b373294], a0.this$));
              }

              JArray< OcmDataSubStructureKey > OcmDataSubStructureKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmDataSubStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_2040e146b7931658]));
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
              static PyObject *t_OcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmDataSubStructureKey_of_(t_OcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_process(t_OcmDataSubStructureKey *self, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmDataSubStructureKey_values(PyTypeObject *type);
              static PyObject *t_OcmDataSubStructureKey_get__parameters_(t_OcmDataSubStructureKey *self, void *data);
              static PyGetSetDef t_OcmDataSubStructureKey__fields_[] = {
                DECLARE_GET_FIELD(t_OcmDataSubStructureKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmDataSubStructureKey__methods_[] = {
                DECLARE_METHOD(t_OcmDataSubStructureKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmDataSubStructureKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmDataSubStructureKey)[] = {
                { Py_tp_methods, t_OcmDataSubStructureKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmDataSubStructureKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmDataSubStructureKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmDataSubStructureKey, t_OcmDataSubStructureKey, OcmDataSubStructureKey);
              PyObject *t_OcmDataSubStructureKey::wrap_Object(const OcmDataSubStructureKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmDataSubStructureKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmDataSubStructureKey *self = (t_OcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmDataSubStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmDataSubStructureKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmDataSubStructureKey *self = (t_OcmDataSubStructureKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmDataSubStructureKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmDataSubStructureKey), &PY_TYPE_DEF(OcmDataSubStructureKey), module, "OcmDataSubStructureKey", 0);
              }

              void t_OcmDataSubStructureKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "class_", make_descriptor(OcmDataSubStructureKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "wrapfn_", make_descriptor(t_OcmDataSubStructureKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmDataSubStructureKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "COV", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "MAN", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "OD", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "PERT", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::PERT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "PHYS", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "TRAJ", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::TRAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "USER", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::USER)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "cov", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::cov)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "man", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::man)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "od", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::od)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "pert", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::pert)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "phys", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::phys)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "traj", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::traj)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmDataSubStructureKey), "user", make_descriptor(t_OcmDataSubStructureKey::wrap_Object(*OcmDataSubStructureKey::user)));
              }

              static PyObject *t_OcmDataSubStructureKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmDataSubStructureKey::initializeClass, 1)))
                  return NULL;
                return t_OcmDataSubStructureKey::wrap_Object(OcmDataSubStructureKey(((t_OcmDataSubStructureKey *) arg)->object.this$));
              }
              static PyObject *t_OcmDataSubStructureKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmDataSubStructureKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmDataSubStructureKey_of_(t_OcmDataSubStructureKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmDataSubStructureKey_process(t_OcmDataSubStructureKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                jboolean result;

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OcmParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::odm::ocm::t_OcmParser::parameters_))
                {
                  OBJ_CALL(result = self->object.process(a0, a1));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OcmDataSubStructureKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmDataSubStructureKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmDataSubStructureKey::valueOf(a0));
                  return t_OcmDataSubStructureKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmDataSubStructureKey_values(PyTypeObject *type)
              {
                JArray< OcmDataSubStructureKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmDataSubStructureKey::values());
                return JArray<jobject>(result.this$).wrap(t_OcmDataSubStructureKey::wrap_jobject);
              }
              static PyObject *t_OcmDataSubStructureKey_get__parameters_(t_OcmDataSubStructureKey *self, void *data)
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
#include "org/orekit/forces/drag/PythonAbstractDragForceModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *PythonAbstractDragForceModel::class$ = NULL;
        jmethodID *PythonAbstractDragForceModel::mids$ = NULL;
        bool PythonAbstractDragForceModel::live$ = false;

        jclass PythonAbstractDragForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/PythonAbstractDragForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7536aa327c8cd1b5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;)V");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractDragForceModel::PythonAbstractDragForceModel(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_7536aa327c8cd1b5, a0.this$)) {}

        void PythonAbstractDragForceModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractDragForceModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractDragForceModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      namespace drag {
        static PyObject *t_PythonAbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractDragForceModel_init_(t_PythonAbstractDragForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractDragForceModel_finalize(t_PythonAbstractDragForceModel *self);
        static PyObject *t_PythonAbstractDragForceModel_pythonExtension(t_PythonAbstractDragForceModel *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractDragForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractDragForceModel_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractDragForceModel_get__self(t_PythonAbstractDragForceModel *self, void *data);
        static PyGetSetDef t_PythonAbstractDragForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractDragForceModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractDragForceModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractDragForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDragForceModel)[] = {
          { Py_tp_methods, t_PythonAbstractDragForceModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractDragForceModel_init_ },
          { Py_tp_getset, t_PythonAbstractDragForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractDragForceModel)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractDragForceModel, t_PythonAbstractDragForceModel, PythonAbstractDragForceModel);

        void t_PythonAbstractDragForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractDragForceModel), &PY_TYPE_DEF(PythonAbstractDragForceModel), module, "PythonAbstractDragForceModel", 1);
        }

        void t_PythonAbstractDragForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "class_", make_descriptor(PythonAbstractDragForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "wrapfn_", make_descriptor(t_PythonAbstractDragForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractDragForceModel::initializeClass);
          JNINativeMethod methods[] = {
            { "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractDragForceModel_acceleration0 },
            { "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractDragForceModel_acceleration1 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractDragForceModel_getParametersDrivers2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractDragForceModel_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractDragForceModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractDragForceModel::wrap_Object(PythonAbstractDragForceModel(((t_PythonAbstractDragForceModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractDragForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractDragForceModel_init_(t_PythonAbstractDragForceModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
          PythonAbstractDragForceModel object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractDragForceModel(a0));
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

        static PyObject *t_PythonAbstractDragForceModel_finalize(t_PythonAbstractDragForceModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractDragForceModel_pythonExtension(t_PythonAbstractDragForceModel *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_492808a339bfa35f]);
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

        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_492808a339bfa35f]);
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

        static jobject JNICALL t_PythonAbstractDragForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_492808a339bfa35f]);
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

        static void JNICALL t_PythonAbstractDragForceModel_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractDragForceModel_get__self(t_PythonAbstractDragForceModel *self, void *data)
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
#include "org/orekit/data/DelaunayArguments.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DelaunayArguments::class$ = NULL;
      jmethodID *DelaunayArguments::mids$ = NULL;
      bool DelaunayArguments::live$ = false;

      jclass DelaunayArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DelaunayArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9ac7694849fc1cb8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDDD)V");
          mids$[mid_getD_dff5885c2c873297] = env->getMethodID(cls, "getD", "()D");
          mids$[mid_getDDot_dff5885c2c873297] = env->getMethodID(cls, "getDDot", "()D");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getF_dff5885c2c873297] = env->getMethodID(cls, "getF", "()D");
          mids$[mid_getFDot_dff5885c2c873297] = env->getMethodID(cls, "getFDot", "()D");
          mids$[mid_getGamma_dff5885c2c873297] = env->getMethodID(cls, "getGamma", "()D");
          mids$[mid_getGammaDot_dff5885c2c873297] = env->getMethodID(cls, "getGammaDot", "()D");
          mids$[mid_getL_dff5885c2c873297] = env->getMethodID(cls, "getL", "()D");
          mids$[mid_getLDot_dff5885c2c873297] = env->getMethodID(cls, "getLDot", "()D");
          mids$[mid_getLPrime_dff5885c2c873297] = env->getMethodID(cls, "getLPrime", "()D");
          mids$[mid_getLPrimeDot_dff5885c2c873297] = env->getMethodID(cls, "getLPrimeDot", "()D");
          mids$[mid_getOmega_dff5885c2c873297] = env->getMethodID(cls, "getOmega", "()D");
          mids$[mid_getOmegaDot_dff5885c2c873297] = env->getMethodID(cls, "getOmegaDot", "()D");
          mids$[mid_getTC_dff5885c2c873297] = env->getMethodID(cls, "getTC", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DelaunayArguments::DelaunayArguments(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ac7694849fc1cb8, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13)) {}

      jdouble DelaunayArguments::getD() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getD_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getDDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDDot_dff5885c2c873297]);
      }

      ::org::orekit::time::AbsoluteDate DelaunayArguments::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      jdouble DelaunayArguments::getF() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getF_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getFDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFDot_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getGamma() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGamma_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getGammaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGammaDot_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getL() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getLDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLDot_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getLPrime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLPrime_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getLPrimeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLPrimeDot_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getOmega() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOmega_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getOmegaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_dff5885c2c873297]);
      }

      jdouble DelaunayArguments::getTC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTC_dff5885c2c873297]);
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
      static PyObject *t_DelaunayArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DelaunayArguments_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DelaunayArguments_init_(t_DelaunayArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DelaunayArguments_getD(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getDDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getDate(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getF(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getFDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getGamma(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getGammaDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getL(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLPrime(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLPrimeDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getOmega(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getOmegaDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getTC(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_get__d(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__dDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__date(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__f(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__fDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__gamma(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__gammaDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__l(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lPrime(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lPrimeDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__omega(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__omegaDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__tC(t_DelaunayArguments *self, void *data);
      static PyGetSetDef t_DelaunayArguments__fields_[] = {
        DECLARE_GET_FIELD(t_DelaunayArguments, d),
        DECLARE_GET_FIELD(t_DelaunayArguments, dDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, date),
        DECLARE_GET_FIELD(t_DelaunayArguments, f),
        DECLARE_GET_FIELD(t_DelaunayArguments, fDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, gamma),
        DECLARE_GET_FIELD(t_DelaunayArguments, gammaDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, l),
        DECLARE_GET_FIELD(t_DelaunayArguments, lDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, lPrime),
        DECLARE_GET_FIELD(t_DelaunayArguments, lPrimeDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, omega),
        DECLARE_GET_FIELD(t_DelaunayArguments, omegaDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, tC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DelaunayArguments__methods_[] = {
        DECLARE_METHOD(t_DelaunayArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DelaunayArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DelaunayArguments, getD, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getDDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getF, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getFDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getGamma, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getGammaDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getL, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLPrime, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLPrimeDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getOmega, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getOmegaDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DelaunayArguments)[] = {
        { Py_tp_methods, t_DelaunayArguments__methods_ },
        { Py_tp_init, (void *) t_DelaunayArguments_init_ },
        { Py_tp_getset, t_DelaunayArguments__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DelaunayArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DelaunayArguments, t_DelaunayArguments, DelaunayArguments);

      void t_DelaunayArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(DelaunayArguments), &PY_TYPE_DEF(DelaunayArguments), module, "DelaunayArguments", 0);
      }

      void t_DelaunayArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "class_", make_descriptor(DelaunayArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "wrapfn_", make_descriptor(t_DelaunayArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DelaunayArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DelaunayArguments::initializeClass, 1)))
          return NULL;
        return t_DelaunayArguments::wrap_Object(DelaunayArguments(((t_DelaunayArguments *) arg)->object.this$));
      }
      static PyObject *t_DelaunayArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DelaunayArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DelaunayArguments_init_(t_DelaunayArguments *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
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
        jdouble a12;
        jdouble a13;
        DelaunayArguments object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
        {
          INT_CALL(object = DelaunayArguments(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DelaunayArguments_getD(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getD());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getDDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getDate(t_DelaunayArguments *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DelaunayArguments_getF(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getF());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getFDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getGamma(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGamma());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getGammaDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGammaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getL(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getL());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLPrime(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLPrime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLPrimeDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLPrimeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getOmega(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOmega());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getOmegaDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOmegaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getTC(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_get__d(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getD());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__dDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__date(t_DelaunayArguments *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DelaunayArguments_get__f(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getF());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__fDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__gamma(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGamma());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__gammaDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGammaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__l(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lPrime(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLPrime());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lPrimeDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLPrimeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__omega(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOmega());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__omegaDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOmegaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__tC(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTC());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *EncodedMessage::class$ = NULL;
          jmethodID *EncodedMessage::mids$ = NULL;
          bool EncodedMessage::live$ = false;

          jclass EncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/EncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_extractBits_a1cf8c47dc9c5883] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_start_0fa09c18fee449d5] = env->getMethodID(cls, "start", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jlong EncodedMessage::extractBits(jint a0) const
          {
            return env->callLongMethod(this$, mids$[mid_extractBits_a1cf8c47dc9c5883], a0);
          }

          void EncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_0fa09c18fee449d5]);
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
          static PyObject *t_EncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EncodedMessage_extractBits(t_EncodedMessage *self, PyObject *arg);
          static PyObject *t_EncodedMessage_start(t_EncodedMessage *self);

          static PyMethodDef t_EncodedMessage__methods_[] = {
            DECLARE_METHOD(t_EncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EncodedMessage, extractBits, METH_O),
            DECLARE_METHOD(t_EncodedMessage, start, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EncodedMessage)[] = {
            { Py_tp_methods, t_EncodedMessage__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EncodedMessage, t_EncodedMessage, EncodedMessage);

          void t_EncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(EncodedMessage), &PY_TYPE_DEF(EncodedMessage), module, "EncodedMessage", 0);
          }

          void t_EncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "class_", make_descriptor(EncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "wrapfn_", make_descriptor(t_EncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EncodedMessage::initializeClass, 1)))
              return NULL;
            return t_EncodedMessage::wrap_Object(EncodedMessage(((t_EncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_EncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_EncodedMessage_extractBits(t_EncodedMessage *self, PyObject *arg)
          {
            jint a0;
            jlong result;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.extractBits(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError((PyObject *) self, "extractBits", arg);
            return NULL;
          }

          static PyObject *t_EncodedMessage_start(t_EncodedMessage *self)
          {
            OBJ_CALL(self->object.start());
            Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/PythonAttitudeBuilder.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeBuilder::class$ = NULL;
      jmethodID *PythonAttitudeBuilder::mids$ = NULL;
      bool PythonAttitudeBuilder::live$ = false;

      jclass PythonAttitudeBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_build_32e9a4ac991f1702] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_build_54b3b52d9ecd9e48] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeBuilder::PythonAttitudeBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonAttitudeBuilder::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAttitudeBuilder::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAttitudeBuilder::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonAttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeBuilder_init_(t_PythonAttitudeBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeBuilder_finalize(t_PythonAttitudeBuilder *self);
      static PyObject *t_PythonAttitudeBuilder_pythonExtension(t_PythonAttitudeBuilder *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonAttitudeBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeBuilder_get__self(t_PythonAttitudeBuilder *self, void *data);
      static PyGetSetDef t_PythonAttitudeBuilder__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeBuilder, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeBuilder__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeBuilder, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeBuilder)[] = {
        { Py_tp_methods, t_PythonAttitudeBuilder__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeBuilder_init_ },
        { Py_tp_getset, t_PythonAttitudeBuilder__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeBuilder, t_PythonAttitudeBuilder, PythonAttitudeBuilder);

      void t_PythonAttitudeBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeBuilder), &PY_TYPE_DEF(PythonAttitudeBuilder), module, "PythonAttitudeBuilder", 1);
      }

      void t_PythonAttitudeBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "class_", make_descriptor(PythonAttitudeBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "wrapfn_", make_descriptor(t_PythonAttitudeBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeBuilder), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeBuilder::initializeClass);
        JNINativeMethod methods[] = {
          { "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeBuilder_build0 },
          { "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeBuilder_build1 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeBuilder_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonAttitudeBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeBuilder::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeBuilder::wrap_Object(PythonAttitudeBuilder(((t_PythonAttitudeBuilder *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeBuilder_init_(t_PythonAttitudeBuilder *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeBuilder object((jobject) NULL);

        INT_CALL(object = PythonAttitudeBuilder());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeBuilder_finalize(t_PythonAttitudeBuilder *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeBuilder_pythonExtension(t_PythonAttitudeBuilder *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeBuilder_build0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a0));
        PyObject *o1 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a1));
        PyObject *o2 = ::org::orekit::utils::t_TimeStampedAngularCoordinates::wrap_Object(::org::orekit::utils::TimeStampedAngularCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "build", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
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

      static jobject JNICALL t_PythonAttitudeBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a0));
        PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a1));
        PyObject *o2 = ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(::org::orekit::utils::TimeStampedFieldAngularCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "build", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
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

      static void JNICALL t_PythonAttitudeBuilder_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeBuilder::mids$[PythonAttitudeBuilder::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeBuilder_get__self(t_PythonAttitudeBuilder *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/frames/LOFType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OrbitRelativeFrame::class$ = NULL;
          jmethodID *OrbitRelativeFrame::mids$ = NULL;
          bool OrbitRelativeFrame::live$ = false;
          OrbitRelativeFrame *OrbitRelativeFrame::EQW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::LVLH_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NSW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NSW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NTW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::NTW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::PQW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::QSW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RIC = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RSW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::RTN = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::SEZ_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::SEZ_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::TNW_ROTATING = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::VNC_INERTIAL = NULL;
          OrbitRelativeFrame *OrbitRelativeFrame::VNC_ROTATING = NULL;

          jclass OrbitRelativeFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OrbitRelativeFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getLofType_91870b5ccc8bfe11] = env->getMethodID(cls, "getLofType", "()Lorg/orekit/frames/LOFType;");
              mids$[mid_isQuasiInertial_b108b35ef48e27bd] = env->getMethodID(cls, "isQuasiInertial", "()Z");
              mids$[mid_valueOf_7860784f720f632e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
              mids$[mid_values_69adb65e1dcea51d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EQW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "EQW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              LVLH_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "LVLH_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NSW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NSW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NSW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NSW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NTW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NTW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              NTW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "NTW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              PQW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "PQW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              QSW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "QSW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RIC = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RIC", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RSW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RSW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              RTN = new OrbitRelativeFrame(env->getStaticObjectField(cls, "RTN", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              SEZ_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "SEZ_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              SEZ_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "SEZ_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              TNW_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "TNW_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              VNC_INERTIAL = new OrbitRelativeFrame(env->getStaticObjectField(cls, "VNC_INERTIAL", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              VNC_ROTATING = new OrbitRelativeFrame(env->getStaticObjectField(cls, "VNC_ROTATING", "Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::LOFType OrbitRelativeFrame::getLofType() const
          {
            return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getLofType_91870b5ccc8bfe11]));
          }

          jboolean OrbitRelativeFrame::isQuasiInertial() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_b108b35ef48e27bd]);
          }

          OrbitRelativeFrame OrbitRelativeFrame::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OrbitRelativeFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_7860784f720f632e], a0.this$));
          }

          JArray< OrbitRelativeFrame > OrbitRelativeFrame::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OrbitRelativeFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_69adb65e1dcea51d]));
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
          static PyObject *t_OrbitRelativeFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrbitRelativeFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrbitRelativeFrame_of_(t_OrbitRelativeFrame *self, PyObject *args);
          static PyObject *t_OrbitRelativeFrame_getLofType(t_OrbitRelativeFrame *self);
          static PyObject *t_OrbitRelativeFrame_isQuasiInertial(t_OrbitRelativeFrame *self);
          static PyObject *t_OrbitRelativeFrame_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OrbitRelativeFrame_values(PyTypeObject *type);
          static PyObject *t_OrbitRelativeFrame_get__lofType(t_OrbitRelativeFrame *self, void *data);
          static PyObject *t_OrbitRelativeFrame_get__quasiInertial(t_OrbitRelativeFrame *self, void *data);
          static PyObject *t_OrbitRelativeFrame_get__parameters_(t_OrbitRelativeFrame *self, void *data);
          static PyGetSetDef t_OrbitRelativeFrame__fields_[] = {
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, lofType),
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, quasiInertial),
            DECLARE_GET_FIELD(t_OrbitRelativeFrame, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OrbitRelativeFrame__methods_[] = {
            DECLARE_METHOD(t_OrbitRelativeFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, of_, METH_VARARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, getLofType, METH_NOARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, isQuasiInertial, METH_NOARGS),
            DECLARE_METHOD(t_OrbitRelativeFrame, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OrbitRelativeFrame, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OrbitRelativeFrame)[] = {
            { Py_tp_methods, t_OrbitRelativeFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OrbitRelativeFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OrbitRelativeFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OrbitRelativeFrame, t_OrbitRelativeFrame, OrbitRelativeFrame);
          PyObject *t_OrbitRelativeFrame::wrap_Object(const OrbitRelativeFrame& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OrbitRelativeFrame::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OrbitRelativeFrame *self = (t_OrbitRelativeFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OrbitRelativeFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OrbitRelativeFrame::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OrbitRelativeFrame *self = (t_OrbitRelativeFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OrbitRelativeFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(OrbitRelativeFrame), &PY_TYPE_DEF(OrbitRelativeFrame), module, "OrbitRelativeFrame", 0);
          }

          void t_OrbitRelativeFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "class_", make_descriptor(OrbitRelativeFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "wrapfn_", make_descriptor(t_OrbitRelativeFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(OrbitRelativeFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "EQW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::EQW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "LVLH_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::LVLH_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NSW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NSW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NSW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NSW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NTW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NTW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "NTW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::NTW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "PQW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::PQW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "QSW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::QSW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RIC", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RIC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RSW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RSW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "RTN", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::RTN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "SEZ_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::SEZ_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "SEZ_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::SEZ_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "TNW_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::TNW_ROTATING)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "VNC_INERTIAL", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::VNC_INERTIAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitRelativeFrame), "VNC_ROTATING", make_descriptor(t_OrbitRelativeFrame::wrap_Object(*OrbitRelativeFrame::VNC_ROTATING)));
          }

          static PyObject *t_OrbitRelativeFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OrbitRelativeFrame::initializeClass, 1)))
              return NULL;
            return t_OrbitRelativeFrame::wrap_Object(OrbitRelativeFrame(((t_OrbitRelativeFrame *) arg)->object.this$));
          }
          static PyObject *t_OrbitRelativeFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OrbitRelativeFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OrbitRelativeFrame_of_(t_OrbitRelativeFrame *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OrbitRelativeFrame_getLofType(t_OrbitRelativeFrame *self)
          {
            ::org::orekit::frames::LOFType result((jobject) NULL);
            OBJ_CALL(result = self->object.getLofType());
            return ::org::orekit::frames::t_LOFType::wrap_Object(result);
          }

          static PyObject *t_OrbitRelativeFrame_isQuasiInertial(t_OrbitRelativeFrame *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isQuasiInertial());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OrbitRelativeFrame_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OrbitRelativeFrame result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::valueOf(a0));
              return t_OrbitRelativeFrame::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OrbitRelativeFrame_values(PyTypeObject *type)
          {
            JArray< OrbitRelativeFrame > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::values());
            return JArray<jobject>(result.this$).wrap(t_OrbitRelativeFrame::wrap_jobject);
          }
          static PyObject *t_OrbitRelativeFrame_get__parameters_(t_OrbitRelativeFrame *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OrbitRelativeFrame_get__lofType(t_OrbitRelativeFrame *self, void *data)
          {
            ::org::orekit::frames::LOFType value((jobject) NULL);
            OBJ_CALL(value = self->object.getLofType());
            return ::org::orekit::frames::t_LOFType::wrap_Object(value);
          }

          static PyObject *t_OrbitRelativeFrame_get__quasiInertial(t_OrbitRelativeFrame *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isQuasiInertial());
            Py_RETURN_BOOL(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/PreconditionedIterativeLinearSolver.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *PreconditionedIterativeLinearSolver::class$ = NULL;
      jmethodID *PreconditionedIterativeLinearSolver::mids$ = NULL;
      bool PreconditionedIterativeLinearSolver::live$ = false;

      jclass PreconditionedIterativeLinearSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/PreconditionedIterativeLinearSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_298a9e348b1bb52b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_solve_0c01ae2730abb842] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_f5ad289a93e4d7cc] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_89085f14c3881b25] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_b66895678db09891] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_f5ad289a93e4d7cc] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_b66895678db09891] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_checkParameters_971434c87bc35b4e] = env->getStaticMethodID(cls, "checkParameters", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PreconditionedIterativeLinearSolver::PreconditionedIterativeLinearSolver(const ::org::hipparchus::util::IterationManager & a0) : ::org::hipparchus::linear::IterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_298a9e348b1bb52b, a0.this$)) {}

      PreconditionedIterativeLinearSolver::PreconditionedIterativeLinearSolver(jint a0) : ::org::hipparchus::linear::IterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_0c01ae2730abb842], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_f5ad289a93e4d7cc], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_89085f14c3881b25], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_b66895678db09891], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_f5ad289a93e4d7cc], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_b66895678db09891], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_PreconditionedIterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PreconditionedIterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PreconditionedIterativeLinearSolver_init_(t_PreconditionedIterativeLinearSolver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PreconditionedIterativeLinearSolver_solve(t_PreconditionedIterativeLinearSolver *self, PyObject *args);
      static PyObject *t_PreconditionedIterativeLinearSolver_solveInPlace(t_PreconditionedIterativeLinearSolver *self, PyObject *args);

      static PyMethodDef t_PreconditionedIterativeLinearSolver__methods_[] = {
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, solve, METH_VARARGS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PreconditionedIterativeLinearSolver)[] = {
        { Py_tp_methods, t_PreconditionedIterativeLinearSolver__methods_ },
        { Py_tp_init, (void *) t_PreconditionedIterativeLinearSolver_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PreconditionedIterativeLinearSolver)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::IterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(PreconditionedIterativeLinearSolver, t_PreconditionedIterativeLinearSolver, PreconditionedIterativeLinearSolver);

      void t_PreconditionedIterativeLinearSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(PreconditionedIterativeLinearSolver), &PY_TYPE_DEF(PreconditionedIterativeLinearSolver), module, "PreconditionedIterativeLinearSolver", 0);
      }

      void t_PreconditionedIterativeLinearSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "class_", make_descriptor(PreconditionedIterativeLinearSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "wrapfn_", make_descriptor(t_PreconditionedIterativeLinearSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PreconditionedIterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PreconditionedIterativeLinearSolver::initializeClass, 1)))
          return NULL;
        return t_PreconditionedIterativeLinearSolver::wrap_Object(PreconditionedIterativeLinearSolver(((t_PreconditionedIterativeLinearSolver *) arg)->object.this$));
      }
      static PyObject *t_PreconditionedIterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PreconditionedIterativeLinearSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PreconditionedIterativeLinearSolver_init_(t_PreconditionedIterativeLinearSolver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            PreconditionedIterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::util::IterationManager::initializeClass, &a0))
            {
              INT_CALL(object = PreconditionedIterativeLinearSolver(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            PreconditionedIterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = PreconditionedIterativeLinearSolver(a0));
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

      static PyObject *t_PreconditionedIterativeLinearSolver_solve(t_PreconditionedIterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(PreconditionedIterativeLinearSolver), (PyObject *) self, "solve", args, 2);
      }

      static PyObject *t_PreconditionedIterativeLinearSolver_solveInPlace(t_PreconditionedIterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
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
          }
        }

        return callSuper(PY_TYPE(PreconditionedIterativeLinearSolver), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldAbstractGaussianContributionContext::class$ = NULL;
            jmethodID *FieldAbstractGaussianContributionContext::mids$ = NULL;
            bool FieldAbstractGaussianContributionContext::live$ = false;

            jclass FieldAbstractGaussianContributionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getA_eba8e72a22c984ac] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCo2AB_eba8e72a22c984ac] = env->getMethodID(cls, "getCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMu_eba8e72a22c984ac] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOOA_eba8e72a22c984ac] = env->getMethodID(cls, "getOOA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOOAB_eba8e72a22c984ac] = env->getMethodID(cls, "getOOAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoBpo_eba8e72a22c984ac] = env->getMethodID(cls, "getOoBpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoMU_eba8e72a22c984ac] = env->getMethodID(cls, "getOoMU", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getTon2a_eba8e72a22c984ac] = env->getMethodID(cls, "getTon2a", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCo2AB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getMu() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOOA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOOA_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOOAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOOAB_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOoBpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoBpo_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOoMU() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoMU_eba8e72a22c984ac]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getTon2a() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTon2a_eba8e72a22c984ac]));
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
            static PyObject *t_FieldAbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAbstractGaussianContributionContext_of_(t_FieldAbstractGaussianContributionContext *self, PyObject *args);
            static PyObject *t_FieldAbstractGaussianContributionContext_getA(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getCo2AB(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getMeanMotion(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getMu(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOOA(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOOAB(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOoBpo(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOoMU(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getTon2a(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__a(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__co2AB(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__meanMotion(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__mu(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOA(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOAB(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooBpo(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooMU(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ton2a(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__parameters_(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyGetSetDef t_FieldAbstractGaussianContributionContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, a),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, co2AB),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, mu),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, oOA),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, oOAB),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ooBpo),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ooMU),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ton2a),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldAbstractGaussianContributionContext__methods_[] = {
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getMu, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOOA, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOOAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOoBpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOoMU, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getTon2a, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldAbstractGaussianContributionContext)[] = {
              { Py_tp_methods, t_FieldAbstractGaussianContributionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldAbstractGaussianContributionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldAbstractGaussianContributionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldAbstractGaussianContributionContext, t_FieldAbstractGaussianContributionContext, FieldAbstractGaussianContributionContext);
            PyObject *t_FieldAbstractGaussianContributionContext::wrap_Object(const FieldAbstractGaussianContributionContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAbstractGaussianContributionContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAbstractGaussianContributionContext *self = (t_FieldAbstractGaussianContributionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldAbstractGaussianContributionContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAbstractGaussianContributionContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAbstractGaussianContributionContext *self = (t_FieldAbstractGaussianContributionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldAbstractGaussianContributionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldAbstractGaussianContributionContext), &PY_TYPE_DEF(FieldAbstractGaussianContributionContext), module, "FieldAbstractGaussianContributionContext", 0);
            }

            void t_FieldAbstractGaussianContributionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "class_", make_descriptor(FieldAbstractGaussianContributionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "wrapfn_", make_descriptor(t_FieldAbstractGaussianContributionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldAbstractGaussianContributionContext::initializeClass, 1)))
                return NULL;
              return t_FieldAbstractGaussianContributionContext::wrap_Object(FieldAbstractGaussianContributionContext(((t_FieldAbstractGaussianContributionContext *) arg)->object.this$));
            }
            static PyObject *t_FieldAbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldAbstractGaussianContributionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_of_(t_FieldAbstractGaussianContributionContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getA(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getCo2AB(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getMeanMotion(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getMu(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMu());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOOA(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOOA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOOAB(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOOAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOoBpo(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoBpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOoMU(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoMU());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getTon2a(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getTon2a());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldAbstractGaussianContributionContext_get__parameters_(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__a(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__co2AB(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__meanMotion(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__mu(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMu());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOA(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOOA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOAB(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOOAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooBpo(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoBpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooMU(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoMU());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ton2a(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getTon2a());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame1::class$ = NULL;
          jmethodID *SubFrame1::mids$ = NULL;
          bool SubFrame1::live$ = false;

          jclass SubFrame1::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame1");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAF0_dff5885c2c873297] = env->getMethodID(cls, "getAF0", "()D");
              mids$[mid_getAF1_dff5885c2c873297] = env->getMethodID(cls, "getAF1", "()D");
              mids$[mid_getAF2_dff5885c2c873297] = env->getMethodID(cls, "getAF2", "()D");
              mids$[mid_getCaOrPFlag_570ce0828f81a2c1] = env->getMethodID(cls, "getCaOrPFlag", "()I");
              mids$[mid_getIODC_570ce0828f81a2c1] = env->getMethodID(cls, "getIODC", "()I");
              mids$[mid_getL2PDataFlag_570ce0828f81a2c1] = env->getMethodID(cls, "getL2PDataFlag", "()I");
              mids$[mid_getReserved04_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getSvHealth_570ce0828f81a2c1] = env->getMethodID(cls, "getSvHealth", "()I");
              mids$[mid_getTGD_570ce0828f81a2c1] = env->getMethodID(cls, "getTGD", "()I");
              mids$[mid_getTOC_570ce0828f81a2c1] = env->getMethodID(cls, "getTOC", "()I");
              mids$[mid_getUraIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getUraIndex", "()I");
              mids$[mid_getWeekNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getWeekNumber", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame1::getAF0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF0_dff5885c2c873297]);
          }

          jdouble SubFrame1::getAF1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF1_dff5885c2c873297]);
          }

          jdouble SubFrame1::getAF2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF2_dff5885c2c873297]);
          }

          jint SubFrame1::getCaOrPFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getCaOrPFlag_570ce0828f81a2c1]);
          }

          jint SubFrame1::getIODC() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODC_570ce0828f81a2c1]);
          }

          jint SubFrame1::getL2PDataFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getL2PDataFlag_570ce0828f81a2c1]);
          }

          jint SubFrame1::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_570ce0828f81a2c1]);
          }

          jint SubFrame1::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_570ce0828f81a2c1]);
          }

          jint SubFrame1::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_570ce0828f81a2c1]);
          }

          jint SubFrame1::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_570ce0828f81a2c1]);
          }

          jint SubFrame1::getSvHealth() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_570ce0828f81a2c1]);
          }

          jint SubFrame1::getTGD() const
          {
            return env->callIntMethod(this$, mids$[mid_getTGD_570ce0828f81a2c1]);
          }

          jint SubFrame1::getTOC() const
          {
            return env->callIntMethod(this$, mids$[mid_getTOC_570ce0828f81a2c1]);
          }

          jint SubFrame1::getUraIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getUraIndex_570ce0828f81a2c1]);
          }

          jint SubFrame1::getWeekNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumber_570ce0828f81a2c1]);
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
          static PyObject *t_SubFrame1_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame1_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame1_getAF0(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getAF1(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getAF2(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getCaOrPFlag(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getIODC(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getL2PDataFlag(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved04(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved05(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved06(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved07(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getSvHealth(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getTGD(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getTOC(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getUraIndex(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getWeekNumber(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_get__aF0(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__aF1(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__aF2(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__caOrPFlag(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__iODC(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__l2PDataFlag(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved04(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved05(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved06(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved07(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__svHealth(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__tGD(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__tOC(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__uraIndex(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__weekNumber(t_SubFrame1 *self, void *data);
          static PyGetSetDef t_SubFrame1__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame1, aF0),
            DECLARE_GET_FIELD(t_SubFrame1, aF1),
            DECLARE_GET_FIELD(t_SubFrame1, aF2),
            DECLARE_GET_FIELD(t_SubFrame1, caOrPFlag),
            DECLARE_GET_FIELD(t_SubFrame1, iODC),
            DECLARE_GET_FIELD(t_SubFrame1, l2PDataFlag),
            DECLARE_GET_FIELD(t_SubFrame1, reserved04),
            DECLARE_GET_FIELD(t_SubFrame1, reserved05),
            DECLARE_GET_FIELD(t_SubFrame1, reserved06),
            DECLARE_GET_FIELD(t_SubFrame1, reserved07),
            DECLARE_GET_FIELD(t_SubFrame1, svHealth),
            DECLARE_GET_FIELD(t_SubFrame1, tGD),
            DECLARE_GET_FIELD(t_SubFrame1, tOC),
            DECLARE_GET_FIELD(t_SubFrame1, uraIndex),
            DECLARE_GET_FIELD(t_SubFrame1, weekNumber),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame1__methods_[] = {
            DECLARE_METHOD(t_SubFrame1, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame1, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame1, getAF0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getAF1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getAF2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getCaOrPFlag, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getIODC, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getL2PDataFlag, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getSvHealth, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getTGD, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getTOC, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getUraIndex, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getWeekNumber, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame1)[] = {
            { Py_tp_methods, t_SubFrame1__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame1__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame1)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame1, t_SubFrame1, SubFrame1);

          void t_SubFrame1::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame1), &PY_TYPE_DEF(SubFrame1), module, "SubFrame1", 0);
          }

          void t_SubFrame1::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "class_", make_descriptor(SubFrame1::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "wrapfn_", make_descriptor(t_SubFrame1::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame1_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame1::initializeClass, 1)))
              return NULL;
            return t_SubFrame1::wrap_Object(SubFrame1(((t_SubFrame1 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame1_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame1::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame1_getAF0(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getAF1(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getAF2(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getCaOrPFlag(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getCaOrPFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getIODC(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODC());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getL2PDataFlag(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getL2PDataFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved04(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved05(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved06(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved07(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getSvHealth(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvHealth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getTGD(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTGD());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getTOC(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTOC());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getUraIndex(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getUraIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getWeekNumber(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_get__aF0(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__aF1(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__aF2(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__caOrPFlag(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getCaOrPFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__iODC(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODC());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__l2PDataFlag(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getL2PDataFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved04(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved05(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved06(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved07(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__svHealth(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvHealth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__tGD(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTGD());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__tOC(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTOC());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__uraIndex(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getUraIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__weekNumber(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince853FieldIntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince853FieldIntegratorBuilder::mids$ = NULL;
        bool DormandPrince853FieldIntegratorBuilder::live$ = false;

        jclass DormandPrince853FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince853FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853FieldIntegratorBuilder::DormandPrince853FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator DormandPrince853FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_048f7039a7622a2b], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_of_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args);
        static int t_DormandPrince853FieldIntegratorBuilder_init_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_buildIntegrator(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_get__parameters_(t_DormandPrince853FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_DormandPrince853FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince853FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_DormandPrince853FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(DormandPrince853FieldIntegratorBuilder, t_DormandPrince853FieldIntegratorBuilder, DormandPrince853FieldIntegratorBuilder);
        PyObject *t_DormandPrince853FieldIntegratorBuilder::wrap_Object(const DormandPrince853FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegratorBuilder *self = (t_DormandPrince853FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince853FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegratorBuilder *self = (t_DormandPrince853FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince853FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853FieldIntegratorBuilder), &PY_TYPE_DEF(DormandPrince853FieldIntegratorBuilder), module, "DormandPrince853FieldIntegratorBuilder", 0);
        }

        void t_DormandPrince853FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "class_", make_descriptor(DormandPrince853FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince853FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853FieldIntegratorBuilder::wrap_Object(DormandPrince853FieldIntegratorBuilder(((t_DormandPrince853FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_of_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince853FieldIntegratorBuilder_init_(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince853FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince853FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince853FieldIntegratorBuilder_buildIntegrator(t_DormandPrince853FieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(DormandPrince853FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_DormandPrince853FieldIntegratorBuilder_get__parameters_(t_DormandPrince853FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/NegateDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/BooleanDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *BooleanDetector::class$ = NULL;
        jmethodID *BooleanDetector::mids$ = NULL;
        bool BooleanDetector::live$ = false;

        jclass BooleanDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/BooleanDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_andCombine_b15d84f0a93d6582] = env->getStaticMethodID(cls, "andCombine", "([Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_andCombine_3ba49cb77100f442] = env->getStaticMethodID(cls, "andCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetectors_2afa36052df4765d] = env->getMethodID(cls, "getDetectors", "()Ljava/util/List;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_notCombine_c3d38f1c3023fb5c] = env->getStaticMethodID(cls, "notCombine", "(Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/NegateDetector;");
            mids$[mid_orCombine_b15d84f0a93d6582] = env->getStaticMethodID(cls, "orCombine", "([Lorg/orekit/propagation/events/EventDetector;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_orCombine_3ba49cb77100f442] = env->getStaticMethodID(cls, "orCombine", "(Ljava/util/Collection;)Lorg/orekit/propagation/events/BooleanDetector;");
            mids$[mid_create_6836ef893f7e495f] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/BooleanDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BooleanDetector BooleanDetector::andCombine(const JArray< ::org::orekit::propagation::events::EventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_b15d84f0a93d6582], a0.this$));
        }

        BooleanDetector BooleanDetector::andCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_andCombine_3ba49cb77100f442], a0.this$));
        }

        jdouble BooleanDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::java::util::List BooleanDetector::getDetectors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDetectors_2afa36052df4765d]));
        }

        void BooleanDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
        }

        ::org::orekit::propagation::events::NegateDetector BooleanDetector::notCombine(const ::org::orekit::propagation::events::EventDetector & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::propagation::events::NegateDetector(env->callStaticObjectMethod(cls, mids$[mid_notCombine_c3d38f1c3023fb5c], a0.this$));
        }

        BooleanDetector BooleanDetector::orCombine(const JArray< ::org::orekit::propagation::events::EventDetector > & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_b15d84f0a93d6582], a0.this$));
        }

        BooleanDetector BooleanDetector::orCombine(const ::java::util::Collection & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return BooleanDetector(env->callStaticObjectMethod(cls, mids$[mid_orCombine_3ba49cb77100f442], a0.this$));
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
        static PyObject *t_BooleanDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_of_(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_andCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_BooleanDetector_g(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_getDetectors(t_BooleanDetector *self);
        static PyObject *t_BooleanDetector_init(t_BooleanDetector *self, PyObject *args);
        static PyObject *t_BooleanDetector_notCombine(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BooleanDetector_orCombine(PyTypeObject *type, PyObject *args);
        static PyObject *t_BooleanDetector_get__detectors(t_BooleanDetector *self, void *data);
        static PyObject *t_BooleanDetector_get__parameters_(t_BooleanDetector *self, void *data);
        static PyGetSetDef t_BooleanDetector__fields_[] = {
          DECLARE_GET_FIELD(t_BooleanDetector, detectors),
          DECLARE_GET_FIELD(t_BooleanDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BooleanDetector__methods_[] = {
          DECLARE_METHOD(t_BooleanDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, andCombine, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, getDetectors, METH_NOARGS),
          DECLARE_METHOD(t_BooleanDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_BooleanDetector, notCombine, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BooleanDetector, orCombine, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BooleanDetector)[] = {
          { Py_tp_methods, t_BooleanDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BooleanDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BooleanDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(BooleanDetector, t_BooleanDetector, BooleanDetector);
        PyObject *t_BooleanDetector::wrap_Object(const BooleanDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BooleanDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BooleanDetector *self = (t_BooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BooleanDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BooleanDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BooleanDetector *self = (t_BooleanDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BooleanDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(BooleanDetector), &PY_TYPE_DEF(BooleanDetector), module, "BooleanDetector", 0);
        }

        void t_BooleanDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "class_", make_descriptor(BooleanDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "wrapfn_", make_descriptor(t_BooleanDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BooleanDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BooleanDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BooleanDetector::initializeClass, 1)))
            return NULL;
          return t_BooleanDetector::wrap_Object(BooleanDetector(((t_BooleanDetector *) arg)->object.this$));
        }
        static PyObject *t_BooleanDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BooleanDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BooleanDetector_of_(t_BooleanDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BooleanDetector_andCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::EventDetector > a0((jobject) NULL);
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::andCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::andCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "andCombine", args);
          return NULL;
        }

        static PyObject *t_BooleanDetector_g(t_BooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BooleanDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_BooleanDetector_getDetectors(t_BooleanDetector *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_BooleanDetector_init(t_BooleanDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(BooleanDetector), (PyObject *) self, "init", args, 2);
        }

        static PyObject *t_BooleanDetector_notCombine(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::NegateDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::notCombine(a0));
            return ::org::orekit::propagation::events::t_NegateDetector::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "notCombine", arg);
          return NULL;
        }

        static PyObject *t_BooleanDetector_orCombine(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::orekit::propagation::events::EventDetector > a0((jobject) NULL);
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::orCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              BooleanDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::events::BooleanDetector::orCombine(a0));
                return t_BooleanDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "orCombine", args);
          return NULL;
        }
        static PyObject *t_BooleanDetector_get__parameters_(t_BooleanDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BooleanDetector_get__detectors(t_BooleanDetector *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetectors());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TrackingCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TrackingCoordinates::class$ = NULL;
      jmethodID *TrackingCoordinates::mids$ = NULL;
      bool TrackingCoordinates::live$ = false;

      jclass TrackingCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TrackingCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
          mids$[mid_getAzimuth_dff5885c2c873297] = env->getMethodID(cls, "getAzimuth", "()D");
          mids$[mid_getElevation_dff5885c2c873297] = env->getMethodID(cls, "getElevation", "()D");
          mids$[mid_getRange_dff5885c2c873297] = env->getMethodID(cls, "getRange", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TrackingCoordinates::TrackingCoordinates(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

      jdouble TrackingCoordinates::getAzimuth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAzimuth_dff5885c2c873297]);
      }

      jdouble TrackingCoordinates::getElevation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_dff5885c2c873297]);
      }

      jdouble TrackingCoordinates::getRange() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRange_dff5885c2c873297]);
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
      static PyObject *t_TrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TrackingCoordinates_init_(t_TrackingCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TrackingCoordinates_getAzimuth(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_getElevation(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_getRange(t_TrackingCoordinates *self);
      static PyObject *t_TrackingCoordinates_get__azimuth(t_TrackingCoordinates *self, void *data);
      static PyObject *t_TrackingCoordinates_get__elevation(t_TrackingCoordinates *self, void *data);
      static PyObject *t_TrackingCoordinates_get__range(t_TrackingCoordinates *self, void *data);
      static PyGetSetDef t_TrackingCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TrackingCoordinates, azimuth),
        DECLARE_GET_FIELD(t_TrackingCoordinates, elevation),
        DECLARE_GET_FIELD(t_TrackingCoordinates, range),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TrackingCoordinates__methods_[] = {
        DECLARE_METHOD(t_TrackingCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrackingCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TrackingCoordinates, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_TrackingCoordinates, getElevation, METH_NOARGS),
        DECLARE_METHOD(t_TrackingCoordinates, getRange, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TrackingCoordinates)[] = {
        { Py_tp_methods, t_TrackingCoordinates__methods_ },
        { Py_tp_init, (void *) t_TrackingCoordinates_init_ },
        { Py_tp_getset, t_TrackingCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TrackingCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TrackingCoordinates, t_TrackingCoordinates, TrackingCoordinates);

      void t_TrackingCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TrackingCoordinates), &PY_TYPE_DEF(TrackingCoordinates), module, "TrackingCoordinates", 0);
      }

      void t_TrackingCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "class_", make_descriptor(TrackingCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "wrapfn_", make_descriptor(t_TrackingCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TrackingCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TrackingCoordinates::initializeClass, 1)))
          return NULL;
        return t_TrackingCoordinates::wrap_Object(TrackingCoordinates(((t_TrackingCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TrackingCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TrackingCoordinates_init_(t_TrackingCoordinates *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        TrackingCoordinates object((jobject) NULL);

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          INT_CALL(object = TrackingCoordinates(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TrackingCoordinates_getAzimuth(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAzimuth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_getElevation(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getElevation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_getRange(t_TrackingCoordinates *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRange());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TrackingCoordinates_get__azimuth(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAzimuth());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TrackingCoordinates_get__elevation(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getElevation());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TrackingCoordinates_get__range(t_TrackingCoordinates *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRange());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *OnBoardAntennaOneWayGNSSPhaseModifier::mids$ = NULL;
          bool OnBoardAntennaOneWayGNSSPhaseModifier::live$ = false;

          jclass OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_42136dcb6d46591a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaOneWayGNSSPhaseModifier::OnBoardAntennaOneWayGNSSPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_42136dcb6d46591a, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List OnBoardAntennaOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void OnBoardAntennaOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaOneWayGNSSPhaseModifier_init_(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier, t_OnBoardAntennaOneWayGNSSPhaseModifier, OnBoardAntennaOneWayGNSSPhaseModifier);

          void t_OnBoardAntennaOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), &PY_TYPE_DEF(OnBoardAntennaOneWayGNSSPhaseModifier), module, "OnBoardAntennaOneWayGNSSPhaseModifier", 0);
          }

          void t_OnBoardAntennaOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "class_", make_descriptor(OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaOneWayGNSSPhaseModifier::wrap_Object(OnBoardAntennaOneWayGNSSPhaseModifier(((t_OnBoardAntennaOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaOneWayGNSSPhaseModifier_init_(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            OnBoardAntennaOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OnBoardAntennaOneWayGNSSPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaOneWayGNSSPhaseModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$RotationOrderConsumer::class$ = NULL;
            jmethodID *ParseToken$RotationOrderConsumer::mids$ = NULL;
            bool ParseToken$RotationOrderConsumer::live$ = false;

            jclass ParseToken$RotationOrderConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$RotationOrderConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_a908138988eb2a50] = env->getMethodID(cls, "accept", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$RotationOrderConsumer::accept(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_a908138988eb2a50], a0.this$);
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
            static PyObject *t_ParseToken$RotationOrderConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$RotationOrderConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$RotationOrderConsumer_accept(t_ParseToken$RotationOrderConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$RotationOrderConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$RotationOrderConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$RotationOrderConsumer)[] = {
              { Py_tp_methods, t_ParseToken$RotationOrderConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$RotationOrderConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$RotationOrderConsumer, t_ParseToken$RotationOrderConsumer, ParseToken$RotationOrderConsumer);

            void t_ParseToken$RotationOrderConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$RotationOrderConsumer), &PY_TYPE_DEF(ParseToken$RotationOrderConsumer), module, "ParseToken$RotationOrderConsumer", 0);
            }

            void t_ParseToken$RotationOrderConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "class_", make_descriptor(ParseToken$RotationOrderConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "wrapfn_", make_descriptor(t_ParseToken$RotationOrderConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$RotationOrderConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$RotationOrderConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$RotationOrderConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$RotationOrderConsumer::wrap_Object(ParseToken$RotationOrderConsumer(((t_ParseToken$RotationOrderConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$RotationOrderConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$RotationOrderConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$RotationOrderConsumer_accept(t_ParseToken$RotationOrderConsumer *self, PyObject *arg)
            {
              ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
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
#include "org/orekit/propagation/events/EventsLogger$LoggedEvent.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventsLogger$LoggedEvent::class$ = NULL;
        jmethodID *EventsLogger$LoggedEvent::mids$ = NULL;
        bool EventsLogger$LoggedEvent::live$ = false;

        jclass EventsLogger$LoggedEvent::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventsLogger$LoggedEvent");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEventDetector_d73bb985ffde4156] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getState_c6311115fea01a34] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_isIncreasing_b108b35ef48e27bd] = env->getMethodID(cls, "isIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::time::AbsoluteDate EventsLogger$LoggedEvent::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        ::org::orekit::propagation::events::EventDetector EventsLogger$LoggedEvent::getEventDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_d73bb985ffde4156]));
        }

        ::org::orekit::propagation::SpacecraftState EventsLogger$LoggedEvent::getState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_c6311115fea01a34]));
        }

        jboolean EventsLogger$LoggedEvent::isIncreasing() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isIncreasing_b108b35ef48e27bd]);
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
        static PyObject *t_EventsLogger$LoggedEvent_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger$LoggedEvent_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventsLogger$LoggedEvent_getDate(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_getEventDetector(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_getState(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_isIncreasing(t_EventsLogger$LoggedEvent *self);
        static PyObject *t_EventsLogger$LoggedEvent_get__date(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__eventDetector(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__increasing(t_EventsLogger$LoggedEvent *self, void *data);
        static PyObject *t_EventsLogger$LoggedEvent_get__state(t_EventsLogger$LoggedEvent *self, void *data);
        static PyGetSetDef t_EventsLogger$LoggedEvent__fields_[] = {
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, date),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, eventDetector),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, increasing),
          DECLARE_GET_FIELD(t_EventsLogger$LoggedEvent, state),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventsLogger$LoggedEvent__methods_[] = {
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getDate, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, getState, METH_NOARGS),
          DECLARE_METHOD(t_EventsLogger$LoggedEvent, isIncreasing, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventsLogger$LoggedEvent)[] = {
          { Py_tp_methods, t_EventsLogger$LoggedEvent__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EventsLogger$LoggedEvent__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventsLogger$LoggedEvent)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EventsLogger$LoggedEvent, t_EventsLogger$LoggedEvent, EventsLogger$LoggedEvent);

        void t_EventsLogger$LoggedEvent::install(PyObject *module)
        {
          installType(&PY_TYPE(EventsLogger$LoggedEvent), &PY_TYPE_DEF(EventsLogger$LoggedEvent), module, "EventsLogger$LoggedEvent", 0);
        }

        void t_EventsLogger$LoggedEvent::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "class_", make_descriptor(EventsLogger$LoggedEvent::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "wrapfn_", make_descriptor(t_EventsLogger$LoggedEvent::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventsLogger$LoggedEvent), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventsLogger$LoggedEvent_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventsLogger$LoggedEvent::initializeClass, 1)))
            return NULL;
          return t_EventsLogger$LoggedEvent::wrap_Object(EventsLogger$LoggedEvent(((t_EventsLogger$LoggedEvent *) arg)->object.this$));
        }
        static PyObject *t_EventsLogger$LoggedEvent_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventsLogger$LoggedEvent::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventsLogger$LoggedEvent_getDate(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_getEventDetector(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_getState(t_EventsLogger$LoggedEvent *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_isIncreasing(t_EventsLogger$LoggedEvent *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isIncreasing());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__date(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__eventDetector(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__increasing(t_EventsLogger$LoggedEvent *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isIncreasing());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EventsLogger$LoggedEvent_get__state(t_EventsLogger$LoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfriend1999Max::class$ = NULL;
              jmethodID *Alfriend1999Max::mids$ = NULL;
              bool Alfriend1999Max::live$ = false;

              jclass Alfriend1999Max::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999Max");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_computeValue_8c19bdea212fe058] = env->getMethodID(cls, "computeValue", "(DDD)D");
                  mids$[mid_computeValue_ff4594b9dc2244a3] = env->getMethodID(cls, "computeValue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfriend1999Max::Alfriend1999Max() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jdouble Alfriend1999Max::computeValue(jdouble a0, jdouble a1, jdouble a2) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeValue_8c19bdea212fe058], a0, a1, a2);
              }

              ::org::hipparchus::CalculusFieldElement Alfriend1999Max::computeValue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_computeValue_ff4594b9dc2244a3], a0.this$, a1.this$, a2.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfriend1999Max::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_5d7ecb27bb5e3bc3]));
              }

              jboolean Alfriend1999Max::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd]);
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
              static PyObject *t_Alfriend1999Max_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfriend1999Max_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfriend1999Max_init_(t_Alfriend1999Max *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfriend1999Max_computeValue(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_getType(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, PyObject *args);
              static PyObject *t_Alfriend1999Max_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, void *data);
              static PyObject *t_Alfriend1999Max_get__type(t_Alfriend1999Max *self, void *data);
              static PyGetSetDef t_Alfriend1999Max__fields_[] = {
                DECLARE_GET_FIELD(t_Alfriend1999Max, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_Alfriend1999Max, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfriend1999Max__methods_[] = {
                DECLARE_METHOD(t_Alfriend1999Max, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999Max, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999Max, computeValue, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999Max, getType, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999Max, isAMaximumProbabilityOfCollisionMethod, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfriend1999Max)[] = {
                { Py_tp_methods, t_Alfriend1999Max__methods_ },
                { Py_tp_init, (void *) t_Alfriend1999Max_init_ },
                { Py_tp_getset, t_Alfriend1999Max__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfriend1999Max)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(Alfriend1999Max, t_Alfriend1999Max, Alfriend1999Max);

              void t_Alfriend1999Max::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfriend1999Max), &PY_TYPE_DEF(Alfriend1999Max), module, "Alfriend1999Max", 0);
              }

              void t_Alfriend1999Max::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "class_", make_descriptor(Alfriend1999Max::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "wrapfn_", make_descriptor(t_Alfriend1999Max::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999Max), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfriend1999Max_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfriend1999Max::initializeClass, 1)))
                  return NULL;
                return t_Alfriend1999Max::wrap_Object(Alfriend1999Max(((t_Alfriend1999Max *) arg)->object.this$));
              }
              static PyObject *t_Alfriend1999Max_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfriend1999Max::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfriend1999Max_init_(t_Alfriend1999Max *self, PyObject *args, PyObject *kwds)
              {
                Alfriend1999Max object((jobject) NULL);

                INT_CALL(object = Alfriend1999Max());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfriend1999Max_computeValue(t_Alfriend1999Max *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 3:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble result;

                    if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                    {
                      OBJ_CALL(result = self->object.computeValue(a0, a1, a2));
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
                      OBJ_CALL(result = self->object.computeValue(a0, a1, a2));
                      return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeValue", args);
                return NULL;
              }

              static PyObject *t_Alfriend1999Max_getType(t_Alfriend1999Max *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfriend1999Max), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfriend1999Max_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(Alfriend1999Max), (PyObject *) self, "isAMaximumProbabilityOfCollisionMethod", args, 2);
              }

              static PyObject *t_Alfriend1999Max_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999Max *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Alfriend1999Max_get__type(t_Alfriend1999Max *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/DSFactory.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DerivativeStructure::class$ = NULL;
        jmethodID *DerivativeStructure::mids$ = NULL;
        bool DerivativeStructure::live$ = false;

        jclass DerivativeStructure::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DerivativeStructure");

            mids$ = new jmethodID[max_mid];
            mids$[mid_abs_73e277cbd957031a] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_acos_73e277cbd957031a] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_acosh_73e277cbd957031a] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_add_1ed24ac492f4d182] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_add_b3ed376bfd09e93b] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_asin_73e277cbd957031a] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_asinh_73e277cbd957031a] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan_73e277cbd957031a] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan2_1ed24ac492f4d182] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atan2_0f74171889ddedd4] = env->getStaticMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_atanh_73e277cbd957031a] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cbrt_73e277cbd957031a] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_ceil_73e277cbd957031a] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_compose_b45548a69087af0a] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_copySign_1ed24ac492f4d182] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_copySign_b3ed376bfd09e93b] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cos_73e277cbd957031a] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_cosh_73e277cbd957031a] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_differentiate_8a8e24319bb4ebe4] = env->getMethodID(cls, "differentiate", "(II)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_divide_1ed24ac492f4d182] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_divide_b3ed376bfd09e93b] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_73e277cbd957031a] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_expm1_73e277cbd957031a] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_floor_73e277cbd957031a] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getAllDerivatives_60c7040667a7dc5c] = env->getMethodID(cls, "getAllDerivatives", "()[D");
            mids$[mid_getExponent_570ce0828f81a2c1] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getFactory_faa2c22c4e517c7b] = env->getMethodID(cls, "getFactory", "()Lorg/hipparchus/analysis/differentiation/DSFactory;");
            mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getFreeParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_48330f48ce3d930b] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getPi_73e277cbd957031a] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_1ed24ac492f4d182] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_hypot_0f74171889ddedd4] = env->getStaticMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_integrate_8a8e24319bb4ebe4] = env->getMethodID(cls, "integrate", "(II)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_ead6bfada2a4ea6d] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_ac2503aed91e0380] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_9758478e8da0ce32] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_371c4afd906d13cc] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_bf4a0f19de76382d] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_369d3057f7d65905] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_181885b2381d0862] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_linearCombination_a96475ce0fe95785] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log_73e277cbd957031a] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log10_73e277cbd957031a] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_log1p_73e277cbd957031a] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_1ed24ac492f4d182] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_b3ed376bfd09e93b] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_multiply_7e2a7a2e34cb2504] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_negate_73e277cbd957031a] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_newInstance_b3ed376bfd09e93b] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_1ed24ac492f4d182] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_b3ed376bfd09e93b] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_7e2a7a2e34cb2504] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_pow_100b6a84f1382e19] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rebase_eba3a2cb3a68c757] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_reciprocal_73e277cbd957031a] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_remainder_1ed24ac492f4d182] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_remainder_b3ed376bfd09e93b] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rint_73e277cbd957031a] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_rootN_7e2a7a2e34cb2504] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_scalb_7e2a7a2e34cb2504] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sign_73e277cbd957031a] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sin_73e277cbd957031a] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_73e277cbd957031a] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_73e277cbd957031a] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_subtract_1ed24ac492f4d182] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_subtract_b3ed376bfd09e93b] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_tan_73e277cbd957031a] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_tanh_73e277cbd957031a] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_taylor_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_73e277cbd957031a] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_73e277cbd957031a] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_ulp_73e277cbd957031a] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DerivativeStructure DerivativeStructure::abs() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_abs_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::acos() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_acos_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::acosh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_acosh_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::add(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_1ed24ac492f4d182], a0.this$));
        }

        DerivativeStructure DerivativeStructure::add(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_add_b3ed376bfd09e93b], a0));
        }

        DerivativeStructure DerivativeStructure::asin() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_asin_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::asinh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_asinh_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::atan() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::atan2(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atan2_1ed24ac492f4d182], a0.this$));
        }

        DerivativeStructure DerivativeStructure::atan2(const DerivativeStructure & a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_atan2_0f74171889ddedd4], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::atanh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_atanh_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::cbrt() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cbrt_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::ceil() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_ceil_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::compose(const JArray< jdouble > & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_compose_b45548a69087af0a], a0.this$));
        }

        DerivativeStructure DerivativeStructure::copySign(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_1ed24ac492f4d182], a0.this$));
        }

        DerivativeStructure DerivativeStructure::copySign(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_copySign_b3ed376bfd09e93b], a0));
        }

        DerivativeStructure DerivativeStructure::cos() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cos_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::cosh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_cosh_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::differentiate(jint a0, jint a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_differentiate_8a8e24319bb4ebe4], a0, a1));
        }

        DerivativeStructure DerivativeStructure::divide(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_1ed24ac492f4d182], a0.this$));
        }

        DerivativeStructure DerivativeStructure::divide(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_divide_b3ed376bfd09e93b], a0));
        }

        jboolean DerivativeStructure::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        DerivativeStructure DerivativeStructure::exp() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_exp_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::expm1() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_expm1_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::floor() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_floor_73e277cbd957031a]));
        }

        JArray< jdouble > DerivativeStructure::getAllDerivatives() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAllDerivatives_60c7040667a7dc5c]));
        }

        jint DerivativeStructure::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::differentiation::DSFactory DerivativeStructure::getFactory() const
        {
          return ::org::hipparchus::analysis::differentiation::DSFactory(env->callObjectMethod(this$, mids$[mid_getFactory_faa2c22c4e517c7b]));
        }

        ::org::hipparchus::Field DerivativeStructure::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
        }

        jint DerivativeStructure::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_570ce0828f81a2c1]);
        }

        jint DerivativeStructure::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        jdouble DerivativeStructure::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_48330f48ce3d930b], a0.this$);
        }

        DerivativeStructure DerivativeStructure::getPi() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_73e277cbd957031a]));
        }

        jdouble DerivativeStructure::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
        }

        jdouble DerivativeStructure::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
        }

        jint DerivativeStructure::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        DerivativeStructure DerivativeStructure::hypot(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_hypot_1ed24ac492f4d182], a0.this$));
        }

        DerivativeStructure DerivativeStructure::hypot(const DerivativeStructure & a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_hypot_0f74171889ddedd4], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::integrate(jint a0, jint a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_integrate_8a8e24319bb4ebe4], a0, a1));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const JArray< jdouble > & a0, const JArray< DerivativeStructure > & a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_ead6bfada2a4ea6d], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const JArray< DerivativeStructure > & a0, const JArray< DerivativeStructure > & a1) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_ac2503aed91e0380], a0.this$, a1.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_9758478e8da0ce32], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_371c4afd906d13cc], a0, a1.this$, a2, a3.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3, const DerivativeStructure & a4, const DerivativeStructure & a5) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_bf4a0f19de76382d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3, jdouble a4, const DerivativeStructure & a5) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_369d3057f7d65905], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(const DerivativeStructure & a0, const DerivativeStructure & a1, const DerivativeStructure & a2, const DerivativeStructure & a3, const DerivativeStructure & a4, const DerivativeStructure & a5, const DerivativeStructure & a6, const DerivativeStructure & a7) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_181885b2381d0862], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        DerivativeStructure DerivativeStructure::linearCombination(jdouble a0, const DerivativeStructure & a1, jdouble a2, const DerivativeStructure & a3, jdouble a4, const DerivativeStructure & a5, jdouble a6, const DerivativeStructure & a7) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_linearCombination_a96475ce0fe95785], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        DerivativeStructure DerivativeStructure::log() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::log10() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log10_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::log1p() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_log1p_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::multiply(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_1ed24ac492f4d182], a0.this$));
        }

        DerivativeStructure DerivativeStructure::multiply(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_b3ed376bfd09e93b], a0));
        }

        DerivativeStructure DerivativeStructure::multiply(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_multiply_7e2a7a2e34cb2504], a0));
        }

        DerivativeStructure DerivativeStructure::negate() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_negate_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::newInstance(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_newInstance_b3ed376bfd09e93b], a0));
        }

        DerivativeStructure DerivativeStructure::pow(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_1ed24ac492f4d182], a0.this$));
        }

        DerivativeStructure DerivativeStructure::pow(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_b3ed376bfd09e93b], a0));
        }

        DerivativeStructure DerivativeStructure::pow(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_pow_7e2a7a2e34cb2504], a0));
        }

        DerivativeStructure DerivativeStructure::pow(jdouble a0, const DerivativeStructure & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DerivativeStructure(env->callStaticObjectMethod(cls, mids$[mid_pow_100b6a84f1382e19], a0, a1.this$));
        }

        DerivativeStructure DerivativeStructure::rebase(const JArray< DerivativeStructure > & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rebase_eba3a2cb3a68c757], a0.this$));
        }

        DerivativeStructure DerivativeStructure::reciprocal() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_reciprocal_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::remainder(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_1ed24ac492f4d182], a0.this$));
        }

        DerivativeStructure DerivativeStructure::remainder(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_remainder_b3ed376bfd09e93b], a0));
        }

        DerivativeStructure DerivativeStructure::rint() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rint_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::rootN(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_rootN_7e2a7a2e34cb2504], a0));
        }

        DerivativeStructure DerivativeStructure::scalb(jint a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_scalb_7e2a7a2e34cb2504], a0));
        }

        DerivativeStructure DerivativeStructure::sign() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sign_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::sin() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sin_73e277cbd957031a]));
        }

        ::org::hipparchus::util::FieldSinCos DerivativeStructure::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
        }

        DerivativeStructure DerivativeStructure::sinh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sinh_73e277cbd957031a]));
        }

        ::org::hipparchus::util::FieldSinhCosh DerivativeStructure::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
        }

        DerivativeStructure DerivativeStructure::sqrt() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_sqrt_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::subtract(const DerivativeStructure & a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_1ed24ac492f4d182], a0.this$));
        }

        DerivativeStructure DerivativeStructure::subtract(jdouble a0) const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_subtract_b3ed376bfd09e93b], a0));
        }

        DerivativeStructure DerivativeStructure::tan() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_tan_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::tanh() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_tanh_73e277cbd957031a]));
        }

        jdouble DerivativeStructure::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_9dc1ec0bcc0a9a29], a0.this$);
        }

        DerivativeStructure DerivativeStructure::toDegrees() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDegrees_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::toRadians() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toRadians_73e277cbd957031a]));
        }

        DerivativeStructure DerivativeStructure::ulp() const
        {
          return DerivativeStructure(env->callObjectMethod(this$, mids$[mid_ulp_73e277cbd957031a]));
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
        static PyObject *t_DerivativeStructure_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeStructure_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DerivativeStructure_abs(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_acos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_acosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_add(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_asin(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_asinh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_atan(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_atan2(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_atan2_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_atanh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_cbrt(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_ceil(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_compose(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_copySign(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_cos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_cosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_differentiate(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_divide(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_equals(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_exp(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_expm1(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_floor(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getAllDerivatives(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getExponent(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getFactory(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getField(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getFreeParameters(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getOrder(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getPartialDerivative(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_getPi(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getReal(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_getValue(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_hashCode(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_hypot(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_hypot_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_integrate(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_linearCombination(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_log(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_log10(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_log1p(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_multiply(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_negate(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_newInstance(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_pow(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_DerivativeStructure_rebase(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_reciprocal(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_remainder(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_rint(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_rootN(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_scalb(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_sign(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sin(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinCos(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sinhCosh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_sqrt(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_subtract(t_DerivativeStructure *self, PyObject *args);
        static PyObject *t_DerivativeStructure_tan(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_tanh(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_taylor(t_DerivativeStructure *self, PyObject *arg);
        static PyObject *t_DerivativeStructure_toDegrees(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_toRadians(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_ulp(t_DerivativeStructure *self);
        static PyObject *t_DerivativeStructure_get__allDerivatives(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__exponent(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__factory(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__field(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__freeParameters(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__order(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__pi(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__real(t_DerivativeStructure *self, void *data);
        static PyObject *t_DerivativeStructure_get__value(t_DerivativeStructure *self, void *data);
        static PyGetSetDef t_DerivativeStructure__fields_[] = {
          DECLARE_GET_FIELD(t_DerivativeStructure, allDerivatives),
          DECLARE_GET_FIELD(t_DerivativeStructure, exponent),
          DECLARE_GET_FIELD(t_DerivativeStructure, factory),
          DECLARE_GET_FIELD(t_DerivativeStructure, field),
          DECLARE_GET_FIELD(t_DerivativeStructure, freeParameters),
          DECLARE_GET_FIELD(t_DerivativeStructure, order),
          DECLARE_GET_FIELD(t_DerivativeStructure, pi),
          DECLARE_GET_FIELD(t_DerivativeStructure, real),
          DECLARE_GET_FIELD(t_DerivativeStructure, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DerivativeStructure__methods_[] = {
          DECLARE_METHOD(t_DerivativeStructure, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, abs, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, acos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, acosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, add, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, asin, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, asinh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, atan, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, atan2, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, atan2_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, atanh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, ceil, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, compose, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, copySign, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, cos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, cosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, differentiate, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, divide, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, equals, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, exp, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, expm1, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, floor, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getAllDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getFactory, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getField, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getPartialDerivative, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, getPi, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getReal, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, getValue, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, hypot, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, hypot_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, integrate, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, log, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, log10, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, log1p, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, multiply, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, negate, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, newInstance, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, pow, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DerivativeStructure, rebase, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, remainder, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, rint, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, rootN, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, scalb, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, sign, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sin, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, subtract, METH_VARARGS),
          DECLARE_METHOD(t_DerivativeStructure, tan, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, tanh, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, taylor, METH_O),
          DECLARE_METHOD(t_DerivativeStructure, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_DerivativeStructure, ulp, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DerivativeStructure)[] = {
          { Py_tp_methods, t_DerivativeStructure__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DerivativeStructure__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DerivativeStructure)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DerivativeStructure, t_DerivativeStructure, DerivativeStructure);

        void t_DerivativeStructure::install(PyObject *module)
        {
          installType(&PY_TYPE(DerivativeStructure), &PY_TYPE_DEF(DerivativeStructure), module, "DerivativeStructure", 0);
        }

        void t_DerivativeStructure::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "class_", make_descriptor(DerivativeStructure::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "wrapfn_", make_descriptor(t_DerivativeStructure::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DerivativeStructure), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DerivativeStructure_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DerivativeStructure::initializeClass, 1)))
            return NULL;
          return t_DerivativeStructure::wrap_Object(DerivativeStructure(((t_DerivativeStructure *) arg)->object.this$));
        }
        static PyObject *t_DerivativeStructure_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DerivativeStructure::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DerivativeStructure_abs(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_acos(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_acosh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_add(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_asin(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_asinh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_atan(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_atan2(t_DerivativeStructure *self, PyObject *arg)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_atan2_(PyTypeObject *type, PyObject *args)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "kk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::atan2(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "atan2_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_atanh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_cbrt(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_ceil(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_compose(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_copySign(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_cos(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_cosh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_differentiate(t_DerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.differentiate(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "differentiate", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_divide(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_equals(t_DerivativeStructure *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(DerivativeStructure), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_DerivativeStructure_exp(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_expm1(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_floor(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getAllDerivatives(t_DerivativeStructure *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllDerivatives());
          return result.wrap();
        }

        static PyObject *t_DerivativeStructure_getExponent(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getFactory(t_DerivativeStructure *self)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory result((jobject) NULL);
          OBJ_CALL(result = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getField(t_DerivativeStructure *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_getFreeParameters(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getOrder(t_DerivativeStructure *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DerivativeStructure_getPartialDerivative(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivative(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_getPi(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_getReal(t_DerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DerivativeStructure_getValue(t_DerivativeStructure *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DerivativeStructure_hashCode(t_DerivativeStructure *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DerivativeStructure), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_DerivativeStructure_hypot(t_DerivativeStructure *self, PyObject *arg)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_hypot_(PyTypeObject *type, PyObject *args)
        {
          DerivativeStructure a0((jobject) NULL);
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "kk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::hypot(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "hypot_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_integrate(t_DerivativeStructure *self, PyObject *args)
        {
          jint a0;
          jint a1;
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_linearCombination(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< DerivativeStructure > a1((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D[k", DerivativeStructure::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              JArray< DerivativeStructure > a0((jobject) NULL);
              JArray< DerivativeStructure > a1((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[k[k", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure a4((jobject) NULL);
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              jdouble a4;
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure a1((jobject) NULL);
              DerivativeStructure a2((jobject) NULL);
              DerivativeStructure a3((jobject) NULL);
              DerivativeStructure a4((jobject) NULL);
              DerivativeStructure a5((jobject) NULL);
              DerivativeStructure a6((jobject) NULL);
              DerivativeStructure a7((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure a1((jobject) NULL);
              jdouble a2;
              DerivativeStructure a3((jobject) NULL);
              jdouble a4;
              DerivativeStructure a5((jobject) NULL);
              jdouble a6;
              DerivativeStructure a7((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, DerivativeStructure::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_log(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_log10(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_log1p(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_multiply(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jint a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_negate(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_newInstance(t_DerivativeStructure *self, PyObject *arg)
        {
          jdouble a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_pow(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jint a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          DerivativeStructure a1((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "Dk", DerivativeStructure::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DerivativeStructure::pow(a0, a1));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_rebase(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< DerivativeStructure > a0((jobject) NULL);
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "[k", DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.rebase(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_reciprocal(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_remainder(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_rint(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_rootN(t_DerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_scalb(t_DerivativeStructure *self, PyObject *arg)
        {
          jint a0;
          DerivativeStructure result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_DerivativeStructure::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_sign(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sin(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sinCos(t_DerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_sinh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_sinhCosh(t_DerivativeStructure *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DerivativeStructure_sqrt(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_subtract(t_DerivativeStructure *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              DerivativeStructure a0((jobject) NULL);
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "k", DerivativeStructure::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              DerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_DerivativeStructure::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_tan(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_tanh(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_taylor(t_DerivativeStructure *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.taylor(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", arg);
          return NULL;
        }

        static PyObject *t_DerivativeStructure_toDegrees(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_toRadians(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_ulp(t_DerivativeStructure *self)
        {
          DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DerivativeStructure_get__allDerivatives(t_DerivativeStructure *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllDerivatives());
          return value.wrap();
        }

        static PyObject *t_DerivativeStructure_get__exponent(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__factory(t_DerivativeStructure *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSFactory value((jobject) NULL);
          OBJ_CALL(value = self->object.getFactory());
          return ::org::hipparchus::analysis::differentiation::t_DSFactory::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__field(t_DerivativeStructure *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__freeParameters(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__order(t_DerivativeStructure *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DerivativeStructure_get__pi(t_DerivativeStructure *self, void *data)
        {
          DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DerivativeStructure_get__real(t_DerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DerivativeStructure_get__value(t_DerivativeStructure *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "org/orekit/estimation/measurements/generation/SignSemantic.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *SignSemantic::class$ = NULL;
          jmethodID *SignSemantic::mids$ = NULL;
          bool SignSemantic::live$ = false;
          SignSemantic *SignSemantic::FEASIBLE_MEASUREMENT_WHEN_NEGATIVE = NULL;
          SignSemantic *SignSemantic::FEASIBLE_MEASUREMENT_WHEN_POSITIVE = NULL;

          jclass SignSemantic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/SignSemantic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_measurementIsFeasible_2e401133981893e4] = env->getMethodID(cls, "measurementIsFeasible", "(D)Z");
              mids$[mid_valueOf_35065e60247c031e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/estimation/measurements/generation/SignSemantic;");
              mids$[mid_values_60713141b3963d68] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/estimation/measurements/generation/SignSemantic;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FEASIBLE_MEASUREMENT_WHEN_NEGATIVE = new SignSemantic(env->getStaticObjectField(cls, "FEASIBLE_MEASUREMENT_WHEN_NEGATIVE", "Lorg/orekit/estimation/measurements/generation/SignSemantic;"));
              FEASIBLE_MEASUREMENT_WHEN_POSITIVE = new SignSemantic(env->getStaticObjectField(cls, "FEASIBLE_MEASUREMENT_WHEN_POSITIVE", "Lorg/orekit/estimation/measurements/generation/SignSemantic;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean SignSemantic::measurementIsFeasible(jdouble a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_measurementIsFeasible_2e401133981893e4], a0);
          }

          SignSemantic SignSemantic::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SignSemantic(env->callStaticObjectMethod(cls, mids$[mid_valueOf_35065e60247c031e], a0.this$));
          }

          JArray< SignSemantic > SignSemantic::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SignSemantic >(env->callStaticObjectMethod(cls, mids$[mid_values_60713141b3963d68]));
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
          static PyObject *t_SignSemantic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SignSemantic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SignSemantic_of_(t_SignSemantic *self, PyObject *args);
          static PyObject *t_SignSemantic_measurementIsFeasible(t_SignSemantic *self, PyObject *arg);
          static PyObject *t_SignSemantic_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SignSemantic_values(PyTypeObject *type);
          static PyObject *t_SignSemantic_get__parameters_(t_SignSemantic *self, void *data);
          static PyGetSetDef t_SignSemantic__fields_[] = {
            DECLARE_GET_FIELD(t_SignSemantic, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SignSemantic__methods_[] = {
            DECLARE_METHOD(t_SignSemantic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, of_, METH_VARARGS),
            DECLARE_METHOD(t_SignSemantic, measurementIsFeasible, METH_O),
            DECLARE_METHOD(t_SignSemantic, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SignSemantic, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SignSemantic)[] = {
            { Py_tp_methods, t_SignSemantic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SignSemantic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SignSemantic)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SignSemantic, t_SignSemantic, SignSemantic);
          PyObject *t_SignSemantic::wrap_Object(const SignSemantic& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SignSemantic::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SignSemantic *self = (t_SignSemantic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SignSemantic::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SignSemantic::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SignSemantic *self = (t_SignSemantic *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SignSemantic::install(PyObject *module)
          {
            installType(&PY_TYPE(SignSemantic), &PY_TYPE_DEF(SignSemantic), module, "SignSemantic", 0);
          }

          void t_SignSemantic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "class_", make_descriptor(SignSemantic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "wrapfn_", make_descriptor(t_SignSemantic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "boxfn_", make_descriptor(boxObject));
            env->getClass(SignSemantic::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "FEASIBLE_MEASUREMENT_WHEN_NEGATIVE", make_descriptor(t_SignSemantic::wrap_Object(*SignSemantic::FEASIBLE_MEASUREMENT_WHEN_NEGATIVE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SignSemantic), "FEASIBLE_MEASUREMENT_WHEN_POSITIVE", make_descriptor(t_SignSemantic::wrap_Object(*SignSemantic::FEASIBLE_MEASUREMENT_WHEN_POSITIVE)));
          }

          static PyObject *t_SignSemantic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SignSemantic::initializeClass, 1)))
              return NULL;
            return t_SignSemantic::wrap_Object(SignSemantic(((t_SignSemantic *) arg)->object.this$));
          }
          static PyObject *t_SignSemantic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SignSemantic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SignSemantic_of_(t_SignSemantic *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SignSemantic_measurementIsFeasible(t_SignSemantic *self, PyObject *arg)
          {
            jdouble a0;
            jboolean result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.measurementIsFeasible(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "measurementIsFeasible", arg);
            return NULL;
          }

          static PyObject *t_SignSemantic_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SignSemantic result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::generation::SignSemantic::valueOf(a0));
              return t_SignSemantic::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SignSemantic_values(PyTypeObject *type)
          {
            JArray< SignSemantic > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::estimation::measurements::generation::SignSemantic::values());
            return JArray<jobject>(result.this$).wrap(t_SignSemantic::wrap_jobject);
          }
          static PyObject *t_SignSemantic_get__parameters_(t_SignSemantic *self, void *data)
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
#include "java/text/DecimalFormatSymbols.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/util/Currency.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *DecimalFormatSymbols::class$ = NULL;
    jmethodID *DecimalFormatSymbols::mids$ = NULL;
    bool DecimalFormatSymbols::live$ = false;

    jclass DecimalFormatSymbols::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/DecimalFormatSymbols");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_c0d4c4b5d69513bc] = env->getMethodID(cls, "<init>", "(Ljava/util/Locale;)V");
        mids$[mid_clone_4d26fd885228c716] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAvailableLocales_c5ed07ebd55821bb] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCurrency_7ca0ce948a4de82c] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getCurrencySymbol_11b109bd155ca898] = env->getMethodID(cls, "getCurrencySymbol", "()Ljava/lang/String;");
        mids$[mid_getDecimalSeparator_7818f5b58320cd1f] = env->getMethodID(cls, "getDecimalSeparator", "()C");
        mids$[mid_getDigit_7818f5b58320cd1f] = env->getMethodID(cls, "getDigit", "()C");
        mids$[mid_getExponentSeparator_11b109bd155ca898] = env->getMethodID(cls, "getExponentSeparator", "()Ljava/lang/String;");
        mids$[mid_getGroupingSeparator_7818f5b58320cd1f] = env->getMethodID(cls, "getGroupingSeparator", "()C");
        mids$[mid_getInfinity_11b109bd155ca898] = env->getMethodID(cls, "getInfinity", "()Ljava/lang/String;");
        mids$[mid_getInstance_140bef9b20a8cdf4] = env->getStaticMethodID(cls, "getInstance", "()Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getInstance_ed1556523d6313dd] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getInternationalCurrencySymbol_11b109bd155ca898] = env->getMethodID(cls, "getInternationalCurrencySymbol", "()Ljava/lang/String;");
        mids$[mid_getMinusSign_7818f5b58320cd1f] = env->getMethodID(cls, "getMinusSign", "()C");
        mids$[mid_getMonetaryDecimalSeparator_7818f5b58320cd1f] = env->getMethodID(cls, "getMonetaryDecimalSeparator", "()C");
        mids$[mid_getNaN_11b109bd155ca898] = env->getMethodID(cls, "getNaN", "()Ljava/lang/String;");
        mids$[mid_getPatternSeparator_7818f5b58320cd1f] = env->getMethodID(cls, "getPatternSeparator", "()C");
        mids$[mid_getPerMill_7818f5b58320cd1f] = env->getMethodID(cls, "getPerMill", "()C");
        mids$[mid_getPercent_7818f5b58320cd1f] = env->getMethodID(cls, "getPercent", "()C");
        mids$[mid_getZeroDigit_7818f5b58320cd1f] = env->getMethodID(cls, "getZeroDigit", "()C");
        mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setCurrency_7f42074111826307] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setCurrencySymbol_d0bc48d5b00dc40c] = env->getMethodID(cls, "setCurrencySymbol", "(Ljava/lang/String;)V");
        mids$[mid_setDecimalSeparator_636c0bbb96cab723] = env->getMethodID(cls, "setDecimalSeparator", "(C)V");
        mids$[mid_setDigit_636c0bbb96cab723] = env->getMethodID(cls, "setDigit", "(C)V");
        mids$[mid_setExponentSeparator_d0bc48d5b00dc40c] = env->getMethodID(cls, "setExponentSeparator", "(Ljava/lang/String;)V");
        mids$[mid_setGroupingSeparator_636c0bbb96cab723] = env->getMethodID(cls, "setGroupingSeparator", "(C)V");
        mids$[mid_setInfinity_d0bc48d5b00dc40c] = env->getMethodID(cls, "setInfinity", "(Ljava/lang/String;)V");
        mids$[mid_setInternationalCurrencySymbol_d0bc48d5b00dc40c] = env->getMethodID(cls, "setInternationalCurrencySymbol", "(Ljava/lang/String;)V");
        mids$[mid_setMinusSign_636c0bbb96cab723] = env->getMethodID(cls, "setMinusSign", "(C)V");
        mids$[mid_setMonetaryDecimalSeparator_636c0bbb96cab723] = env->getMethodID(cls, "setMonetaryDecimalSeparator", "(C)V");
        mids$[mid_setNaN_d0bc48d5b00dc40c] = env->getMethodID(cls, "setNaN", "(Ljava/lang/String;)V");
        mids$[mid_setPatternSeparator_636c0bbb96cab723] = env->getMethodID(cls, "setPatternSeparator", "(C)V");
        mids$[mid_setPerMill_636c0bbb96cab723] = env->getMethodID(cls, "setPerMill", "(C)V");
        mids$[mid_setPercent_636c0bbb96cab723] = env->getMethodID(cls, "setPercent", "(C)V");
        mids$[mid_setZeroDigit_636c0bbb96cab723] = env->getMethodID(cls, "setZeroDigit", "(C)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DecimalFormatSymbols::DecimalFormatSymbols() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    DecimalFormatSymbols::DecimalFormatSymbols(const ::java::util::Locale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c0d4c4b5d69513bc, a0.this$)) {}

    ::java::lang::Object DecimalFormatSymbols::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_4d26fd885228c716]));
    }

    jboolean DecimalFormatSymbols::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
    }

    JArray< ::java::util::Locale > DecimalFormatSymbols::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_c5ed07ebd55821bb]));
    }

    ::java::util::Currency DecimalFormatSymbols::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_7ca0ce948a4de82c]));
    }

    ::java::lang::String DecimalFormatSymbols::getCurrencySymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCurrencySymbol_11b109bd155ca898]));
    }

    jchar DecimalFormatSymbols::getDecimalSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getDecimalSeparator_7818f5b58320cd1f]);
    }

    jchar DecimalFormatSymbols::getDigit() const
    {
      return env->callCharMethod(this$, mids$[mid_getDigit_7818f5b58320cd1f]);
    }

    ::java::lang::String DecimalFormatSymbols::getExponentSeparator() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExponentSeparator_11b109bd155ca898]));
    }

    jchar DecimalFormatSymbols::getGroupingSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getGroupingSeparator_7818f5b58320cd1f]);
    }

    ::java::lang::String DecimalFormatSymbols::getInfinity() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInfinity_11b109bd155ca898]));
    }

    DecimalFormatSymbols DecimalFormatSymbols::getInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return DecimalFormatSymbols(env->callStaticObjectMethod(cls, mids$[mid_getInstance_140bef9b20a8cdf4]));
    }

    DecimalFormatSymbols DecimalFormatSymbols::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return DecimalFormatSymbols(env->callStaticObjectMethod(cls, mids$[mid_getInstance_ed1556523d6313dd], a0.this$));
    }

    ::java::lang::String DecimalFormatSymbols::getInternationalCurrencySymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalCurrencySymbol_11b109bd155ca898]));
    }

    jchar DecimalFormatSymbols::getMinusSign() const
    {
      return env->callCharMethod(this$, mids$[mid_getMinusSign_7818f5b58320cd1f]);
    }

    jchar DecimalFormatSymbols::getMonetaryDecimalSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getMonetaryDecimalSeparator_7818f5b58320cd1f]);
    }

    ::java::lang::String DecimalFormatSymbols::getNaN() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNaN_11b109bd155ca898]));
    }

    jchar DecimalFormatSymbols::getPatternSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getPatternSeparator_7818f5b58320cd1f]);
    }

    jchar DecimalFormatSymbols::getPerMill() const
    {
      return env->callCharMethod(this$, mids$[mid_getPerMill_7818f5b58320cd1f]);
    }

    jchar DecimalFormatSymbols::getPercent() const
    {
      return env->callCharMethod(this$, mids$[mid_getPercent_7818f5b58320cd1f]);
    }

    jchar DecimalFormatSymbols::getZeroDigit() const
    {
      return env->callCharMethod(this$, mids$[mid_getZeroDigit_7818f5b58320cd1f]);
    }

    jint DecimalFormatSymbols::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
    }

    void DecimalFormatSymbols::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_7f42074111826307], a0.this$);
    }

    void DecimalFormatSymbols::setCurrencySymbol(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrencySymbol_d0bc48d5b00dc40c], a0.this$);
    }

    void DecimalFormatSymbols::setDecimalSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalSeparator_636c0bbb96cab723], a0);
    }

    void DecimalFormatSymbols::setDigit(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDigit_636c0bbb96cab723], a0);
    }

    void DecimalFormatSymbols::setExponentSeparator(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setExponentSeparator_d0bc48d5b00dc40c], a0.this$);
    }

    void DecimalFormatSymbols::setGroupingSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingSeparator_636c0bbb96cab723], a0);
    }

    void DecimalFormatSymbols::setInfinity(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setInfinity_d0bc48d5b00dc40c], a0.this$);
    }

    void DecimalFormatSymbols::setInternationalCurrencySymbol(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setInternationalCurrencySymbol_d0bc48d5b00dc40c], a0.this$);
    }

    void DecimalFormatSymbols::setMinusSign(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinusSign_636c0bbb96cab723], a0);
    }

    void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMonetaryDecimalSeparator_636c0bbb96cab723], a0);
    }

    void DecimalFormatSymbols::setNaN(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNaN_d0bc48d5b00dc40c], a0.this$);
    }

    void DecimalFormatSymbols::setPatternSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPatternSeparator_636c0bbb96cab723], a0);
    }

    void DecimalFormatSymbols::setPerMill(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPerMill_636c0bbb96cab723], a0);
    }

    void DecimalFormatSymbols::setPercent(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPercent_636c0bbb96cab723], a0);
    }

    void DecimalFormatSymbols::setZeroDigit(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setZeroDigit_636c0bbb96cab723], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_DecimalFormatSymbols_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DecimalFormatSymbols_init_(t_DecimalFormatSymbols *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DecimalFormatSymbols_clone(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_equals(t_DecimalFormatSymbols *self, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_DecimalFormatSymbols_getCurrency(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getCurrencySymbol(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getDecimalSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getDigit(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getExponentSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getGroupingSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getInfinity(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_getInternationalCurrencySymbol(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getMinusSign(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getMonetaryDecimalSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getNaN(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPatternSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPerMill(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPercent(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getZeroDigit(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_hashCode(t_DecimalFormatSymbols *self, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_setCurrency(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setDigit(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setExponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setGroupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setInfinity(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setInternationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setMinusSign(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setMonetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setNaN(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPatternSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPerMill(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPercent(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setZeroDigit(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_get__availableLocales(t_DecimalFormatSymbols *self, void *data);
    static PyObject *t_DecimalFormatSymbols_get__currency(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__currency(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__currencySymbol(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__currencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__decimalSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__decimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__digit(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__digit(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__exponentSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__exponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__groupingSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__groupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__infinity(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__infinity(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__instance(t_DecimalFormatSymbols *self, void *data);
    static PyObject *t_DecimalFormatSymbols_get__internationalCurrencySymbol(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__internationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__minusSign(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__minusSign(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__naN(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__naN(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__patternSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__patternSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__perMill(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__perMill(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__percent(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__percent(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__zeroDigit(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__zeroDigit(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyGetSetDef t_DecimalFormatSymbols__fields_[] = {
      DECLARE_GET_FIELD(t_DecimalFormatSymbols, availableLocales),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, currency),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, currencySymbol),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, decimalSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, digit),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, exponentSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, groupingSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, infinity),
      DECLARE_GET_FIELD(t_DecimalFormatSymbols, instance),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, internationalCurrencySymbol),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, minusSign),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, monetaryDecimalSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, naN),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, patternSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, perMill),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, percent),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, zeroDigit),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DecimalFormatSymbols__methods_[] = {
      DECLARE_METHOD(t_DecimalFormatSymbols, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, clone, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, equals, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getCurrency, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getCurrencySymbol, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getDecimalSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getDigit, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getExponentSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getGroupingSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInfinity, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInternationalCurrencySymbol, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getMinusSign, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getMonetaryDecimalSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getNaN, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPatternSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPerMill, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPercent, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getZeroDigit, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, setCurrency, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setCurrencySymbol, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setDecimalSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setDigit, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setExponentSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setGroupingSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setInfinity, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setInternationalCurrencySymbol, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setMinusSign, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setMonetaryDecimalSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setNaN, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPatternSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPerMill, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPercent, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setZeroDigit, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DecimalFormatSymbols)[] = {
      { Py_tp_methods, t_DecimalFormatSymbols__methods_ },
      { Py_tp_init, (void *) t_DecimalFormatSymbols_init_ },
      { Py_tp_getset, t_DecimalFormatSymbols__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DecimalFormatSymbols)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DecimalFormatSymbols, t_DecimalFormatSymbols, DecimalFormatSymbols);

    void t_DecimalFormatSymbols::install(PyObject *module)
    {
      installType(&PY_TYPE(DecimalFormatSymbols), &PY_TYPE_DEF(DecimalFormatSymbols), module, "DecimalFormatSymbols", 0);
    }

    void t_DecimalFormatSymbols::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "class_", make_descriptor(DecimalFormatSymbols::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "wrapfn_", make_descriptor(t_DecimalFormatSymbols::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DecimalFormatSymbols_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DecimalFormatSymbols::initializeClass, 1)))
        return NULL;
      return t_DecimalFormatSymbols::wrap_Object(DecimalFormatSymbols(((t_DecimalFormatSymbols *) arg)->object.this$));
    }
    static PyObject *t_DecimalFormatSymbols_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DecimalFormatSymbols::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DecimalFormatSymbols_init_(t_DecimalFormatSymbols *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormatSymbols object((jobject) NULL);

          INT_CALL(object = DecimalFormatSymbols());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          DecimalFormatSymbols object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            INT_CALL(object = DecimalFormatSymbols(a0));
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

    static PyObject *t_DecimalFormatSymbols_clone(t_DecimalFormatSymbols *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_DecimalFormatSymbols_equals(t_DecimalFormatSymbols *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(DecimalFormatSymbols), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_DecimalFormatSymbols_getAvailableLocales(PyTypeObject *type)
    {
      JArray< ::java::util::Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_DecimalFormatSymbols_getCurrency(t_DecimalFormatSymbols *self)
    {
      ::java::util::Currency result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(result);
    }

    static PyObject *t_DecimalFormatSymbols_getCurrencySymbol(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrencySymbol());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getDecimalSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getDecimalSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getDigit(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getDigit());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getExponentSeparator(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getExponentSeparator());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getGroupingSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getGroupingSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getInfinity(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getInfinity());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormatSymbols result((jobject) NULL);
          OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getInstance());
          return t_DecimalFormatSymbols::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          DecimalFormatSymbols result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getInstance(a0));
            return t_DecimalFormatSymbols::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_getInternationalCurrencySymbol(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getInternationalCurrencySymbol());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getMinusSign(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getMinusSign());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getMonetaryDecimalSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getMonetaryDecimalSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getNaN(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNaN());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPatternSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPatternSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPerMill(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPerMill());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPercent(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPercent());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getZeroDigit(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getZeroDigit());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_hashCode(t_DecimalFormatSymbols *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormatSymbols), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_DecimalFormatSymbols_setCurrency(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrency", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setCurrencySymbol(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrencySymbol", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setDecimalSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setDigit(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setDigit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDigit", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setExponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setExponentSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setExponentSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setGroupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setGroupingSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setInfinity(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setInfinity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setInfinity", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setInternationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setInternationalCurrencySymbol(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setInternationalCurrencySymbol", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setMinusSign(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setMinusSign(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinusSign", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setMonetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setMonetaryDecimalSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMonetaryDecimalSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setNaN(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNaN(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNaN", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPatternSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPatternSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPatternSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPerMill(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPerMill(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPerMill", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPercent(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPercent(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPercent", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setZeroDigit(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setZeroDigit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setZeroDigit", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_get__availableLocales(t_DecimalFormatSymbols *self, void *data)
    {
      JArray< ::java::util::Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_DecimalFormatSymbols_get__currency(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_DecimalFormatSymbols_set__currency(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__currencySymbol(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencySymbol());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__currencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setCurrencySymbol(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currencySymbol", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__decimalSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getDecimalSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__decimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setDecimalSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__digit(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getDigit());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__digit(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setDigit(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "digit", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__exponentSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getExponentSeparator());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__exponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setExponentSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "exponentSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__groupingSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getGroupingSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__groupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setGroupingSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__infinity(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getInfinity());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__infinity(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setInfinity(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "infinity", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__instance(t_DecimalFormatSymbols *self, void *data)
    {
      DecimalFormatSymbols value((jobject) NULL);
      OBJ_CALL(value = self->object.getInstance());
      return t_DecimalFormatSymbols::wrap_Object(value);
    }

    static PyObject *t_DecimalFormatSymbols_get__internationalCurrencySymbol(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getInternationalCurrencySymbol());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__internationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setInternationalCurrencySymbol(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "internationalCurrencySymbol", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__minusSign(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getMinusSign());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__minusSign(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setMinusSign(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minusSign", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getMonetaryDecimalSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setMonetaryDecimalSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "monetaryDecimalSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__naN(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNaN());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__naN(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNaN(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "naN", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__patternSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPatternSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__patternSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPatternSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "patternSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__perMill(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPerMill());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__perMill(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPerMill(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "perMill", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__percent(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPercent());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__percent(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPercent(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "percent", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__zeroDigit(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getZeroDigit());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__zeroDigit(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setZeroDigit(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "zeroDigit", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASOrbitalElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *PythonSBASOrbitalElements::class$ = NULL;
            jmethodID *PythonSBASOrbitalElements::mids$ = NULL;
            bool PythonSBASOrbitalElements::live$ = false;

            jclass PythonSBASOrbitalElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/PythonSBASOrbitalElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getAGf0_dff5885c2c873297] = env->getMethodID(cls, "getAGf0", "()D");
                mids$[mid_getAGf1_dff5885c2c873297] = env->getMethodID(cls, "getAGf1", "()D");
                mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getIODN_570ce0828f81a2c1] = env->getMethodID(cls, "getIODN", "()I");
                mids$[mid_getPRN_570ce0828f81a2c1] = env->getMethodID(cls, "getPRN", "()I");
                mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getToc_dff5885c2c873297] = env->getMethodID(cls, "getToc", "()D");
                mids$[mid_getWeek_570ce0828f81a2c1] = env->getMethodID(cls, "getWeek", "()I");
                mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_dff5885c2c873297] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_dff5885c2c873297] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_dff5885c2c873297] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_dff5885c2c873297] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_dff5885c2c873297] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_dff5885c2c873297] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_dff5885c2c873297] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_dff5885c2c873297] = env->getMethodID(cls, "getZDotDot", "()D");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonSBASOrbitalElements::PythonSBASOrbitalElements() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonSBASOrbitalElements::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonSBASOrbitalElements::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonSBASOrbitalElements::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonSBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonSBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonSBASOrbitalElements_init_(t_PythonSBASOrbitalElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonSBASOrbitalElements_finalize(t_PythonSBASOrbitalElements *self);
            static PyObject *t_PythonSBASOrbitalElements_pythonExtension(t_PythonSBASOrbitalElements *self, PyObject *args);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf00(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf11(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonSBASOrbitalElements_getDate2(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getIODN3(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getPRN4(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getTime5(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getToc6(JNIEnv *jenv, jobject jobj);
            static jint JNICALL t_PythonSBASOrbitalElements_getWeek7(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getX8(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDot9(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDotDot10(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getY11(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDot12(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDotDot13(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZ14(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDot15(JNIEnv *jenv, jobject jobj);
            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDotDot16(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonSBASOrbitalElements_pythonDecRef17(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonSBASOrbitalElements_get__self(t_PythonSBASOrbitalElements *self, void *data);
            static PyGetSetDef t_PythonSBASOrbitalElements__fields_[] = {
              DECLARE_GET_FIELD(t_PythonSBASOrbitalElements, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonSBASOrbitalElements__methods_[] = {
              DECLARE_METHOD(t_PythonSBASOrbitalElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonSBASOrbitalElements, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonSBASOrbitalElements)[] = {
              { Py_tp_methods, t_PythonSBASOrbitalElements__methods_ },
              { Py_tp_init, (void *) t_PythonSBASOrbitalElements_init_ },
              { Py_tp_getset, t_PythonSBASOrbitalElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonSBASOrbitalElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonSBASOrbitalElements, t_PythonSBASOrbitalElements, PythonSBASOrbitalElements);

            void t_PythonSBASOrbitalElements::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonSBASOrbitalElements), &PY_TYPE_DEF(PythonSBASOrbitalElements), module, "PythonSBASOrbitalElements", 1);
            }

            void t_PythonSBASOrbitalElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "class_", make_descriptor(PythonSBASOrbitalElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "wrapfn_", make_descriptor(t_PythonSBASOrbitalElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSBASOrbitalElements), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonSBASOrbitalElements::initializeClass);
              JNINativeMethod methods[] = {
                { "getAGf0", "()D", (void *) t_PythonSBASOrbitalElements_getAGf00 },
                { "getAGf1", "()D", (void *) t_PythonSBASOrbitalElements_getAGf11 },
                { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSBASOrbitalElements_getDate2 },
                { "getIODN", "()I", (void *) t_PythonSBASOrbitalElements_getIODN3 },
                { "getPRN", "()I", (void *) t_PythonSBASOrbitalElements_getPRN4 },
                { "getTime", "()D", (void *) t_PythonSBASOrbitalElements_getTime5 },
                { "getToc", "()D", (void *) t_PythonSBASOrbitalElements_getToc6 },
                { "getWeek", "()I", (void *) t_PythonSBASOrbitalElements_getWeek7 },
                { "getX", "()D", (void *) t_PythonSBASOrbitalElements_getX8 },
                { "getXDot", "()D", (void *) t_PythonSBASOrbitalElements_getXDot9 },
                { "getXDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getXDotDot10 },
                { "getY", "()D", (void *) t_PythonSBASOrbitalElements_getY11 },
                { "getYDot", "()D", (void *) t_PythonSBASOrbitalElements_getYDot12 },
                { "getYDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getYDotDot13 },
                { "getZ", "()D", (void *) t_PythonSBASOrbitalElements_getZ14 },
                { "getZDot", "()D", (void *) t_PythonSBASOrbitalElements_getZDot15 },
                { "getZDotDot", "()D", (void *) t_PythonSBASOrbitalElements_getZDotDot16 },
                { "pythonDecRef", "()V", (void *) t_PythonSBASOrbitalElements_pythonDecRef17 },
              };
              env->registerNatives(cls, methods, 18);
            }

            static PyObject *t_PythonSBASOrbitalElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonSBASOrbitalElements::initializeClass, 1)))
                return NULL;
              return t_PythonSBASOrbitalElements::wrap_Object(PythonSBASOrbitalElements(((t_PythonSBASOrbitalElements *) arg)->object.this$));
            }
            static PyObject *t_PythonSBASOrbitalElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonSBASOrbitalElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonSBASOrbitalElements_init_(t_PythonSBASOrbitalElements *self, PyObject *args, PyObject *kwds)
            {
              PythonSBASOrbitalElements object((jobject) NULL);

              INT_CALL(object = PythonSBASOrbitalElements());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonSBASOrbitalElements_finalize(t_PythonSBASOrbitalElements *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonSBASOrbitalElements_pythonExtension(t_PythonSBASOrbitalElements *self, PyObject *args)
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

            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf00(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAGf0", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAGf0", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getAGf11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getAGf1", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getAGf1", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jobject JNICALL t_PythonSBASOrbitalElements_getDate2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getDate", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                throwTypeError("getDate", result);
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

            static jint JNICALL t_PythonSBASOrbitalElements_getIODN3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getIODN", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getIODN", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getPRN4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getPRN", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getPRN", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getTime5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getTime", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getTime", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getToc6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getToc", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getToc", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jint JNICALL t_PythonSBASOrbitalElements_getWeek7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jint value;
              PyObject *result = PyObject_CallMethod(obj, "getWeek", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "I", &value))
              {
                throwTypeError("getWeek", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jint) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getX8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getX", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getX", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDot9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getXDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getXDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getXDotDot10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getXDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getXDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getY11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getY", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getY", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDot12(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getYDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getYDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getYDotDot13(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getYDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getYDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZ14(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZ", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZ", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDot15(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static jdouble JNICALL t_PythonSBASOrbitalElements_getZDotDot16(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jdouble value;
              PyObject *result = PyObject_CallMethod(obj, "getZDotDot", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "D", &value))
              {
                throwTypeError("getZDotDot", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jdouble) 0;
            }

            static void JNICALL t_PythonSBASOrbitalElements_pythonDecRef17(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonSBASOrbitalElements::mids$[PythonSBASOrbitalElements::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonSBASOrbitalElements_get__self(t_PythonSBASOrbitalElements *self, void *data)
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
#include "org/orekit/frames/LOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LOF::class$ = NULL;
      jmethodID *LOF::mids$ = NULL;
      bool LOF::live$ = false;

      jclass LOF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LOF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_isQuasiInertial_b108b35ef48e27bd] = env->getMethodID(cls, "isQuasiInertial", "()Z");
          mids$[mid_rotationFromInertial_475182fd71c6851b] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_076f35c1feeb36b3] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOF_19113ef4e598287b] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOF_8088d480809c18c4] = env->getMethodID(cls, "rotationFromLOF", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_rotationFromLOFInToLOFOut_42ccf97cd80cbf07] = env->getStaticMethodID(cls, "rotationFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromLOFInToLOFOut_0e21e2ef6cf8e3e4] = env->getStaticMethodID(cls, "rotationFromLOFInToLOFOut", "(Lorg/hipparchus/Field;Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_transformFromInertial_2f33e71311570caf] = env->getMethodID(cls, "transformFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromInertial_ebe03c8ec9572105] = env->getMethodID(cls, "transformFromInertial", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromLOF_0bcf38086fabd19a] = env->getMethodID(cls, "transformFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_transformFromLOF_66098893b8c09c76] = env->getMethodID(cls, "transformFromLOF", "(Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOFInToLOFOut_8e8b5e9a81637430] = env->getStaticMethodID(cls, "transformFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/Transform;");
          mids$[mid_transformFromLOFInToLOFOut_9504937c4fb78046] = env->getStaticMethodID(cls, "transformFromLOFInToLOFOut", "(Lorg/orekit/frames/LOF;Lorg/orekit/frames/LOF;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LOF::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jboolean LOF::isQuasiInertial() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_b108b35ef48e27bd]);
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_475182fd71c6851b], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_076f35c1feeb36b3], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromLOF(const LOF & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_19113ef4e598287b], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromLOF(const ::org::hipparchus::Field & a0, const LOF & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::utils::FieldPVCoordinates & a3) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromLOF_8088d480809c18c4], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation LOF::rotationFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::PVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callStaticObjectMethod(cls, mids$[mid_rotationFromLOFInToLOFOut_42ccf97cd80cbf07], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation LOF::rotationFromLOFInToLOFOut(const ::org::hipparchus::Field & a0, const LOF & a1, const LOF & a2, const ::org::orekit::time::FieldAbsoluteDate & a3, const ::org::orekit::utils::FieldPVCoordinates & a4)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_rotationFromLOFInToLOFOut_0e21e2ef6cf8e3e4], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_transformFromInertial_2f33e71311570caf], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromInertial(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_transformFromInertial_ebe03c8ec9572105], a0.this$, a1.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromLOF(const LOF & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_transformFromLOF_0bcf38086fabd19a], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromLOF(const LOF & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::PVCoordinates & a2) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_transformFromLOF_66098893b8c09c76], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::frames::Transform LOF::transformFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::PVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_transformFromLOFInToLOFOut_8e8b5e9a81637430], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::frames::FieldTransform LOF::transformFromLOFInToLOFOut(const LOF & a0, const LOF & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::orekit::utils::FieldPVCoordinates & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_transformFromLOFInToLOFOut_9504937c4fb78046], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_LOF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOF_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LOF_getName(t_LOF *self);
      static PyObject *t_LOF_isQuasiInertial(t_LOF *self);
      static PyObject *t_LOF_rotationFromInertial(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_rotationFromLOF(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_rotationFromLOFInToLOFOut(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOF_transformFromInertial(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_transformFromLOF(t_LOF *self, PyObject *args);
      static PyObject *t_LOF_transformFromLOFInToLOFOut(PyTypeObject *type, PyObject *args);
      static PyObject *t_LOF_get__name(t_LOF *self, void *data);
      static PyObject *t_LOF_get__quasiInertial(t_LOF *self, void *data);
      static PyGetSetDef t_LOF__fields_[] = {
        DECLARE_GET_FIELD(t_LOF, name),
        DECLARE_GET_FIELD(t_LOF, quasiInertial),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LOF__methods_[] = {
        DECLARE_METHOD(t_LOF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LOF, getName, METH_NOARGS),
        DECLARE_METHOD(t_LOF, isQuasiInertial, METH_NOARGS),
        DECLARE_METHOD(t_LOF, rotationFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOF, rotationFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOF, rotationFromLOFInToLOFOut, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LOF, transformFromInertial, METH_VARARGS),
        DECLARE_METHOD(t_LOF, transformFromLOF, METH_VARARGS),
        DECLARE_METHOD(t_LOF, transformFromLOFInToLOFOut, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LOF)[] = {
        { Py_tp_methods, t_LOF__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LOF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LOF)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LOF, t_LOF, LOF);

      void t_LOF::install(PyObject *module)
      {
        installType(&PY_TYPE(LOF), &PY_TYPE_DEF(LOF), module, "LOF", 0);
      }

      void t_LOF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "class_", make_descriptor(LOF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "wrapfn_", make_descriptor(t_LOF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LOF), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LOF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LOF::initializeClass, 1)))
          return NULL;
        return t_LOF::wrap_Object(LOF(((t_LOF *) arg)->object.this$));
      }
      static PyObject *t_LOF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LOF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LOF_getName(t_LOF *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_LOF_isQuasiInertial(t_LOF *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isQuasiInertial());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_LOF_rotationFromInertial(t_LOF *self, PyObject *args)
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

      static PyObject *t_LOF_rotationFromLOF(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOF a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::hipparchus::Field::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.rotationFromLOF(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "rotationFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOF_rotationFromLOFInToLOFOut(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkkk", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::rotationFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            LOF a1((jobject) NULL);
            LOF a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldPVCoordinates a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KkkKK", ::org::hipparchus::Field::initializeClass, LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::rotationFromLOFInToLOFOut(a0, a1, a2, a3, a4));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "rotationFromLOFInToLOFOut", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromInertial(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformFromInertial(a0, a1));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.transformFromInertial(a0, a1));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformFromInertial", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromLOF(t_LOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkk", LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transformFromLOF(a0, a1, a2));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            LOF a0((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kKK", LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformFromLOF(a0, a1, a2));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformFromLOF", args);
        return NULL;
      }

      static PyObject *t_LOF_transformFromLOFInToLOFOut(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldPVCoordinates a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "kkKK", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::transformFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
          {
            LOF a0((jobject) NULL);
            LOF a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a3((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkkk", LOF::initializeClass, LOF::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::orekit::frames::LOF::transformFromLOFInToLOFOut(a0, a1, a2, a3));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "transformFromLOFInToLOFOut", args);
        return NULL;
      }

      static PyObject *t_LOF_get__name(t_LOF *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_LOF_get__quasiInertial(t_LOF *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isQuasiInertial());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *FieldHermiteRuleFactory::class$ = NULL;
          jmethodID *FieldHermiteRuleFactory::mids$ = NULL;
          bool FieldHermiteRuleFactory::live$ = false;

          jclass FieldHermiteRuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/FieldHermiteRuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
              mids$[mid_computeRule_e670405dd33862ee] = env->getMethodID(cls, "computeRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldHermiteRuleFactory::FieldHermiteRuleFactory(const ::org::hipparchus::Field & a0) : ::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}
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
      namespace integration {
        namespace gauss {
          static PyObject *t_FieldHermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldHermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldHermiteRuleFactory_of_(t_FieldHermiteRuleFactory *self, PyObject *args);
          static int t_FieldHermiteRuleFactory_init_(t_FieldHermiteRuleFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldHermiteRuleFactory_get__parameters_(t_FieldHermiteRuleFactory *self, void *data);
          static PyGetSetDef t_FieldHermiteRuleFactory__fields_[] = {
            DECLARE_GET_FIELD(t_FieldHermiteRuleFactory, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldHermiteRuleFactory__methods_[] = {
            DECLARE_METHOD(t_FieldHermiteRuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldHermiteRuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldHermiteRuleFactory, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldHermiteRuleFactory)[] = {
            { Py_tp_methods, t_FieldHermiteRuleFactory__methods_ },
            { Py_tp_init, (void *) t_FieldHermiteRuleFactory_init_ },
            { Py_tp_getset, t_FieldHermiteRuleFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldHermiteRuleFactory)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldAbstractRuleFactory),
            NULL
          };

          DEFINE_TYPE(FieldHermiteRuleFactory, t_FieldHermiteRuleFactory, FieldHermiteRuleFactory);
          PyObject *t_FieldHermiteRuleFactory::wrap_Object(const FieldHermiteRuleFactory& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldHermiteRuleFactory::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldHermiteRuleFactory *self = (t_FieldHermiteRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldHermiteRuleFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldHermiteRuleFactory::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldHermiteRuleFactory *self = (t_FieldHermiteRuleFactory *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldHermiteRuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldHermiteRuleFactory), &PY_TYPE_DEF(FieldHermiteRuleFactory), module, "FieldHermiteRuleFactory", 0);
          }

          void t_FieldHermiteRuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "class_", make_descriptor(FieldHermiteRuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "wrapfn_", make_descriptor(t_FieldHermiteRuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteRuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldHermiteRuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldHermiteRuleFactory::initializeClass, 1)))
              return NULL;
            return t_FieldHermiteRuleFactory::wrap_Object(FieldHermiteRuleFactory(((t_FieldHermiteRuleFactory *) arg)->object.this$));
          }
          static PyObject *t_FieldHermiteRuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldHermiteRuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldHermiteRuleFactory_of_(t_FieldHermiteRuleFactory *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldHermiteRuleFactory_init_(t_FieldHermiteRuleFactory *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldHermiteRuleFactory object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldHermiteRuleFactory(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
          static PyObject *t_FieldHermiteRuleFactory_get__parameters_(t_FieldHermiteRuleFactory *self, void *data)
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
#include "org/orekit/data/DataProvidersManager.h"
#include "java/util/List.h"
#include "org/orekit/data/FiltersManager.h"
#include "org/orekit/data/DataLoader.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataProvidersManager::class$ = NULL;
      jmethodID *DataProvidersManager::mids$ = NULL;
      bool DataProvidersManager::live$ = false;
      ::java::lang::String *DataProvidersManager::OREKIT_DATA_PATH = NULL;

      jclass DataProvidersManager::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataProvidersManager");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addDefaultProviders_0fa09c18fee449d5] = env->getMethodID(cls, "addDefaultProviders", "()V");
          mids$[mid_addProvider_0467e68987811603] = env->getMethodID(cls, "addProvider", "(Lorg/orekit/data/DataProvider;)V");
          mids$[mid_clearLoadedDataNames_0fa09c18fee449d5] = env->getMethodID(cls, "clearLoadedDataNames", "()V");
          mids$[mid_clearProviders_0fa09c18fee449d5] = env->getMethodID(cls, "clearProviders", "()V");
          mids$[mid_feed_b70d11da020d8106] = env->getMethodID(cls, "feed", "(Ljava/lang/String;Lorg/orekit/data/DataLoader;)Z");
          mids$[mid_getFiltersManager_8751d88cff64f6b0] = env->getMethodID(cls, "getFiltersManager", "()Lorg/orekit/data/FiltersManager;");
          mids$[mid_getLoadedDataNames_015730311a5bacdc] = env->getMethodID(cls, "getLoadedDataNames", "()Ljava/util/Set;");
          mids$[mid_getProviders_2afa36052df4765d] = env->getMethodID(cls, "getProviders", "()Ljava/util/List;");
          mids$[mid_isSupported_b27cfcb990b8e37c] = env->getMethodID(cls, "isSupported", "(Lorg/orekit/data/DataProvider;)Z");
          mids$[mid_removeProvider_d29423315e8237e2] = env->getMethodID(cls, "removeProvider", "(Lorg/orekit/data/DataProvider;)Lorg/orekit/data/DataProvider;");
          mids$[mid_resetFiltersToDefault_0fa09c18fee449d5] = env->getMethodID(cls, "resetFiltersToDefault", "()V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          OREKIT_DATA_PATH = new ::java::lang::String(env->getStaticObjectField(cls, "OREKIT_DATA_PATH", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DataProvidersManager::DataProvidersManager() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void DataProvidersManager::addDefaultProviders() const
      {
        env->callVoidMethod(this$, mids$[mid_addDefaultProviders_0fa09c18fee449d5]);
      }

      void DataProvidersManager::addProvider(const ::org::orekit::data::DataProvider & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addProvider_0467e68987811603], a0.this$);
      }

      void DataProvidersManager::clearLoadedDataNames() const
      {
        env->callVoidMethod(this$, mids$[mid_clearLoadedDataNames_0fa09c18fee449d5]);
      }

      void DataProvidersManager::clearProviders() const
      {
        env->callVoidMethod(this$, mids$[mid_clearProviders_0fa09c18fee449d5]);
      }

      jboolean DataProvidersManager::feed(const ::java::lang::String & a0, const ::org::orekit::data::DataLoader & a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_feed_b70d11da020d8106], a0.this$, a1.this$);
      }

      ::org::orekit::data::FiltersManager DataProvidersManager::getFiltersManager() const
      {
        return ::org::orekit::data::FiltersManager(env->callObjectMethod(this$, mids$[mid_getFiltersManager_8751d88cff64f6b0]));
      }

      ::java::util::Set DataProvidersManager::getLoadedDataNames() const
      {
        return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getLoadedDataNames_015730311a5bacdc]));
      }

      ::java::util::List DataProvidersManager::getProviders() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getProviders_2afa36052df4765d]));
      }

      jboolean DataProvidersManager::isSupported(const ::org::orekit::data::DataProvider & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_b27cfcb990b8e37c], a0.this$);
      }

      ::org::orekit::data::DataProvider DataProvidersManager::removeProvider(const ::org::orekit::data::DataProvider & a0) const
      {
        return ::org::orekit::data::DataProvider(env->callObjectMethod(this$, mids$[mid_removeProvider_d29423315e8237e2], a0.this$));
      }

      void DataProvidersManager::resetFiltersToDefault() const
      {
        env->callVoidMethod(this$, mids$[mid_resetFiltersToDefault_0fa09c18fee449d5]);
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
      static PyObject *t_DataProvidersManager_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataProvidersManager_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DataProvidersManager_init_(t_DataProvidersManager *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DataProvidersManager_addDefaultProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_addProvider(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_clearLoadedDataNames(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_clearProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_feed(t_DataProvidersManager *self, PyObject *args);
      static PyObject *t_DataProvidersManager_getFiltersManager(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_getLoadedDataNames(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_getProviders(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_isSupported(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_removeProvider(t_DataProvidersManager *self, PyObject *arg);
      static PyObject *t_DataProvidersManager_resetFiltersToDefault(t_DataProvidersManager *self);
      static PyObject *t_DataProvidersManager_get__filtersManager(t_DataProvidersManager *self, void *data);
      static PyObject *t_DataProvidersManager_get__loadedDataNames(t_DataProvidersManager *self, void *data);
      static PyObject *t_DataProvidersManager_get__providers(t_DataProvidersManager *self, void *data);
      static PyGetSetDef t_DataProvidersManager__fields_[] = {
        DECLARE_GET_FIELD(t_DataProvidersManager, filtersManager),
        DECLARE_GET_FIELD(t_DataProvidersManager, loadedDataNames),
        DECLARE_GET_FIELD(t_DataProvidersManager, providers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DataProvidersManager__methods_[] = {
        DECLARE_METHOD(t_DataProvidersManager, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvidersManager, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataProvidersManager, addDefaultProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, addProvider, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, clearLoadedDataNames, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, clearProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, feed, METH_VARARGS),
        DECLARE_METHOD(t_DataProvidersManager, getFiltersManager, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, getLoadedDataNames, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, getProviders, METH_NOARGS),
        DECLARE_METHOD(t_DataProvidersManager, isSupported, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, removeProvider, METH_O),
        DECLARE_METHOD(t_DataProvidersManager, resetFiltersToDefault, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataProvidersManager)[] = {
        { Py_tp_methods, t_DataProvidersManager__methods_ },
        { Py_tp_init, (void *) t_DataProvidersManager_init_ },
        { Py_tp_getset, t_DataProvidersManager__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataProvidersManager)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataProvidersManager, t_DataProvidersManager, DataProvidersManager);

      void t_DataProvidersManager::install(PyObject *module)
      {
        installType(&PY_TYPE(DataProvidersManager), &PY_TYPE_DEF(DataProvidersManager), module, "DataProvidersManager", 0);
      }

      void t_DataProvidersManager::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "class_", make_descriptor(DataProvidersManager::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "wrapfn_", make_descriptor(t_DataProvidersManager::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "boxfn_", make_descriptor(boxObject));
        env->getClass(DataProvidersManager::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataProvidersManager), "OREKIT_DATA_PATH", make_descriptor(j2p(*DataProvidersManager::OREKIT_DATA_PATH)));
      }

      static PyObject *t_DataProvidersManager_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataProvidersManager::initializeClass, 1)))
          return NULL;
        return t_DataProvidersManager::wrap_Object(DataProvidersManager(((t_DataProvidersManager *) arg)->object.this$));
      }
      static PyObject *t_DataProvidersManager_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataProvidersManager::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DataProvidersManager_init_(t_DataProvidersManager *self, PyObject *args, PyObject *kwds)
      {
        DataProvidersManager object((jobject) NULL);

        INT_CALL(object = DataProvidersManager());
        self->object = object;

        return 0;
      }

      static PyObject *t_DataProvidersManager_addDefaultProviders(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.addDefaultProviders());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_addProvider(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addProvider(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addProvider", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_clearLoadedDataNames(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.clearLoadedDataNames());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_clearProviders(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.clearProviders());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_feed(t_DataProvidersManager *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::data::DataLoader a1((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "sk", ::org::orekit::data::DataLoader::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.feed(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "feed", args);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_getFiltersManager(t_DataProvidersManager *self)
      {
        ::org::orekit::data::FiltersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiltersManager());
        return ::org::orekit::data::t_FiltersManager::wrap_Object(result);
      }

      static PyObject *t_DataProvidersManager_getLoadedDataNames(t_DataProvidersManager *self)
      {
        ::java::util::Set result((jobject) NULL);
        OBJ_CALL(result = self->object.getLoadedDataNames());
        return ::java::util::t_Set::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_DataProvidersManager_getProviders(t_DataProvidersManager *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getProviders());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::data::PY_TYPE(DataProvider));
      }

      static PyObject *t_DataProvidersManager_isSupported(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_removeProvider(t_DataProvidersManager *self, PyObject *arg)
      {
        ::org::orekit::data::DataProvider a0((jobject) NULL);
        ::org::orekit::data::DataProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.removeProvider(a0));
          return ::org::orekit::data::t_DataProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "removeProvider", arg);
        return NULL;
      }

      static PyObject *t_DataProvidersManager_resetFiltersToDefault(t_DataProvidersManager *self)
      {
        OBJ_CALL(self->object.resetFiltersToDefault());
        Py_RETURN_NONE;
      }

      static PyObject *t_DataProvidersManager_get__filtersManager(t_DataProvidersManager *self, void *data)
      {
        ::org::orekit::data::FiltersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiltersManager());
        return ::org::orekit::data::t_FiltersManager::wrap_Object(value);
      }

      static PyObject *t_DataProvidersManager_get__loadedDataNames(t_DataProvidersManager *self, void *data)
      {
        ::java::util::Set value((jobject) NULL);
        OBJ_CALL(value = self->object.getLoadedDataNames());
        return ::java::util::t_Set::wrap_Object(value);
      }

      static PyObject *t_DataProvidersManager_get__providers(t_DataProvidersManager *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getProviders());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeManeuverKey::class$ = NULL;
              jmethodID *AttitudeManeuverKey::mids$ = NULL;
              bool AttitudeManeuverKey::live$ = false;
              AttitudeManeuverKey *AttitudeManeuverKey::ACTUATOR_USED = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::COMMENT = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_BEGIN_TIME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_DURATION = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_END_TIME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_ID = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_PREV_ID = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::MAN_PURPOSE = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_ATTITUDE = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_MOMENTUM = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_MOM_FRAME = NULL;
              AttitudeManeuverKey *AttitudeManeuverKey::TARGET_SPINRATE = NULL;

              jclass AttitudeManeuverKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_b59763a79eda10b2] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuver;)Z");
                  mids$[mid_valueOf_d0eb52be340b1a50] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;");
                  mids$[mid_values_b0be67a4ccd5c917] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACTUATOR_USED = new AttitudeManeuverKey(env->getStaticObjectField(cls, "ACTUATOR_USED", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  COMMENT = new AttitudeManeuverKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_BEGIN_TIME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_BEGIN_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_DURATION = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_DURATION", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_END_TIME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_END_TIME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_ID = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_PREV_ID = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  MAN_PURPOSE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "MAN_PURPOSE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_ATTITUDE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_ATTITUDE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_MOMENTUM = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_MOMENTUM", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_MOM_FRAME = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_MOM_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  TARGET_SPINRATE = new AttitudeManeuverKey(env->getStaticObjectField(cls, "TARGET_SPINRATE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeManeuverKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeManeuverKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_b59763a79eda10b2], a0.this$, a1.this$, a2.this$);
              }

              AttitudeManeuverKey AttitudeManeuverKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeManeuverKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d0eb52be340b1a50], a0.this$));
              }

              JArray< AttitudeManeuverKey > AttitudeManeuverKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeManeuverKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b0be67a4ccd5c917]));
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
              static PyObject *t_AttitudeManeuverKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuverKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeManeuverKey_of_(t_AttitudeManeuverKey *self, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_process(t_AttitudeManeuverKey *self, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeManeuverKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeManeuverKey_get__parameters_(t_AttitudeManeuverKey *self, void *data);
              static PyGetSetDef t_AttitudeManeuverKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeManeuverKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeManeuverKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeManeuverKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeManeuverKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeManeuverKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeManeuverKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeManeuverKey)[] = {
                { Py_tp_methods, t_AttitudeManeuverKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeManeuverKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeManeuverKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeManeuverKey, t_AttitudeManeuverKey, AttitudeManeuverKey);
              PyObject *t_AttitudeManeuverKey::wrap_Object(const AttitudeManeuverKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeManeuverKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeManeuverKey *self = (t_AttitudeManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeManeuverKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeManeuverKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeManeuverKey *self = (t_AttitudeManeuverKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeManeuverKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeManeuverKey), &PY_TYPE_DEF(AttitudeManeuverKey), module, "AttitudeManeuverKey", 0);
              }

              void t_AttitudeManeuverKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "class_", make_descriptor(AttitudeManeuverKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "wrapfn_", make_descriptor(t_AttitudeManeuverKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeManeuverKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "ACTUATOR_USED", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::ACTUATOR_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "COMMENT", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_BEGIN_TIME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_BEGIN_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_DURATION", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_DURATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_END_TIME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_END_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_ID", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_PREV_ID", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "MAN_PURPOSE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::MAN_PURPOSE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_ATTITUDE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_ATTITUDE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_MOMENTUM", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_MOMENTUM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_MOM_FRAME", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_MOM_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeManeuverKey), "TARGET_SPINRATE", make_descriptor(t_AttitudeManeuverKey::wrap_Object(*AttitudeManeuverKey::TARGET_SPINRATE)));
              }

              static PyObject *t_AttitudeManeuverKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeManeuverKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeManeuverKey::wrap_Object(AttitudeManeuverKey(((t_AttitudeManeuverKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeManeuverKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeManeuverKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeManeuverKey_of_(t_AttitudeManeuverKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeManeuverKey_process(t_AttitudeManeuverKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuver::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeManeuverKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeManeuverKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuverKey::valueOf(a0));
                  return t_AttitudeManeuverKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeManeuverKey_values(PyTypeObject *type)
              {
                JArray< AttitudeManeuverKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeManeuverKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeManeuverKey::wrap_jobject);
              }
              static PyObject *t_AttitudeManeuverKey_get__parameters_(t_AttitudeManeuverKey *self, void *data)
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
#include "org/orekit/utils/PythonExtendedPVCoordinatesProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonExtendedPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonExtendedPVCoordinatesProvider::mids$ = NULL;
      bool PythonExtendedPVCoordinatesProvider::live$ = false;

      jclass PythonExtendedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonExtendedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonExtendedPVCoordinatesProvider::PythonExtendedPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonExtendedPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonExtendedPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonExtendedPVCoordinatesProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonExtendedPVCoordinatesProvider_init_(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_finalize(t_PythonExtendedPVCoordinatesProvider *self);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_pythonExtension(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonExtendedPVCoordinatesProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonExtendedPVCoordinatesProvider_get__self(t_PythonExtendedPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonExtendedPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonExtendedPVCoordinatesProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonExtendedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonExtendedPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonExtendedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonExtendedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonExtendedPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonExtendedPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonExtendedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonExtendedPVCoordinatesProvider, t_PythonExtendedPVCoordinatesProvider, PythonExtendedPVCoordinatesProvider);

      void t_PythonExtendedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonExtendedPVCoordinatesProvider), &PY_TYPE_DEF(PythonExtendedPVCoordinatesProvider), module, "PythonExtendedPVCoordinatesProvider", 1);
      }

      void t_PythonExtendedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "class_", make_descriptor(PythonExtendedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonExtendedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonExtendedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonExtendedPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1 },
          { "pythonDecRef", "()V", (void *) t_PythonExtendedPVCoordinatesProvider_pythonDecRef2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonExtendedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonExtendedPVCoordinatesProvider::wrap_Object(PythonExtendedPVCoordinatesProvider(((t_PythonExtendedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonExtendedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonExtendedPVCoordinatesProvider_init_(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonExtendedPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonExtendedPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_finalize(t_PythonExtendedPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_pythonExtension(t_PythonExtendedPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonExtendedPVCoordinatesProvider_getPVCoordinates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &value))
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

      static void JNICALL t_PythonExtendedPVCoordinatesProvider_pythonDecRef2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonExtendedPVCoordinatesProvider::mids$[PythonExtendedPVCoordinatesProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonExtendedPVCoordinatesProvider_get__self(t_PythonExtendedPVCoordinatesProvider *self, void *data)
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
#include "org/orekit/utils/OccultationEngine$OccultationAngles.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine$OccultationAngles::class$ = NULL;
      jmethodID *OccultationEngine$OccultationAngles::mids$ = NULL;
      bool OccultationEngine$OccultationAngles::live$ = false;

      jclass OccultationEngine$OccultationAngles::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine$OccultationAngles");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLimbRadius_dff5885c2c873297] = env->getMethodID(cls, "getLimbRadius", "()D");
          mids$[mid_getOccultedApparentRadius_dff5885c2c873297] = env->getMethodID(cls, "getOccultedApparentRadius", "()D");
          mids$[mid_getSeparation_dff5885c2c873297] = env->getMethodID(cls, "getSeparation", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble OccultationEngine$OccultationAngles::getLimbRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLimbRadius_dff5885c2c873297]);
      }

      jdouble OccultationEngine$OccultationAngles::getOccultedApparentRadius() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOccultedApparentRadius_dff5885c2c873297]);
      }

      jdouble OccultationEngine$OccultationAngles::getSeparation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSeparation_dff5885c2c873297]);
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
      static PyObject *t_OccultationEngine$OccultationAngles_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$OccultationAngles_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$OccultationAngles_getLimbRadius(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_getOccultedApparentRadius(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_getSeparation(t_OccultationEngine$OccultationAngles *self);
      static PyObject *t_OccultationEngine$OccultationAngles_get__limbRadius(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$OccultationAngles_get__occultedApparentRadius(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$OccultationAngles_get__separation(t_OccultationEngine$OccultationAngles *self, void *data);
      static PyGetSetDef t_OccultationEngine$OccultationAngles__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, limbRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, occultedApparentRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$OccultationAngles, separation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine$OccultationAngles__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getLimbRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getOccultedApparentRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$OccultationAngles, getSeparation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine$OccultationAngles)[] = {
        { Py_tp_methods, t_OccultationEngine$OccultationAngles__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OccultationEngine$OccultationAngles__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine$OccultationAngles)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine$OccultationAngles, t_OccultationEngine$OccultationAngles, OccultationEngine$OccultationAngles);

      void t_OccultationEngine$OccultationAngles::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine$OccultationAngles), &PY_TYPE_DEF(OccultationEngine$OccultationAngles), module, "OccultationEngine$OccultationAngles", 0);
      }

      void t_OccultationEngine$OccultationAngles::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "class_", make_descriptor(OccultationEngine$OccultationAngles::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "wrapfn_", make_descriptor(t_OccultationEngine$OccultationAngles::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$OccultationAngles), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine$OccultationAngles_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine$OccultationAngles::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine$OccultationAngles::wrap_Object(OccultationEngine$OccultationAngles(((t_OccultationEngine$OccultationAngles *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine$OccultationAngles_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine$OccultationAngles::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getLimbRadius(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLimbRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getOccultedApparentRadius(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOccultedApparentRadius());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_getSeparation(t_OccultationEngine$OccultationAngles *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSeparation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__limbRadius(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLimbRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__occultedApparentRadius(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOccultedApparentRadius());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_OccultationEngine$OccultationAngles_get__separation(t_OccultationEngine$OccultationAngles *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSeparation());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/PythonProcessingState.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
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
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_processToken_85d9863c57bc3b0c] = env->getMethodID(cls, "processToken", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)Z");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonProcessingState::PythonProcessingState() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonProcessingState::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonProcessingState::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonProcessingState::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_492808a339bfa35f]);
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
              jlong ptr = jenv->CallLongMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonProcessingState::mids$[PythonProcessingState::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
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
